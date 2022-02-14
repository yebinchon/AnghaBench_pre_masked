
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_data {int dummy; } ;
typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 unsigned int** VAR_2 ;
 int FUNC_6 (unsigned int,unsigned int,struct value_data*) ;
 int FUNC_7 (size_t,int ,size_t,int ) ;

__attribute__((used)) static void
FUNC_8 (rtx VAR_3, struct value_data *VAR_4)
{
  rtx VAR_5 = VAR_3;

  if (FUNC_0 (VAR_3) == VAR_1)
    {
      VAR_3 = FUNC_7 (FUNC_1 (VAR_3), FUNC_5 (VAR_3),
      FUNC_1 (FUNC_5 (VAR_3)), FUNC_4 (VAR_3));
      if (VAR_3 == VAR_0)
 VAR_3 = FUNC_5 (VAR_5);
    }
  if (FUNC_3 (VAR_3))
    {
      unsigned int VAR_6 = FUNC_2 (VAR_3);
      unsigned int VAR_7 = VAR_2[VAR_6][FUNC_1 (VAR_3)];

      FUNC_6 (VAR_6, VAR_7, VAR_4);
    }
}
