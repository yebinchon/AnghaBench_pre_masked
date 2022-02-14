
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loop {unsigned int num_nodes; int num; int latch; } ;
typedef int block_stmt_iterator ;
typedef int basic_block ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct loop*,int ) ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct loop*) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int VAR_8 ;
 int FUNC_19 (int ,int ,int ,int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int *) ;
 int * FUNC_22 (struct loop*) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (struct loop*,int ) ;
 int FUNC_25 (int ) ;
 int VAR_9 ;
 int FUNC_26 (struct loop*,int ,int ,int ) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int ) ;

__attribute__((used)) static void
FUNC_29 (struct loop *VAR_10)
{
  unsigned VAR_11;
  basic_block VAR_12, *VAR_13;
  block_stmt_iterator VAR_14;

  VAR_13 = FUNC_22 (VAR_10);

  for (VAR_11 = 0; VAR_11 < VAR_10->num_nodes; VAR_11++)
    {
      VAR_12 = VAR_13[VAR_11];




      if (!FUNC_16 (VAR_1, VAR_10->latch, VAR_12))
 continue;

      for (VAR_14 = FUNC_11 (VAR_12); !FUNC_9 (VAR_14); FUNC_10 (&VAR_14))
        {
   tree VAR_15 = FUNC_12 (VAR_14);

   switch (FUNC_1 (VAR_15))
     {
     case 128:
       {
  tree VAR_16 = FUNC_2 (VAR_15, 0);
  tree VAR_17 = FUNC_2 (VAR_15, 1);



  if (FUNC_1 (VAR_17) == VAR_0
      && !FUNC_8 (VAR_17))
    FUNC_17 (VAR_15, VAR_17);

  if (FUNC_1 (VAR_16) == VAR_0
      && !FUNC_8 (VAR_16))
    FUNC_17 (VAR_15, VAR_16);




  else if (!VAR_8 && FUNC_1 (VAR_16) == VAR_6)
    {
      tree VAR_18, VAR_19, VAR_20, VAR_21;
      tree VAR_22 = FUNC_24
        (VAR_10, FUNC_7 (VAR_10, VAR_16));
      tree VAR_23 = FUNC_14 (VAR_22);

      if (FUNC_13 (VAR_22)
   || FUNC_6 (VAR_23))
        break;

      VAR_18 = FUNC_23 (VAR_22, VAR_10->num);
      VAR_19 = FUNC_18 (VAR_22, VAR_10->num);

      if (VAR_18 == VAR_5
   || VAR_19 == VAR_5
   || FUNC_1 (VAR_18) != VAR_3
   || FUNC_1 (VAR_19) != VAR_3
   || FUNC_5 (VAR_23) == VAR_5
   || FUNC_4 (VAR_23) == VAR_5)
        break;

      if (FUNC_25 (VAR_19))
        {
   tree VAR_24;

   if (FUNC_27 (VAR_19, VAR_9))
     VAR_20 = FUNC_19 (VAR_4, VAR_23, VAR_18,
           FUNC_5 (VAR_23));
   else
     VAR_20 = FUNC_19 (VAR_4, VAR_23,
           FUNC_4 (VAR_23), VAR_18);

   VAR_24 = FUNC_28 (VAR_23);
   VAR_21 = FUNC_19 (VAR_2, VAR_23, VAR_20,
        VAR_19);
   FUNC_26 (VAR_10,
      FUNC_20 (VAR_24, VAR_21),
      VAR_7, VAR_15);
        }
    }

  break;
       }

     case 129:
       {
  tree VAR_25;

  for (VAR_25 = FUNC_2 (VAR_15, 1); VAR_25;
       VAR_25 = FUNC_0 (VAR_25))
    if (FUNC_1 (FUNC_3 (VAR_25)) == VAR_0
        && !FUNC_8 (FUNC_3 (VAR_25)))
      FUNC_17 (VAR_15, FUNC_3 (VAR_25));

  break;
       }

     default:
       break;
     }
 }
    }

  FUNC_15 (VAR_10);
  FUNC_21 (VAR_13);
}
