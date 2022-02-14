
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qty_table_elem {scalar_t__ mode; scalar_t__ const_rtx; } ;
typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 struct qty_table_elem* VAR_3 ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int
FUNC_8 (rtx VAR_4, int VAR_5)
{




  if (FUNC_4 (VAR_4)
      && FUNC_3 (FUNC_2 (VAR_4)))
    {
      int VAR_6 = FUNC_5 (FUNC_2 (VAR_4));
      struct qty_table_elem *VAR_7 = &VAR_3[VAR_6];

      if (FUNC_1 (VAR_4) == VAR_7->mode
   && VAR_7->const_rtx != VAR_1)
 return 0;
    }

  if (FUNC_0 (VAR_4) == VAR_2
      && FUNC_0 (FUNC_6 (VAR_4, 1)) == VAR_0
      && FUNC_4 (FUNC_6 (VAR_4, 0))
      && FUNC_3 (FUNC_2 (FUNC_6 (VAR_4, 0))))
    {
      int VAR_8 = FUNC_5 (FUNC_2 (FUNC_6 (VAR_4, 0)));
      struct qty_table_elem *VAR_9 = &VAR_3[VAR_8];

      if ((FUNC_1 (FUNC_6 (VAR_4, 0)) == VAR_9->mode)
   && VAR_9->const_rtx != VAR_1)
 return 0;
    }






  if (FUNC_0 (VAR_4) == VAR_2
      && FUNC_4 (FUNC_6 (VAR_4, 0))
      && FUNC_4 (FUNC_6 (VAR_4, 1))
      && FUNC_3 (FUNC_2 (FUNC_6 (VAR_4, 0)))
      && FUNC_3 (FUNC_2 (FUNC_6 (VAR_4, 1))))
    {
      int VAR_10 = FUNC_5 (FUNC_2 (FUNC_6 (VAR_4, 0)));
      int VAR_11 = FUNC_5 (FUNC_2 (FUNC_6 (VAR_4, 1)));
      struct qty_table_elem *VAR_12 = &VAR_3[VAR_10];
      struct qty_table_elem *VAR_13 = &VAR_3[VAR_11];

      if ((FUNC_1 (FUNC_6 (VAR_4, 0)) == VAR_12->mode)
   && VAR_12->const_rtx != VAR_1
   && (FUNC_1 (FUNC_6 (VAR_4, 1)) == VAR_13->mode)
   && VAR_13->const_rtx != VAR_1)
 return 0;
    }

  return FUNC_7 (VAR_4, VAR_5);
}
