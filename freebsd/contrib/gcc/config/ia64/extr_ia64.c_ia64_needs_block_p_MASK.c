
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int* VAR_3 ;

__attribute__((used)) static bool
FUNC_2 (rtx VAR_4)
{
  int VAR_5;

  VAR_5 = VAR_3[FUNC_0(VAR_4)] - 1;
  FUNC_1 (0 <= VAR_5 && VAR_5 < VAR_0);

  return ((VAR_1 <= VAR_5 && VAR_5 < VAR_1 + VAR_2)
   || (4 * VAR_2 <= VAR_5 && VAR_5 < 4 * VAR_2 + VAR_2));
}
