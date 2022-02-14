
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_5 (rtx VAR_3, HOST_WIDE_INT *VAR_4,
       HOST_WIDE_INT *VAR_5)
{
  *VAR_4 = 0;
  *VAR_5 = 0;

  if (FUNC_0 (FUNC_1 (VAR_3)) == VAR_2)
    FUNC_4 (FUNC_1 (VAR_3), VAR_4, VAR_5);
  else if (FUNC_0 (FUNC_1 (VAR_3)) == VAR_0
    || FUNC_0 (FUNC_1 (VAR_3)) == VAR_1)
    {
      int VAR_6;



      for ( VAR_6 = FUNC_3 (FUNC_1 (VAR_3), 0) - 1; VAR_6 >= 0; VAR_6--)
 if (FUNC_0 (FUNC_2 (FUNC_1 (VAR_3), 0, VAR_6)) == VAR_2)
   FUNC_4 (FUNC_2 (FUNC_1 (VAR_3), 0, VAR_6),
     VAR_4, VAR_5);
    }
}
