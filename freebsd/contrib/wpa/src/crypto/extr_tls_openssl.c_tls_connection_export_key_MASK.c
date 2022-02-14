
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_connection {int ssl; } ;


 int FUNC_0 (int ,int *,size_t,char const*,int ,int const*,size_t,int ) ;
 int FUNC_1 (char const*) ;

int FUNC_2(void *VAR_0, struct tls_connection *VAR_1,
         const char *VAR_2, const u8 *VAR_3,
         size_t VAR_4, u8 *VAR_5, size_t VAR_6)
{
 if (!VAR_1 ||
     FUNC_0(VAR_1->ssl, VAR_5, VAR_6, VAR_2,
           FUNC_1(VAR_2), VAR_3, VAR_4,
           VAR_3 != ((void*)0)) != 1)
  return -1;
 return 0;
}
