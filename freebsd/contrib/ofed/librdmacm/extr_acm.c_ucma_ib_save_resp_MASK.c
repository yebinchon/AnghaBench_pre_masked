
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; int sin6_family; } ;
struct sockaddr_in {int sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct rdma_addrinfo {int ai_src_len; int ai_route_len; int * ai_route; struct sockaddr* ai_src_addr; } ;
struct ibv_path_data {int dummy; } ;
struct TYPE_3__ {int length; } ;
struct acm_msg {struct acm_ep_addr_data* resolve_data; TYPE_1__ hdr; } ;
struct TYPE_4__ {struct ibv_path_data addr; } ;
struct acm_ep_addr_data {int type; int flags; TYPE_2__ info; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int *,struct ibv_path_data*,int) ;

__attribute__((used)) static void FUNC_2(struct rdma_addrinfo *VAR_5, struct acm_msg *VAR_6)
{
 struct acm_ep_addr_data *VAR_7;
 struct ibv_path_data *VAR_8 = ((void*)0);
 struct sockaddr_in *VAR_9;
 struct sockaddr_in6 *VAR_10;
 int VAR_11, VAR_12, VAR_13 = 0;

 VAR_12 = (VAR_6->hdr.length - VAR_2) / VAR_1;
 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  VAR_7 = &VAR_6->resolve_data[VAR_11];
  switch (VAR_7->type) {
  case 128:
   VAR_7->type = 0;
   if (!VAR_8)
    VAR_8 = (struct ibv_path_data *) VAR_7;
   VAR_13++;
   break;
  case 130:
   if (!(VAR_7->flags & VAR_0) || VAR_5->ai_src_len)
    break;

   VAR_9 = FUNC_0(1, sizeof(*VAR_9));
   if (!VAR_9)
    break;

   VAR_9->sin_family = VAR_3;
   FUNC_1(&VAR_9->sin_addr, &VAR_7->info.addr, 4);
   VAR_5->ai_src_len = sizeof(*VAR_9);
   VAR_5->ai_src_addr = (struct sockaddr *) VAR_9;
   break;
  case 129:
   if (!(VAR_7->flags & VAR_0) || VAR_5->ai_src_len)
    break;

   VAR_10 = FUNC_0(1, sizeof(*VAR_10));
   if (!VAR_10)
    break;

   VAR_10->sin6_family = VAR_4;
   FUNC_1(&VAR_10->sin6_addr, &VAR_7->info.addr, 16);
   VAR_5->ai_src_len = sizeof(*VAR_10);
   VAR_5->ai_src_addr = (struct sockaddr *) VAR_10;
   break;
  default:
   break;
  }
 }

 VAR_5->ai_route = FUNC_0(VAR_13, sizeof(*VAR_8));
 if (VAR_5->ai_route) {
  FUNC_1(VAR_5->ai_route, VAR_8, VAR_13 * sizeof(*VAR_8));
  VAR_5->ai_route_len = VAR_13 * sizeof(*VAR_8);
 }
}
