
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loops {int dummy; } ;
struct loop {unsigned int num_nodes; scalar_t__ inner; } ;
typedef int basic_block ;
typedef int COND_EXPR_COND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int * FUNC_4 (struct loop*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct loop*,int ) ;
 int FUNC_10 (int ,struct loop*) ;
 unsigned int FUNC_11 (struct loop*) ;
 struct loop* FUNC_12 (struct loops*,struct loop*,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static bool
FUNC_15 (struct loops *VAR_9, struct loop *VAR_10, int VAR_11)
{
  basic_block *VAR_12;
  struct loop *VAR_13;
  unsigned VAR_14;
  tree VAR_15 = VAR_0, VAR_16;
  bool VAR_17 = 0;


  if (VAR_11 > FUNC_0 (VAR_2))
    {
      if (VAR_7 && (VAR_8 & VAR_3))
 FUNC_1 (VAR_7, ";; Not unswitching anymore, hit max level\n");
      return 0;
    }


  if (VAR_10->inner)
    {
      if (VAR_7 && (VAR_8 & VAR_3))
 FUNC_1 (VAR_7, ";; Not unswitching, not innermost loop\n");
      return 0;
    }


  if (FUNC_11 (VAR_10)
      > (unsigned) FUNC_0 (VAR_1))
    {
      if (VAR_7 && (VAR_8 & VAR_3))
 FUNC_1 (VAR_7, ";; Not unswitching, loop too big\n");
      return 0;
    }

  VAR_14 = 0;
  VAR_12 = FUNC_4 (VAR_10);

  while (1)
    {

      for (; VAR_14 < VAR_10->num_nodes; VAR_14++)
 if ((VAR_15 = FUNC_10 (VAR_12[VAR_14], VAR_10)))
   break;

      if (VAR_14 == VAR_10->num_nodes)
 {
   FUNC_2 (VAR_12);
   return VAR_17;
 }

      VAR_15 = FUNC_9 (VAR_10, VAR_15);
      VAR_16 = FUNC_8 (VAR_12[VAR_14]);
      if (FUNC_6 (VAR_15))
 {

   COND_EXPR_COND (VAR_18) = VAR_6;
   VAR_17 = 1;
 }
      else if (FUNC_7 (VAR_15))
 {

   COND_EXPR_COND (VAR_19) = VAR_5;
   VAR_17 = 1;
 }
      else
 break;

      FUNC_14 (VAR_16);
      VAR_14++;
    }

  if (VAR_7 && (VAR_8 & VAR_3))
    FUNC_1 (VAR_7, ";; Unswitching loop\n");

  FUNC_5 ();

  VAR_13 = FUNC_12 (VAR_9, VAR_10, VAR_12[VAR_14], VAR_15);
  if (!VAR_13)
    {
      FUNC_3 ();
      FUNC_2 (VAR_12);
      return VAR_17;
    }


  FUNC_13 (VAR_4);
  FUNC_3 ();


  FUNC_15 (VAR_9, VAR_13, VAR_11 + 1);
  FUNC_15 (VAR_9, VAR_10, VAR_11 + 1);
  FUNC_2 (VAR_12);
  return 1;
}
