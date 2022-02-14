
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out_level {int dummy; } ;
struct ui_out {int dummy; } ;
typedef enum ui_align { ____Placeholder_ui_align } ui_align ;


 struct ui_out_level* FUNC_0 (struct ui_out*) ;
 int FUNC_1 (struct ui_out*,int,int,int,char const*,int) ;
 int FUNC_2 (struct ui_out*,int*,int*,int*) ;

void
FUNC_3 (struct ui_out *VAR_0,
                      int VAR_1,
                      enum ui_align VAR_2,
        const char *VAR_3,
        int VAR_4)
{
  int VAR_5;
  int VAR_6;
  int VAR_7;
  struct ui_out_level *VAR_8 = FUNC_0 (VAR_0);

  FUNC_2 (VAR_0, &VAR_5, &VAR_6, &VAR_7);

  FUNC_1 (VAR_0, VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
}
