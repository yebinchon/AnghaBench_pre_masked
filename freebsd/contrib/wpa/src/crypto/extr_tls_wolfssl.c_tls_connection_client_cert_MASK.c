
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_connection {int ssl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int const*,size_t,int ) ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (int ,char const*,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct tls_connection *VAR_3,
          const char *VAR_4,
          const u8 *VAR_5,
          size_t VAR_6)
{
 if (!VAR_4 && !VAR_5)
  return 0;

 if (VAR_5) {
  if (FUNC_0(
       VAR_3->ssl, VAR_5, VAR_6,
       VAR_2) < 0) {
   FUNC_3(VAR_1,
       "SSL: use client cert DER blob failed");
   return -1;
  }
  FUNC_3(VAR_0, "SSL: use client cert blob OK");
  return 0;
 }

 if (VAR_4) {
  if (FUNC_1(VAR_3->ssl,
             VAR_4) < 0) {
   FUNC_3(VAR_1,
       "SSL: use client cert PEM file failed");
   if (FUNC_2(
        VAR_3->ssl, VAR_4,
        VAR_2) < 0) {
    FUNC_3(VAR_1,
        "SSL: use client cert DER file failed");
    return -1;
   }
  }
  FUNC_3(VAR_0, "SSL: use client cert file OK");
  return 0;
 }

 return 0;
}
