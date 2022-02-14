
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int relax_inst; int instruction; int relax_size; int error; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (char**,int) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5 (char *VAR_3)
{
  FUNC_4 (VAR_3);

  if ((FUNC_2 (&VAR_3, 8) == (int) VAR_1) || (FUNC_3 (&VAR_3) == (int) VAR_1))
    return;

  if (*VAR_3 == '[')
    {
      int VAR_4;

      VAR_3++;
      FUNC_4 (VAR_3);

      if ((VAR_4 = FUNC_2 (&VAR_3, 4)) == (int) VAR_1)
 return;

      FUNC_4 (VAR_3);
      if (*VAR_3++ == ']')
        {
          if (FUNC_1 (VAR_3) == (int) VAR_1)
     return;
          else
            {
              VAR_2.relax_inst |= (((VAR_2.instruction >> 8) & 0xf) << 20)
                              | (((VAR_2.instruction >> 4) & 0xf) << 15);
       VAR_2.relax_size = 4;
            }
        }
      else
        {
          VAR_2.error = FUNC_0("missing ]");
        }
    }
  else
    {
      VAR_2.error = VAR_0;
    }
}
