
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int var_map ;
typedef int tree ;
typedef int tpa_p ;
typedef int conflict_graph ;
typedef int bitmap ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_7 (tpa_p VAR_2, conflict_graph VAR_3,
   var_map VAR_4, bitmap VAR_5, tree VAR_6)
{
  int VAR_7, VAR_8, VAR_9;
  VAR_7 = FUNC_6 (VAR_4, VAR_6);
  if (VAR_7 != VAR_0)
    {
      FUNC_1 (VAR_5, VAR_7);
      VAR_9 = FUNC_3 (VAR_2, VAR_7);

      if (VAR_9 == VAR_1)
        return;

      for (VAR_8 = FUNC_4 (VAR_2, VAR_9);
    VAR_8 != VAR_1;
    VAR_8 = FUNC_5 (VAR_2, VAR_8))
 {
   if (FUNC_0 (VAR_5, VAR_8))
     FUNC_2 (VAR_3, VAR_7, VAR_8);
 }
    }
}
