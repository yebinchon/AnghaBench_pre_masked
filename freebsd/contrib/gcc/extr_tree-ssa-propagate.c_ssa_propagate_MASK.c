
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssa_prop_visit_stmt_fn ;
typedef int ssa_prop_visit_phi_fn ;
typedef int basic_block ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_7 (ssa_prop_visit_stmt_fn VAR_5,
        ssa_prop_visit_phi_fn VAR_6)
{
  VAR_2 = VAR_5;
  VAR_1 = VAR_6;

  FUNC_6 ();


  while (!FUNC_1 ()
  || FUNC_0 (VAR_3, VAR_0) > 0
  || FUNC_0 (VAR_3, VAR_4) > 0)
    {
      if (!FUNC_1 ())
 {

   basic_block VAR_7 = FUNC_2 ();
   FUNC_4 (VAR_7);
 }



      FUNC_3 (&VAR_4);


      FUNC_3 (&VAR_0);
    }

  FUNC_5 ();
}
