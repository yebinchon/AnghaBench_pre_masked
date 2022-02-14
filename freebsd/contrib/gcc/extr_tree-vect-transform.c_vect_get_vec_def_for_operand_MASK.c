
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loop {int dummy; } ;
typedef int * stmt_vec_info ;
typedef int loop_vec_info ;
typedef enum vect_def_type { ____Placeholder_vect_def_type } vect_def_type ;


 struct loop* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 (int,int,int*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (struct loop*) ;
 int FUNC_16 (int ,int,int ) ;
 int FUNC_17 (int,int,int) ;

 int VAR_4 ;

 int FUNC_18 (int,int) ;

 int FUNC_19 (int,int ,int*,int*,int*) ;

 scalar_t__ FUNC_20 (int ) ;

 int * FUNC_21 (int) ;

__attribute__((used)) static tree
FUNC_22 (tree VAR_5, tree VAR_6, tree *VAR_7)
{
  tree VAR_8;
  tree VAR_9;
  tree VAR_10;
  stmt_vec_info VAR_11 = ((void*)0);
  stmt_vec_info VAR_12 = FUNC_21 (VAR_6);
  tree VAR_13 = FUNC_3 (VAR_12);
  int VAR_14 = FUNC_7 (VAR_13);
  loop_vec_info VAR_15 = FUNC_2 (VAR_12);
  struct loop *VAR_16 = FUNC_0 (VAR_15);
  tree VAR_17;
  tree VAR_18;
  tree VAR_19 = VAR_0;
  tree VAR_20;
  int VAR_21;
  enum vect_def_type VAR_22;
  bool VAR_23;

  if (FUNC_20 (VAR_2))
    {
      FUNC_10 (VAR_4, "vect_get_vec_def_for_operand: ");
      FUNC_16 (VAR_4, VAR_5, VAR_3);
    }

  VAR_23 = FUNC_19 (VAR_5, VAR_15, &VAR_10, &VAR_20, &VAR_22);
  FUNC_11 (VAR_23);
  if (FUNC_20 (VAR_2))
    {
      if (VAR_20)
        {
          FUNC_10 (VAR_4, "def =  ");
          FUNC_16 (VAR_4, VAR_20, VAR_3);
        }
      if (VAR_10)
        {
          FUNC_10 (VAR_4, "  def_stmt =  ");
          FUNC_16 (VAR_4, VAR_10, VAR_3);
        }
    }

  switch (VAR_22)
    {

    case 132:
      {
 if (VAR_7)
   *VAR_7 = VAR_5;


        if (FUNC_20 (VAR_2))
          FUNC_10 (VAR_4, "Create vector_cst. nunits = %d", VAR_14);

        for (VAR_21 = VAR_14 - 1; VAR_21 >= 0; --VAR_21)
          {
            VAR_19 = FUNC_17 (VAR_0, VAR_5, VAR_19);
          }
        VAR_18 = FUNC_9 (VAR_13, VAR_19);
        return FUNC_18 (VAR_6, VAR_18);
      }


    case 130:
      {
 if (VAR_7)
   *VAR_7 = VAR_20;


        if (FUNC_20 (VAR_2))
          FUNC_10 (VAR_4, "Create vector_inv.");

        for (VAR_21 = VAR_14 - 1; VAR_21 >= 0; --VAR_21)
          {
            VAR_19 = FUNC_17 (VAR_0, VAR_20, VAR_19);
          }


        VAR_17 = FUNC_8 (VAR_13, VAR_19);
        return FUNC_18 (VAR_6, VAR_17);
      }


    case 129:
      {
 if (VAR_7)
   *VAR_7 = VAR_10;


        VAR_11 = FUNC_21 (VAR_10);
        VAR_9 = FUNC_4 (VAR_11);
        FUNC_11 (VAR_9);
        VAR_8 = FUNC_6 (VAR_9, 0);
        return VAR_8;
      }


    case 128:
      {
        FUNC_11 (FUNC_5 (VAR_10) == VAR_1);


        VAR_5 = FUNC_1 (VAR_10, FUNC_15 (VAR_16));
        return FUNC_13 (VAR_6, VAR_5, VAR_7);
     }


    case 131:
      {
        if (FUNC_20 (VAR_2))
          FUNC_10 (VAR_4, "induction - unsupported.");
        FUNC_14 ("no support for induction");
      }

    default:
      FUNC_12 ();
    }
}
