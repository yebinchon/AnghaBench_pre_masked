
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
 size_t VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_3 (int VAR_11, int VAR_12)
{
  if (VAR_4.mod != 3)
    {
      if (VAR_3 && VAR_11 == VAR_9)
 {
   VAR_11 = (VAR_5 & VAR_1) ? VAR_10 : VAR_6;
   VAR_8 |= (VAR_5 & VAR_1);
  }
      FUNC_0 (VAR_11, VAR_12);
      return;
    }


  VAR_0;
  VAR_2++;
  VAR_8 |= (VAR_5 & VAR_1);
  FUNC_2 (VAR_7, "%%mm%d", VAR_4.rm);
  FUNC_1 (&VAR_7[VAR_3]);
}
