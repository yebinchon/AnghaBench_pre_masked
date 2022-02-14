
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pex_obj {int dummy; } ;


 int FUNC_0 (struct pex_obj*) ;
 int FUNC_1 (struct pex_obj*,int,int*) ;
 struct pex_obj* FUNC_2 (int ,char const*,int *) ;
 char* FUNC_3 (struct pex_obj*,int,char const*,char* const*,char const*,char const*,int*) ;

const char *
FUNC_4 (int VAR_0, const char *VAR_1, char * const *VAR_2,
  const char *VAR_3, const char *VAR_4, const char *VAR_5,
  int *VAR_6, int *VAR_7)
{
  struct pex_obj *VAR_8;
  const char *VAR_9;

  VAR_8 = FUNC_2 (0, VAR_3, ((void*)0));
  VAR_9 = FUNC_3 (VAR_8, VAR_0, VAR_1, VAR_2, VAR_4, VAR_5, VAR_7);
  if (VAR_9 == ((void*)0))
    {
      if (!FUNC_1 (VAR_8, 1, VAR_6))
 {
   *VAR_7 = 0;
   VAR_9 = "pex_get_status failed";
 }
    }
  FUNC_0 (VAR_8);
  return VAR_9;
}
