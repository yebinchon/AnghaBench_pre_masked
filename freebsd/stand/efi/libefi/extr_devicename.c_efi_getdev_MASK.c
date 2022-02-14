
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devdesc {int dummy; } ;


 int FUNC_0 (struct devdesc**,char const*,char const**) ;
 char const* FUNC_1 (char*) ;
 int FUNC_2 (char const*,char) ;

int
FUNC_3(void **VAR_0, const char *VAR_1, const char **VAR_2)
{
 struct devdesc **VAR_3 = (struct devdesc **)VAR_0;
 int VAR_4;





 if (VAR_1 == ((void*)0) || *VAR_1 == '/' || !FUNC_2(VAR_1, ':')) {
  VAR_4 = FUNC_0(VAR_3, FUNC_1("currdev"), ((void*)0));
  if (VAR_4 == 0 && VAR_2 != ((void*)0))
   *VAR_2 = VAR_1;
  return (VAR_4);
 }


 return (FUNC_0(VAR_3, VAR_1, VAR_2));
}
