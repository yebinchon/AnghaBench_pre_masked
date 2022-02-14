
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct type*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ui_file*,char*,int,char*,...) ;
 int FUNC_3 (struct type*,int,struct type*,struct ui_file*,int,int) ;

__attribute__((used)) static void
FUNC_4 (struct type *VAR_0, int VAR_1, struct type *VAR_2,
      struct ui_file *VAR_3, int VAR_4, int VAR_5)
{
  FUNC_2 (VAR_3, "\n%*scase %s is", VAR_5 + 4, "",
      FUNC_1
      (FUNC_0 (VAR_0, VAR_1)));
  FUNC_3 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
    VAR_5 + 4);
  FUNC_2 (VAR_3, "\n%*send case;", VAR_5 + 4, "");
}
