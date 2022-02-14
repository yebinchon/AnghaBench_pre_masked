
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_addrinfo {int dummy; } ;
struct addrinfo {int dummy; } ;


 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 struct rdma_addrinfo const VAR_0 ;
 int FUNC_2 (struct addrinfo*,struct rdma_addrinfo const*) ;
 int FUNC_3 (struct rdma_addrinfo*,struct rdma_addrinfo const*,struct addrinfo*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, const char *VAR_2,
       const struct rdma_addrinfo *VAR_3,
       struct rdma_addrinfo *VAR_4)
{
 struct addrinfo VAR_5;
 struct addrinfo *VAR_6;
 int VAR_7;

 if (VAR_3 != &VAR_0) {
  FUNC_2(&VAR_5, VAR_3);
  VAR_7 = FUNC_1(VAR_1, VAR_2, &VAR_5, &VAR_6);
 } else {
  VAR_7 = FUNC_1(VAR_1, VAR_2, ((void*)0), &VAR_6);
 }
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_4, VAR_3, VAR_6);
 FUNC_0(VAR_6);
 return VAR_7;
}
