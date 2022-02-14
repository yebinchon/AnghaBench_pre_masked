
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int *,char const*) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,char const*,...) ;

__attribute__((used)) static int
FUNC_5(SSL_CTX *VAR_2, const char *VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4 < 1) {
  FUNC_4(VAR_0, "SSL: Cannot load certificate `%s': %s", VAR_3, FUNC_3());
  return (-1);
 }


 VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_1);
 if (VAR_4 < 1) {
  FUNC_4(VAR_0, "SSL: Cannot load private key `%s': %s", VAR_3, FUNC_3());
  return (-1);
 }





 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 < 1) {
  FUNC_4(VAR_0, "SSL: Cannot check private key: %s", FUNC_3());
  return (-1);
 }

 return (0);
}
