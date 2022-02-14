
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int subvar_t ;
struct ptr_info_def {int dummy; } ;
struct data_reference {int dummy; } ;



 int VAR_0 ;

 int VAR_1 ;

 int FUNC_0 (int ) ;

 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ,int,struct data_reference**,int *,int *,int *,int *,int *,struct ptr_info_def**,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int,int ,int ) ;
 int FUNC_11 (int ) ;
 int VAR_6 ;

__attribute__((used)) static tree
FUNC_12 (tree VAR_7, tree VAR_8, bool VAR_9, struct data_reference *VAR_10,
    tree *VAR_11, tree *VAR_12, tree *VAR_13, tree *VAR_14)
{
  tree VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
  tree VAR_21 = FUNC_11 (0), VAR_22 = FUNC_11 (0);
  tree VAR_23, VAR_24 = VAR_1;
  struct ptr_info_def *VAR_25;
  subvar_t VAR_26;

  switch (FUNC_2 (VAR_7))
    {
    case 129:
    case 130:

      VAR_15 = FUNC_3 (VAR_7, 0);
      VAR_16 = FUNC_3 (VAR_7, 1);

      FUNC_1 (VAR_15);
      FUNC_1 (VAR_16);



      VAR_19 = FUNC_12 (VAR_15, VAR_8, VAR_9, VAR_10, &VAR_21,
         &VAR_22, &VAR_24,
         VAR_14);

      VAR_20 = FUNC_12 (VAR_16, VAR_8, VAR_9, VAR_10, &VAR_21,
         &VAR_22, &VAR_24,
         VAR_14);



      if ((VAR_19 && VAR_20) || (!VAR_19 && !VAR_20))
 {
   if (VAR_4 && (VAR_5 & VAR_2))
     {
       FUNC_7 (VAR_4,
      "\neither more than one address or no addresses in expr ");
       FUNC_9 (VAR_4, VAR_7, VAR_3);
       FUNC_7 (VAR_4, "\n");
     }
   return VAR_1;
 }


      VAR_15 = FUNC_3 (VAR_7, 0);
      VAR_16 = FUNC_3 (VAR_7, 1);

      VAR_18 = VAR_19 ?
 FUNC_6 (VAR_6, VAR_16) : FUNC_6 (VAR_6, VAR_15);




      if (FUNC_2 (VAR_18) == VAR_0 && VAR_22)
 {
   *VAR_12 = FUNC_10 (FUNC_2 (VAR_7), VAR_22,
      VAR_18);
   *VAR_13 = VAR_24;
 }
      else
 {
   *VAR_12 = VAR_1;
   *VAR_13 = VAR_1;
 }



      *VAR_11 = FUNC_10 (FUNC_2 (VAR_7), VAR_21, VAR_18);
      return VAR_19 ? VAR_19 : VAR_20;

    case 131:
      VAR_17 = FUNC_8 (FUNC_3 (VAR_7, 0), VAR_8, VAR_9,
          &VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
          &VAR_23, &VAR_25, &VAR_26);
      return VAR_17;

    case 128:
      if (!FUNC_0 (FUNC_4 (VAR_7)))
 {
   if (VAR_4 && (VAR_5 & VAR_2))
     {
       FUNC_7 (VAR_4, "\nnot pointer SSA_NAME ");
       FUNC_9 (VAR_4, VAR_7, VAR_3);
       FUNC_7 (VAR_4, "\n");
     }
   return VAR_1;
 }
      *VAR_13 = FUNC_11 (FUNC_5 (FUNC_4 (FUNC_4 (VAR_7))));
      *VAR_12 = FUNC_11 (0);
      *VAR_11 = FUNC_11 (0);
      *VAR_14 = FUNC_11 (0);
      return VAR_7;

    default:
      return VAR_1;
    }
}
