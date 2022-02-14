
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,unsigned int,int) ;

__attribute__((used)) static bool
FUNC_4 (rtx VAR_4, unsigned int VAR_5, int VAR_6)
{


  if (VAR_6 && VAR_5 == 8
      && (FUNC_0 (VAR_4) != VAR_1 && FUNC_0 (VAR_4) != VAR_0))
    {
      if (VAR_2)
 {
   FUNC_2 ("\t.xword\t", VAR_4);
   return 1;
 }
      else
 {
   FUNC_1 (4, VAR_3);
   FUNC_1 (4, VAR_4);
   return 1;
 }
    }
  return FUNC_3 (VAR_4, VAR_5, VAR_6);
}
