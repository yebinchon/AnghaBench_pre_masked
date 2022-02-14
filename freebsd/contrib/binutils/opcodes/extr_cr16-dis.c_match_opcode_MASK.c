
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int match_bits; int match; } ;


 unsigned long FUNC_0 (int ,int ) ;
 int VAR_0 ;
 unsigned long FUNC_1 () ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int
FUNC_2 (void)
{
  unsigned long VAR_4;

  unsigned long VAR_5 = VAR_3[1] + (VAR_3[0] << 16);


  VAR_2 = &VAR_1[VAR_0 - 2];


  while (VAR_2 >= VAR_1)
    {
      VAR_4 = FUNC_1 ();
      if ((VAR_5 & VAR_4) == FUNC_0 (VAR_2->match,
                                      VAR_2->match_bits))
        return 1;
      else
        VAR_2--;
    }
  return 0;
}
