
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int* VAR_7 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int,int) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_3 (int VAR_12, int VAR_13)
{
  if (VAR_8)
    {
      switch (VAR_7[-1])
 {
 case 0x6f:
   FUNC_1 (VAR_11, VAR_13);
   break;
 case 0xa5:
 case 0xa7:
 case 0xad:
   FUNC_1 (VAR_10, VAR_13);
   break;
 default:
   FUNC_1 (VAR_6, VAR_13);
 }
    }
  if ((VAR_9
       & (VAR_0
   | VAR_1
   | VAR_5
   | VAR_2
   | VAR_3
   | VAR_4)) == 0)
    VAR_9 |= VAR_1;
  FUNC_0 ();
  FUNC_2 (VAR_12, VAR_13);
}
