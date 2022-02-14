
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mod_depend {int dummy; } ;
typedef TYPE_1__* modlist_t ;
typedef int * linker_file_t ;
struct TYPE_3__ {int * container; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (char const*,struct mod_depend*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(const char *VAR_3, struct mod_depend *VAR_4,
    linker_file_t VAR_5)
{
 modlist_t VAR_6;
 int VAR_7;

 FUNC_3(&VAR_2);
 if (VAR_5 == ((void*)0)) {
  FUNC_0(VAR_3 != ((void*)0),
      ("linker_release_module: no file or name"));
  VAR_6 = FUNC_2(VAR_3, VAR_4);
  if (VAR_6 == ((void*)0)) {
   FUNC_4(&VAR_2);
   return (VAR_0);
  }
  VAR_5 = VAR_6->container;
 } else
  FUNC_0(VAR_3 == ((void*)0) && VAR_4 == ((void*)0),
      ("linker_release_module: both file and name"));
 VAR_7 = FUNC_1(VAR_5, VAR_1);
 FUNC_4(&VAR_2);
 return (VAR_7);
}
