
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2 (int VAR_14)
{
  if (FUNC_0 (VAR_13) == 32)
    return FUNC_1 (VAR_14);


  if ((VAR_14 >= VAR_5 && VAR_14 <= VAR_6)
      || (VAR_14 >= VAR_11 && VAR_14 <= VAR_12)
      || (VAR_14 >= VAR_9 && VAR_14 <= VAR_10)
      || (VAR_14 >= VAR_7 && VAR_14 <= VAR_8))
    return 1;


  if (VAR_14 == VAR_2
      || VAR_14 == VAR_1
      || VAR_14 == VAR_3
      || VAR_14 == VAR_4
      || VAR_14 == VAR_0)
    return 1;

  return 0;
}
