
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection {int * ssl; } ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,char const*,size_t) ;

int FUNC_2(void *VAR_0, struct tls_connection *VAR_1,
      char *VAR_2, size_t VAR_3)
{
 const char *VAR_4;
 if (VAR_1 == ((void*)0) || VAR_1->ssl == ((void*)0))
  return -1;

 VAR_4 = FUNC_0(VAR_1->ssl);
 if (VAR_4 == ((void*)0))
  return -1;

 FUNC_1(VAR_2, VAR_4, VAR_3);
 return 0;
}
