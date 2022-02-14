
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
typedef int u_int ;
typedef int u_char ;
struct in6_addr {int dummy; } ;
typedef int sockaddr_u ;
typedef int addr_refid ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_2 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *,int *,int) ;
 int FUNC_13 (int ,char*) ;

u_int32
FUNC_14(sockaddr_u *VAR_3)
{
 u_char VAR_4[VAR_0];
 u_int32 VAR_5;
 EVP_MD_CTX *VAR_6;
 u_int VAR_7;

 if (FUNC_8(VAR_3))
  return (FUNC_9(VAR_3));

 FUNC_7();

 VAR_6 = FUNC_4();






 if (!FUNC_1(VAR_6, FUNC_6(), ((void*)0))) {
  FUNC_13(VAR_2,
      "MD5 init failed");
  FUNC_3(VAR_6);
  FUNC_11(1);
 }

 FUNC_2(VAR_6, (u_char *)FUNC_10(VAR_3),
     sizeof(struct in6_addr));
 FUNC_0(VAR_6, VAR_4, &VAR_7);
 FUNC_3(VAR_6);
 FUNC_12(&VAR_5, VAR_4, sizeof(VAR_5));
 return (VAR_5);
}
