
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int oword ;
typedef int fieldval ;
typedef int ULONGEST ;
typedef int LONGEST ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int) ;

void
FUNC_3 (char *VAR_1, LONGEST VAR_2, int VAR_3, int VAR_4)
{
  LONGEST VAR_5;



  if (VAR_4 < (8 * (int) sizeof (VAR_2))
      && (~VAR_2 & ~((1 << (VAR_4 - 1)) - 1)) == 0)
    VAR_2 = VAR_2 & ((1 << VAR_4) - 1);


  if (VAR_4 < (8 * (int) sizeof (VAR_2))
      && 0 != (VAR_2 & ~((1 << VAR_4) - 1)))
    {


      FUNC_2 ("Value does not fit in %d bits.", VAR_4);


      VAR_2 = VAR_2 & ((1 << VAR_4) - 1);
    }

  VAR_5 = FUNC_0 (VAR_1, sizeof VAR_5);


  if (VAR_0)
    VAR_3 = sizeof (VAR_5) * 8 - VAR_3 - VAR_4;


  if (VAR_4 < 8 * (int) sizeof (VAR_5))
    VAR_5 &= ~(((((ULONGEST) 1) << VAR_4) - 1) << VAR_3);
  else
    VAR_5 &= ~((~(ULONGEST) 0) << VAR_3);
  VAR_5 |= VAR_2 << VAR_3;

  FUNC_1 (VAR_1, sizeof VAR_5, VAR_5);
}
