
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_4__ {int sa_family; } ;
struct TYPE_5__ {int dst_addr; TYPE_1__ src_addr; } ;
struct TYPE_6__ {TYPE_2__ addr; } ;
struct rdma_cm_id {TYPE_3__ route; } ;
struct rdma_addrinfo {scalar_t__ ai_route_len; int ai_route; int * ai_dst_addr; void* ai_dst_len; TYPE_1__* ai_src_addr; void* ai_src_len; int ai_family; int ai_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rdma_addrinfo*,int ,int) ;
 int FUNC_1 (struct rdma_addrinfo*) ;
 int FUNC_2 (int *,int *,struct rdma_addrinfo*,struct rdma_addrinfo**) ;
 int FUNC_3 (struct rdma_cm_id*,int ,int ,int ,scalar_t__) ;
 void* FUNC_4 (struct sockaddr*) ;

__attribute__((used)) static int FUNC_5(struct rdma_cm_id *VAR_3)
{
 struct rdma_addrinfo VAR_4, *VAR_5;
 int VAR_6;

 FUNC_0(&VAR_4, 0, sizeof VAR_4);
 VAR_4.ai_flags = VAR_0;
 VAR_4.ai_family = VAR_3->route.addr.src_addr.sa_family;
 VAR_4.ai_src_len = FUNC_4((struct sockaddr *) &VAR_3->route.addr.src_addr);
 VAR_4.ai_src_addr = &VAR_3->route.addr.src_addr;
 VAR_4.ai_dst_len = FUNC_4((struct sockaddr *) &VAR_3->route.addr.dst_addr);
 VAR_4.ai_dst_addr = &VAR_3->route.addr.dst_addr;

 VAR_6 = FUNC_2(((void*)0), ((void*)0), &VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5->ai_route_len)
  VAR_6 = FUNC_3(VAR_3, VAR_1, VAR_2,
          VAR_5->ai_route, VAR_5->ai_route_len);
 else
  VAR_6 = -1;

 FUNC_1(VAR_5);
 return VAR_6;
}
