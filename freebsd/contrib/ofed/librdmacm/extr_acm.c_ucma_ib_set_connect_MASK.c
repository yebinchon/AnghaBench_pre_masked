
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct rdma_addrinfo {scalar_t__ ai_family; int ai_connect_len; struct ib_connect_hdr* ai_connect; scalar_t__ ai_dst_addr; scalar_t__ ai_src_addr; } ;
struct ib_connect_hdr {int ip_version; int cma_dst_ip6; int cma_src_ip6; int cma_dst_ip4; int cma_src_ip4; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct ib_connect_hdr* FUNC_1 (int,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(struct rdma_addrinfo *VAR_3,
          struct rdma_addrinfo *VAR_4)
{
 struct ib_connect_hdr *VAR_5;

 if (VAR_4->ai_family == VAR_0)
  return 0;

 VAR_5 = FUNC_1(1, sizeof(*VAR_5));
 if (!VAR_5)
  return FUNC_0(VAR_2);

 if (VAR_4->ai_family == VAR_1) {
  VAR_5->ip_version = 4 << 4;
  FUNC_2(&VAR_5->cma_src_ip4,
         &((struct sockaddr_in *) VAR_4->ai_src_addr)->sin_addr, 4);
  FUNC_2(&VAR_5->cma_dst_ip4,
         &((struct sockaddr_in *) VAR_4->ai_dst_addr)->sin_addr, 4);
 } else {
  VAR_5->ip_version = 6 << 4;
  FUNC_2(&VAR_5->cma_src_ip6,
         &((struct sockaddr_in6 *) VAR_4->ai_src_addr)->sin6_addr, 16);
  FUNC_2(&VAR_5->cma_dst_ip6,
         &((struct sockaddr_in6 *) VAR_4->ai_dst_addr)->sin6_addr, 16);
 }

 VAR_3->ai_connect = VAR_5;
 VAR_3->ai_connect_len = sizeof(*VAR_5);
 return 0;
}
