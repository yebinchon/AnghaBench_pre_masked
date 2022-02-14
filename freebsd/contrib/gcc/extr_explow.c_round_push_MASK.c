
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_5 (int ,int ,int ,int ,int) ;

__attribute__((used)) static rtx
FUNC_6 (rtx VAR_8)
{
  int VAR_9 = VAR_4 / VAR_0;

  if (VAR_9 == 1)
    return VAR_8;

  if (FUNC_1 (VAR_8) == VAR_1)
    {
      HOST_WIDE_INT VAR_10 = (FUNC_2 (VAR_8) + VAR_9 - 1) / VAR_9 * VAR_9;

      if (FUNC_2 (VAR_8) != VAR_10)
 VAR_8 = FUNC_0 (VAR_10);
    }
  else
    {



      VAR_8 = FUNC_3 (VAR_5, VAR_7, VAR_8, FUNC_0 (VAR_9 - 1),
      VAR_2, 1, VAR_3);
      VAR_8 = FUNC_4 (0, VAR_6, VAR_5, VAR_8, FUNC_0 (VAR_9),
       VAR_2, 1);
      VAR_8 = FUNC_5 (VAR_5, VAR_8, FUNC_0 (VAR_9), VAR_2, 1);
    }

  return VAR_8;
}
