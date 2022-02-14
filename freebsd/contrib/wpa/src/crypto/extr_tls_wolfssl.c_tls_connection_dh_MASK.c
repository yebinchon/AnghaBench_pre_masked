
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_connection {int ssl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int const*,size_t,int ) ;
 scalar_t__ FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct tls_connection *VAR_4, const char *VAR_5,
        const u8 *VAR_6, size_t VAR_7)
{
 if (!VAR_5 && !VAR_6)
  return 0;

 FUNC_2(VAR_4->ssl);

 if (VAR_6) {
  if (FUNC_0(VAR_4->ssl, VAR_6, VAR_7,
         VAR_2) < 0) {
   FUNC_3(VAR_1, "SSL: use DH DER blob failed");
   return -1;
  }
  FUNC_3(VAR_0, "SSL: use DH blob OK");
  return 0;
 }

 if (VAR_5) {
  FUNC_3(VAR_1, "SSL: use DH PEM file: %s", VAR_5);
  if (FUNC_1(VAR_4->ssl, VAR_5,
       VAR_3) < 0) {
   FUNC_3(VAR_1, "SSL: use DH PEM file failed");
   if (FUNC_1(VAR_4->ssl, VAR_5,
        VAR_2) < 0) {
    FUNC_3(VAR_1,
        "SSL: use DH DER file failed");
    return -1;
   }
  }
  FUNC_3(VAR_0, "SSL: use DH file OK");
  return 0;
 }

 return 0;
}
