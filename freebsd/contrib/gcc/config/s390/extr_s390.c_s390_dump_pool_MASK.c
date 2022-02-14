
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constant_pool {int pool_insn; struct constant* execute; int label; struct constant** constants; } ;
struct constant {int value; int label; struct constant* next; } ;
typedef int rtx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int * VAR_8 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static void
FUNC_20 (struct constant_pool *VAR_9, bool VAR_10)
{
  struct constant *VAR_11;
  rtx VAR_12 = VAR_9->pool_insn;
  int VAR_13;


  if (VAR_3)
    {
      VAR_12 = FUNC_8 (FUNC_12 (), VAR_12);
      FUNC_2 (VAR_12, -1);
    }


  if (VAR_3)
    VAR_12 = FUNC_8 (FUNC_10 (FUNC_0 (8)), VAR_12);
  else
    VAR_12 = FUNC_8 (FUNC_10 (FUNC_0 (4)), VAR_12);
  FUNC_2 (VAR_12, -1);


  if (!VAR_10)
    {
      VAR_12 = FUNC_9 (VAR_9->label, VAR_12);
      FUNC_2 (VAR_12, -1);
    }



  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++)
    for (VAR_11 = VAR_9->constants[VAR_13]; VAR_11; VAR_11 = VAR_11->next)
      {

 rtx VAR_14 = VAR_11->value;
 if (FUNC_1 (VAR_14) == VAR_0
     && FUNC_1 (FUNC_3 (VAR_14, 0)) == VAR_4
     && FUNC_4 (FUNC_3 (VAR_14, 0), 1) == VAR_6
     && FUNC_6 (FUNC_3 (VAR_14, 0), 0) == 1)
   {
     VAR_14 = FUNC_16 (VAR_2, FUNC_5 (FUNC_3 (VAR_14, 0), 0, 0),
       FUNC_15 (VAR_7, VAR_9->label));
     VAR_14 = FUNC_14 (VAR_7, VAR_14);
   }

 VAR_12 = FUNC_9 (VAR_11->label, VAR_12);
 FUNC_2 (VAR_12, -1);

 VAR_14 = FUNC_17 (VAR_8[VAR_13],
      FUNC_13 (1, VAR_14),
      VAR_5);
 VAR_12 = FUNC_8 (VAR_14, VAR_12);
 FUNC_2 (VAR_12, -1);
      }


  VAR_12 = FUNC_8 (FUNC_10 (FUNC_0 (2)), VAR_12);
  FUNC_2 (VAR_12, -1);


  for (VAR_11 = VAR_9->execute; VAR_11; VAR_11 = VAR_11->next)
    {
      VAR_12 = FUNC_9 (VAR_11->label, VAR_12);
      FUNC_2 (VAR_12, -1);

      VAR_12 = FUNC_8 (FUNC_19 (VAR_11->value), VAR_12);
      FUNC_2 (VAR_12, -1);
    }


  if (VAR_3)
    {
      VAR_12 = FUNC_8 (FUNC_11 (), VAR_12);
      FUNC_2 (VAR_12, -1);
    }

  VAR_12 = FUNC_7 (VAR_12);
  FUNC_2 (VAR_12, -1);


  FUNC_18 (VAR_9->pool_insn);
}
