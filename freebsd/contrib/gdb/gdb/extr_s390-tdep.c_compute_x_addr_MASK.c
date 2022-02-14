
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prologue_value {int dummy; } ;


 int FUNC_0 (struct prologue_value*,struct prologue_value*,struct prologue_value*) ;
 int FUNC_1 (struct prologue_value*,int) ;

__attribute__((used)) static void
FUNC_2 (struct prologue_value *VAR_0,
                struct prologue_value *VAR_1,
                int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{


  struct prologue_value VAR_5;

  FUNC_1 (&VAR_5, VAR_2);
  if (VAR_3)
    FUNC_0 (&VAR_5, &VAR_5, &VAR_1[VAR_3]);
  if (VAR_4)
    FUNC_0 (&VAR_5, &VAR_5, &VAR_1[VAR_4]);

  *VAR_0 = VAR_5;
}
