
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef TYPE_3__* basic_block ;
struct TYPE_8__ {TYPE_1__* rtl; } ;
struct TYPE_9__ {TYPE_2__ il; } ;
struct TYPE_7__ {int global_live_at_end; int global_live_at_start; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (char*,char,size_t) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (char,int *) ;

__attribute__((used)) static void
FUNC_9 (basic_block VAR_0, FILE *VAR_1, int VAR_2)
{
  rtx VAR_3;
  rtx VAR_4;
  char *VAR_5;

  VAR_5 = FUNC_3 ((size_t) VAR_2 + 1);
  FUNC_6 (VAR_5, ' ', (size_t) VAR_2);
  VAR_5[VAR_2] = '\0';

  FUNC_5 (VAR_1, ";;%s Registers live at start: ", VAR_5);
  FUNC_4 (VAR_0->il.rtl->global_live_at_start, VAR_1);
  FUNC_8 ('\n', VAR_1);

  for (VAR_3 = FUNC_1 (VAR_0), VAR_4 = FUNC_2 (FUNC_0 (VAR_0)); VAR_3 != VAR_4;
       VAR_3 = FUNC_2 (VAR_3))
    FUNC_7 (VAR_1, VAR_3);

  FUNC_5 (VAR_1, ";;%s Registers live at end: ", VAR_5);
  FUNC_4 (VAR_0->il.rtl->global_live_at_end, VAR_1);
  FUNC_8 ('\n', VAR_1);
}
