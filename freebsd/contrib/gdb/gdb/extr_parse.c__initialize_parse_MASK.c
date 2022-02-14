
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union type_stack_elt {int dummy; } type_stack_elt ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int *,int ,int (*) ()) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 union type_stack_elt* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (int) ;

void
FUNC_6 (void)
{
  VAR_9 = 80;
  VAR_8 = 0;
  VAR_7 = (union type_stack_elt *)
    FUNC_5 (VAR_9 * sizeof (*VAR_7));

  FUNC_3 ();




  FUNC_0 (VAR_3);
  FUNC_0 (VAR_2);
  FUNC_0 (VAR_4);
  FUNC_4 (((void*)0), 0, FUNC_3);

  FUNC_2 (
     FUNC_1 ("expression", VAR_0, VAR_10,
    (char *) &VAR_1,
    "Set expression debugging.\nWhen non-zero, the internal representation of expressions will be printed.",

    &VAR_5),
        &VAR_6);
}
