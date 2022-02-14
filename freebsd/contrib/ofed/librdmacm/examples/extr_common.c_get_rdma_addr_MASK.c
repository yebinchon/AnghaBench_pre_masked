
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_addrinfo {int ai_flags; int ai_src_len; int ai_src_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct rdma_addrinfo*) ;
 int FUNC_1 (char const*,char const*,struct rdma_addrinfo*,struct rdma_addrinfo**) ;

int FUNC_2(const char *VAR_1, const char *VAR_2, const char *VAR_3,
    struct rdma_addrinfo *VAR_4, struct rdma_addrinfo **VAR_5)
{
 struct rdma_addrinfo VAR_6, *VAR_7;
 int VAR_8;

 if (VAR_4->ai_flags & VAR_0)
  return FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5);

 VAR_6 = *VAR_4;
 if (VAR_1) {
  VAR_6.ai_flags |= VAR_0;
  VAR_8 = FUNC_1(VAR_1, ((void*)0), &VAR_6, &VAR_7);
  if (VAR_8)
   return VAR_8;

  VAR_6.ai_src_addr = VAR_7->ai_src_addr;
  VAR_6.ai_src_len = VAR_7->ai_src_len;
  VAR_6.ai_flags &= ~VAR_0;
 }

 VAR_8 = FUNC_1(VAR_2, VAR_3, &VAR_6, VAR_5);
 if (VAR_1)
  FUNC_0(VAR_7);

 return VAR_8;
}
