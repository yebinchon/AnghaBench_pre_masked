
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_addrinfo {int ai_route_len; struct rdma_addrinfo* ai_next; void* ai_dst_canonname; void* ai_src_canonname; void* ai_route; int ai_port_space; int ai_qp_type; int ai_family; int ai_flags; } ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (struct rdma_addrinfo*) ;
 void* FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (struct rdma_addrinfo*,struct rdma_addrinfo*) ;
 scalar_t__ FUNC_5 (struct rdma_addrinfo*,struct rdma_addrinfo*) ;

__attribute__((used)) static void FUNC_6(struct rdma_addrinfo **VAR_1)
{
 struct rdma_addrinfo *VAR_2;

 VAR_2 = FUNC_0(1, sizeof(*VAR_2));
 if (!VAR_2)
  return;

 VAR_2->ai_flags = (*VAR_1)->ai_flags;
 VAR_2->ai_family = VAR_0;
 VAR_2->ai_qp_type = (*VAR_1)->ai_qp_type;
 VAR_2->ai_port_space = (*VAR_1)->ai_port_space;

 VAR_2->ai_route = FUNC_0(1, (*VAR_1)->ai_route_len);
 if (!VAR_2->ai_route)
  goto err;

 FUNC_1(VAR_2->ai_route, (*VAR_1)->ai_route, (*VAR_1)->ai_route_len);
 VAR_2->ai_route_len = (*VAR_1)->ai_route_len;

 if ((*VAR_1)->ai_src_canonname) {
  VAR_2->ai_src_canonname = FUNC_3((*VAR_1)->ai_src_canonname);
  if (!VAR_2->ai_src_canonname)
   goto err;
 }

 if ((*VAR_1)->ai_dst_canonname) {
  VAR_2->ai_dst_canonname = FUNC_3((*VAR_1)->ai_dst_canonname);
  if (!VAR_2->ai_dst_canonname)
   goto err;
 }

 if (FUNC_5(VAR_2, *VAR_1))
  goto err;

 if (FUNC_4(VAR_2, *VAR_1))
  goto err;

 VAR_2->ai_next = *VAR_1;
 *VAR_1 = VAR_2;
 return;

err:
 FUNC_2(VAR_2);
}
