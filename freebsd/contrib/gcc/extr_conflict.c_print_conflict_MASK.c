
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct print_context {int started; int reg; int fp; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2 (int VAR_0, int VAR_1, void *VAR_2)
{
  struct print_context *VAR_3 = (struct print_context *) VAR_2;
  int VAR_4;



  if (! VAR_3->started)
    {
      FUNC_0 (VAR_3->fp, " %d:", VAR_3->reg);
      VAR_3->started = 1;
    }



  if (VAR_0 == VAR_3->reg)
    VAR_4 = VAR_1;
  else
    {
      FUNC_1 (VAR_1 == VAR_3->reg);
      VAR_4 = VAR_0;
    }


  FUNC_0 (VAR_3->fp, " %d", VAR_4);


  return 0;
}
