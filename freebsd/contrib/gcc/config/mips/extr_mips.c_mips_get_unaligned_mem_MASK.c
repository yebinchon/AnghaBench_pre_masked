
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static bool
FUNC_5 (rtx *VAR_5, unsigned int VAR_6, int VAR_7,
   rtx *VAR_8, rtx *VAR_9)
{
  rtx VAR_10, VAR_11;



  if (!FUNC_2 (*VAR_5))
    return 0;


  if (VAR_6 != 32 && (!VAR_3 || VAR_6 != 64))
    return 0;




  if (VAR_7 % VAR_0 != 0)
    return 0;



  if (FUNC_1 (*VAR_5) >= VAR_6)
    return 0;



  *VAR_5 = FUNC_3 (*VAR_5, VAR_1, 0);
  FUNC_4 (*VAR_5, FUNC_0 (VAR_6 / VAR_0));




  VAR_10 = FUNC_3 (*VAR_5, VAR_2, 0);
  VAR_11 = FUNC_3 (*VAR_5, VAR_2, VAR_6 / VAR_0 - 1);



  if (VAR_4)
    *VAR_8 = VAR_10, *VAR_9 = VAR_11;
  else
    *VAR_8 = VAR_11, *VAR_9 = VAR_10;

  return 1;
}
