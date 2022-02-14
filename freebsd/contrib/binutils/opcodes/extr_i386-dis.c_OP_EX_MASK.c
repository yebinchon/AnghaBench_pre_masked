
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mod; int rm; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_4 (int VAR_7, int VAR_8)
{
  int VAR_9 = 0;
  if (VAR_4.mod != 3)
    {
      FUNC_0 (VAR_7, VAR_8);
      return;
    }
  FUNC_1 (VAR_1);
  if (VAR_5 & VAR_1)
    VAR_9 = 8;


  VAR_0;
  VAR_2++;
  FUNC_3 (VAR_6, "%%xmm%d", VAR_4.rm + VAR_9);
  FUNC_2 (&VAR_6[VAR_3]);
}
