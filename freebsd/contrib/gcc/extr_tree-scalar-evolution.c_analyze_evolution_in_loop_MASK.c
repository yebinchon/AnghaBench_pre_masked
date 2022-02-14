
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
typedef scalar_t__ t_bool ;
struct loop {int dummy; } ;
typedef int basic_block ;
struct TYPE_2__ {int src; } ;


 int FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct loop*,int ) ;
 scalar_t__ FUNC_7 (struct loop*,int ,int ,int *,int ) ;
 int FUNC_8 (scalar_t__,char*) ;
 struct loop* FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static tree
FUNC_11 (tree VAR_8,
      tree VAR_9)
{
  int VAR_10;
  tree VAR_11 = VAR_3;
  struct loop *VAR_12 = FUNC_9 (VAR_8);
  basic_block VAR_13;

  if (VAR_4 && (VAR_5 & VAR_1))
    {
      FUNC_8 (VAR_4, "(analyze_evolution_in_loop \n");
      FUNC_8 (VAR_4, "  (loop_phi_node = ");
      FUNC_10 (VAR_4, VAR_8, 0);
      FUNC_8 (VAR_4, ")\n");
    }

  for (VAR_10 = 0; VAR_10 < FUNC_2 (VAR_8); VAR_10++)
    {
      tree VAR_14 = FUNC_0 (VAR_8, VAR_10);
      tree VAR_15, VAR_16;
      t_bool VAR_17;


      VAR_13 = FUNC_1 (VAR_8, VAR_10)->src;
      if (!FUNC_6 (VAR_12, VAR_13))
 continue;

      if (FUNC_4 (VAR_14) == VAR_0)
 {
   VAR_15 = FUNC_3 (VAR_14);


   VAR_16 = VAR_9;
   VAR_17 = FUNC_7 (VAR_12, VAR_15, VAR_8, &VAR_16, 0);
 }
      else
 VAR_17 = VAR_6;







      if (VAR_17 != VAR_7)
 VAR_16 = VAR_2;



      VAR_11 = FUNC_5 (VAR_11, VAR_16);
    }

  if (VAR_4 && (VAR_5 & VAR_1))
    {
      FUNC_8 (VAR_4, "  (evolution_function = ");
      FUNC_10 (VAR_4, VAR_11, 0);
      FUNC_8 (VAR_4, "))\n");
    }

  return VAR_11;
}
