
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_connection {int ssl; } ;


 scalar_t__ FUNC_0 (int ,int *,size_t,char const*) ;

int FUNC_1(void *VAR_0, struct tls_connection *VAR_1,
         const char *VAR_2, const u8 *VAR_3,
         size_t VAR_4, u8 *VAR_5, size_t VAR_6)
{
 if (VAR_3)
  return -1;
 if (!VAR_1 || FUNC_0(VAR_1->ssl, VAR_5, VAR_6, VAR_2) != 0)
  return -1;
 return 0;
}
