
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
typedef enum regcache_dump_what { ____Placeholder_regcache_dump_what } regcache_dump_what ;


 int VAR_0 ;
 struct ui_file* FUNC_0 (char*,char*) ;
 struct ui_file* VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct ui_file*,int) ;
 int FUNC_3 (struct ui_file*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_2, enum regcache_dump_what VAR_3)
{
  if (VAR_2 == ((void*)0))
    FUNC_2 (VAR_0, VAR_1, VAR_3);
  else
    {
      struct ui_file *VAR_4 = FUNC_0 (VAR_2, "w");
      if (VAR_4 == ((void*)0))
 FUNC_1 ("maintenance print architecture");
      FUNC_2 (VAR_0, VAR_4, VAR_3);
      FUNC_3 (VAR_4);
    }
}
