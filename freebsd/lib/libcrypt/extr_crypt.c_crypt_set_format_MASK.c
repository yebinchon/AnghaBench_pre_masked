
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypt_format {int * name; } ;


 struct crypt_format const* VAR_0 ;
 struct crypt_format* VAR_1 ;
 scalar_t__ FUNC_0 (int *,char const*) ;

int
FUNC_1(const char *VAR_2)
{
 const struct crypt_format *VAR_3;

 for (VAR_3 = VAR_1; VAR_3->name != ((void*)0); ++VAR_3) {
  if (FUNC_0(VAR_3->name, VAR_2) == 0) {
   VAR_0 = VAR_3;
   return (1);
  }
 }
 return (0);
}
