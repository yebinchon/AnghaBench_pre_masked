
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mod; int rm; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 size_t VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_3 (int *,char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_4 (int VAR_13, int VAR_14)
{
  if (VAR_5.mod != 3)
    {
      if (VAR_4 && VAR_13 == VAR_11)
 {
   VAR_13 = (VAR_6 & VAR_1) ? VAR_12 : VAR_7;
   VAR_10 |= (VAR_6 & VAR_1);
  }
      FUNC_0 (VAR_13, VAR_14);
      return;
    }


  VAR_0;
  VAR_3++;
  VAR_10 |= (VAR_6 & VAR_1);
  if (VAR_6 & VAR_1)
    {
      int VAR_15 = 0;

      FUNC_1 (VAR_2);
      if (VAR_8 & VAR_2)
 VAR_15 = 8;
      FUNC_3 (VAR_9, "%%xmm%d", VAR_5.rm + VAR_15);
    }
  else
    FUNC_3 (VAR_9, "%%mm%d", VAR_5.rm);
  FUNC_2 (&VAR_9[VAR_4]);
}
