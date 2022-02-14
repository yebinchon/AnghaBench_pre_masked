
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_addrinfo {struct rdma_addrinfo* ai_dst_addr; struct rdma_addrinfo* ai_src_addr; struct rdma_addrinfo* ai_dst_canonname; struct rdma_addrinfo* ai_src_canonname; struct rdma_addrinfo* ai_route; struct rdma_addrinfo* ai_connect; struct rdma_addrinfo* ai_next; } ;


 int FUNC_0 (struct rdma_addrinfo*) ;

void FUNC_1(struct rdma_addrinfo *VAR_0)
{
 struct rdma_addrinfo *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0;
  VAR_0 = VAR_0->ai_next;

  if (VAR_1->ai_connect)
   FUNC_0(VAR_1->ai_connect);

  if (VAR_1->ai_route)
   FUNC_0(VAR_1->ai_route);

  if (VAR_1->ai_src_canonname)
   FUNC_0(VAR_1->ai_src_canonname);

  if (VAR_1->ai_dst_canonname)
   FUNC_0(VAR_1->ai_dst_canonname);

  if (VAR_1->ai_src_addr)
   FUNC_0(VAR_1->ai_src_addr);

  if (VAR_1->ai_dst_addr)
   FUNC_0(VAR_1->ai_dst_addr);

  FUNC_0(VAR_1);
 }
}
