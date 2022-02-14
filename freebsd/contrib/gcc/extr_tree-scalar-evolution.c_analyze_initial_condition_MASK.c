
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct loop {int dummy; } ;
typedef int basic_block ;
struct TYPE_4__ {int src; } ;
struct TYPE_3__ {struct loop* loop_father; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 TYPE_2__* FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 TYPE_1__* FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (struct loop*,int ) ;
 int FUNC_7 (scalar_t__,char*) ;
 int FUNC_8 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static tree
FUNC_9 (tree VAR_6)
{
  int VAR_7;
  tree VAR_8 = VAR_3;
  struct loop *VAR_9 = FUNC_4 (VAR_6)->loop_father;

  if (VAR_4 && (VAR_5 & VAR_1))
    {
      FUNC_7 (VAR_4, "(analyze_initial_condition \n");
      FUNC_7 (VAR_4, "  (loop_phi_node = \n");
      FUNC_8 (VAR_4, VAR_6, 0);
      FUNC_7 (VAR_4, ")\n");
    }

  for (VAR_7 = 0; VAR_7 < FUNC_2 (VAR_6); VAR_7++)
    {
      tree VAR_10 = FUNC_0 (VAR_6, VAR_7);
      basic_block VAR_11 = FUNC_1 (VAR_6, VAR_7)->src;



      if (FUNC_6 (VAR_9, VAR_11))
        continue;

      if (VAR_8 == VAR_3)
 {
   VAR_8 = VAR_10;
   continue;
 }

      if (FUNC_3 (VAR_10) == VAR_0)
 {
   VAR_8 = VAR_2;
         break;
 }

      VAR_8 = FUNC_5 (VAR_8, VAR_10);
    }


  if (VAR_8 == VAR_3)
    VAR_8 = VAR_2;

  if (VAR_4 && (VAR_5 & VAR_1))
    {
      FUNC_7 (VAR_4, "  (init_cond = ");
      FUNC_8 (VAR_4, VAR_8, 0);
      FUNC_7 (VAR_4, "))\n");
    }

  return VAR_8;
}
