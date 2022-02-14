
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dataflow {int dummy; } ;
typedef int rtx ;
typedef int basic_block ;
typedef scalar_t__ RTX_CODE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct dataflow*,int ,int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_5 (struct dataflow *VAR_5, rtx VAR_6, basic_block VAR_7, rtx VAR_8)
{
  RTX_CODE VAR_9 = FUNC_1 (VAR_6);

  if (VAR_9 == VAR_4 || VAR_9 == VAR_0)
    {

      FUNC_4 (VAR_5, VAR_6, VAR_7, VAR_8,
         VAR_9 == VAR_0 ? VAR_2 : 0, 1);
    }
  else if (VAR_9 == VAR_1)
    {
      FUNC_5 (VAR_5, FUNC_0 (VAR_6), VAR_7, VAR_8);
    }
  else if (VAR_9 == VAR_3)
    {
      int VAR_10;


      for (VAR_10 = FUNC_3 (VAR_6, 0) - 1; VAR_10 >= 0; VAR_10--)
  FUNC_5 (VAR_5, FUNC_2 (VAR_6, 0, VAR_10), VAR_7, VAR_8);
    }
}
