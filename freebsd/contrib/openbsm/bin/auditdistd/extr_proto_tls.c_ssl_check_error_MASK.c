
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (int *,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(SSL *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);

 switch (VAR_4) {
 case 133:
  return (0);
 case 130:
  FUNC_1(2, "SSL_ERROR_WANT_READ");
  return (-1);
 case 129:
  FUNC_1(2, "SSL_ERROR_WANT_WRITE");
  return (-1);
 case 128:
  FUNC_2(VAR_0, "Connection closed.");
 case 131:
  FUNC_3();
  FUNC_2(VAR_1, "SSL I/O error.");
 case 132:
  FUNC_3();
  FUNC_2(VAR_1, "SSL protocol error.");
 default:
  FUNC_3();
  FUNC_2(VAR_1, "Unknown SSL error (%d).", VAR_4);
 }
}
