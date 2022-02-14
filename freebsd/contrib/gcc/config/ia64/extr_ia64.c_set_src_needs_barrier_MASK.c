
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_flags {int is_branch; } ;
typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (scalar_t__,struct reg_flags,int) ;

__attribute__((used)) static int
FUNC_8 (rtx VAR_3, struct reg_flags VAR_4, int VAR_5)
{
  int VAR_6 = 0;
  rtx VAR_7;
  rtx VAR_8 = FUNC_3 (VAR_3);

  if (FUNC_0 (VAR_8) == VAR_0)


    return FUNC_7 (VAR_8, VAR_4, VAR_5);
  else if (FUNC_2 (VAR_3) == VAR_2)
    {



      if (!FUNC_6 (VAR_8))
 VAR_4.is_branch = 1;
      return FUNC_7 (VAR_8, VAR_4, VAR_5);
    }

  if (FUNC_6 (VAR_8))


    {
      FUNC_5 (FUNC_1 (FUNC_4 (VAR_8, 2)));
      VAR_6 = FUNC_7 (FUNC_4 (VAR_8, 2), VAR_4, VAR_5);


      VAR_8 = FUNC_4 (VAR_8, 1);
    }

  VAR_6 |= FUNC_7 (VAR_8, VAR_4, VAR_5);

  VAR_7 = FUNC_2 (VAR_3);
  if (FUNC_0 (VAR_7) == VAR_1)
    {
      VAR_6 |= FUNC_7 (FUNC_4 (VAR_7, 1), VAR_4, VAR_5);
      VAR_6 |= FUNC_7 (FUNC_4 (VAR_7, 2), VAR_4, VAR_5);
    }
  return VAR_6;
}
