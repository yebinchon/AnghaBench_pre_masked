
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;
 int* VAR_1 ;

__attribute__((used)) static int
FUNC_3 (rtx VAR_2)
{
  int VAR_3;


  if (!FUNC_2 (VAR_2))
    return 0;



  if (FUNC_1 (FUNC_0 (VAR_2)) < 0)
    return 0;

  VAR_3 = VAR_1[FUNC_0 (VAR_2)];


  if (VAR_3 < 0)
    return 3;


  if (VAR_3 < VAR_0)
    return 1;




  return 2;
}
