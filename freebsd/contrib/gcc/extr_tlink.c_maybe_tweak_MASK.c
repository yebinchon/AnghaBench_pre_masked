
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tweaked; scalar_t__ tweaking; int * file; } ;
typedef TYPE_1__ symbol ;
typedef int file ;


 TYPE_1__* FUNC_0 (char*,int) ;

__attribute__((used)) static void
FUNC_1 (char *VAR_0, file *VAR_1)
{
  symbol *VAR_2 = FUNC_0 (VAR_0 + 2, 0);

  if ((VAR_2->file == VAR_1 && VAR_2->tweaking)
      || (VAR_2->file != VAR_1 && VAR_0[0] == 'C'))
    {
      VAR_2->tweaking = 0;
      VAR_2->tweaked = 1;

      if (VAR_0[0] == 'O')
 VAR_0[0] = 'C';
      else
 VAR_0[0] = 'O';
    }
}
