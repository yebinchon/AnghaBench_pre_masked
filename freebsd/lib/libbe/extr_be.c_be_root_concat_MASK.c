
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* root; } ;
typedef TYPE_1__ libbe_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*,size_t,char*,char const*,char const*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;
 int * FUNC_3 (char const*,char) ;
 char const* FUNC_4 (char const*,char const*) ;

int
FUNC_5(libbe_handle_t *VAR_4, const char *VAR_5, char *VAR_6)
{
 size_t VAR_7, VAR_8;

 VAR_7 = FUNC_2(VAR_5);
 VAR_8 = FUNC_2(VAR_4->root);


 if (FUNC_3(VAR_5, '/') != ((void*)0)) {
  if (FUNC_4(VAR_5, VAR_4->root) != VAR_5)
   return (VAR_0);

  if (VAR_7 >= VAR_3)
   return (VAR_1);

  FUNC_1(VAR_6, VAR_5, VAR_3);
  return (VAR_2);
 } else if (VAR_7 + VAR_8 + 1 < VAR_3) {
  FUNC_0(VAR_6, VAR_3, "%s/%s", VAR_4->root,
      VAR_5);
  return (VAR_2);
 }

 return (VAR_1);
}
