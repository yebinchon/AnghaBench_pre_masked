
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loops {int dummy; } ;
struct loop {unsigned int num_nodes; int header; scalar_t__ inner; } ;
typedef scalar_t__ rtx ;
typedef int edge ;
typedef int basic_block ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct loop*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (struct loop*) ;
 int FUNC_8 (scalar_t__,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct loop*) ;
 int * FUNC_12 (struct loop*) ;
 int FUNC_13 (struct loop*) ;
 scalar_t__ FUNC_14 (int ,struct loop*,scalar_t__*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct loop*) ;
 int FUNC_17 (struct loops*,int ) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__,scalar_t__*,int *) ;
 struct loop* FUNC_20 (struct loops*,struct loop*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_21 (struct loops *VAR_6, struct loop *VAR_7,
        rtx VAR_8, int VAR_9)
{
  basic_block *VAR_10;
  struct loop *VAR_11;
  unsigned VAR_12;
  rtx VAR_13, VAR_14 = VAR_0, VAR_15, VAR_16, VAR_17, VAR_18;
  int VAR_19;
  edge VAR_20;


  if (VAR_9 > FUNC_2 (VAR_2))
    {
      if (VAR_5)
 FUNC_8 (VAR_5, ";; Not unswitching anymore, hit max level\n");
      return;
    }


  if (VAR_7->inner)
    {
      if (VAR_5)
 FUNC_8 (VAR_5, ";; Not unswitching, not innermost loop\n");
      return;
    }


  if (!FUNC_5 (VAR_7))
    {
      if (VAR_5)
 FUNC_8 (VAR_5, ";; Not unswitching, can't duplicate loop\n");
      return;
    }


  if (FUNC_16 (VAR_7) > FUNC_2 (VAR_1))
    {
      if (VAR_5)
 FUNC_8 (VAR_5, ";; Not unswitching, loop too big\n");
      return;
    }


  if (!FUNC_15 (VAR_7->header))
    {
      if (VAR_5)
 FUNC_8 (VAR_5, ";; Not unswitching, not hot area\n");
      return;
    }


  if (FUNC_7 (VAR_7) < 1)
    {
      if (VAR_5)
 FUNC_8 (VAR_5, ";; Not unswitching, loop iterations < 1\n");
      return;
    }

  do
    {
      VAR_19 = 0;
      VAR_18 = VAR_0;


      VAR_10 = FUNC_12 (VAR_7);
      FUNC_13 (VAR_7);
      for (VAR_12 = 0; VAR_12 < VAR_7->num_nodes; VAR_12++)
 if ((VAR_13 = FUNC_14 (VAR_10[VAR_12], VAR_7, &VAR_18)))
   break;

      if (VAR_12 == VAR_7->num_nodes)
 {
   FUNC_9 (VAR_10);
   return;
 }

      if (VAR_13 != VAR_3
   && VAR_13 != VAR_4)
 {
   VAR_14 = FUNC_18 (VAR_13);
   if (VAR_14)
     VAR_14 = FUNC_6 (VAR_14);


   for (VAR_17 = VAR_8; VAR_17; VAR_17 = FUNC_3 (VAR_17, 1))
     FUNC_19 (FUNC_3 (VAR_17, 0), &VAR_13, ((void*)0));
 }

      if (VAR_13 == VAR_4)
 {

   VAR_20 = FUNC_1 (VAR_10[VAR_12]);
   FUNC_17 (VAR_6, VAR_20);
   FUNC_9 (VAR_10);
   VAR_19 = 1;
 }
      else if (VAR_13 == VAR_3)
 {

   VAR_20 = FUNC_0 (VAR_10[VAR_12]);
   FUNC_17 (VAR_6, VAR_20);
   FUNC_9 (VAR_10);
   VAR_19 = 1;
 }
    } while (VAR_19);


  VAR_15 = FUNC_4 (0, VAR_13, VAR_8);
  if (VAR_14)
    VAR_16 = FUNC_4 (0, VAR_14, VAR_8);
  else
    VAR_16 = VAR_8;

  if (VAR_5)
    FUNC_8 (VAR_5, ";; Unswitching loop\n");


  VAR_11 = FUNC_20 (VAR_6, VAR_7, VAR_10[VAR_12], VAR_13, VAR_18);
  FUNC_11 (VAR_11);


  FUNC_21 (VAR_6, VAR_11, VAR_16, VAR_9 + 1);
  FUNC_21 (VAR_6, VAR_7, VAR_15, VAR_9 + 1);

  FUNC_10 (VAR_15);
  if (VAR_14)
    FUNC_10 (VAR_16);

  FUNC_9 (VAR_10);
}
