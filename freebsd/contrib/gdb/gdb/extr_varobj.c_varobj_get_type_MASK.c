
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int type; } ;
struct value {int dummy; } ;
struct ui_file {int dummy; } ;
struct cleanup {int dummy; } ;


 scalar_t__ FUNC_0 (struct varobj*) ;
 int FUNC_1 (struct value*) ;
 int FUNC_2 (struct cleanup*) ;
 struct cleanup* FUNC_3 (struct ui_file*) ;
 struct ui_file* FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (int ,char*,struct ui_file*,int) ;
 char* FUNC_6 (struct ui_file*,long*) ;
 struct value* FUNC_7 (int ,int ) ;

char *
FUNC_8 (struct varobj *VAR_1)
{
  struct value *VAR_2;
  struct cleanup *VAR_3;
  struct ui_file *VAR_4;
  char *VAR_5;
  long VAR_6;



  if (FUNC_0 (VAR_1))
    return ((void*)0);

  VAR_4 = FUNC_4 ();
  VAR_3 = FUNC_3 (VAR_4);



  VAR_2 = FUNC_7 (VAR_1->type, VAR_0);
  FUNC_5 (FUNC_1 (VAR_2), "", VAR_4, -1);

  VAR_5 = FUNC_6 (VAR_4, &VAR_6);
  FUNC_2 (VAR_3);
  return VAR_5;
}
