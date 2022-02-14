
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef int tree ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13 (void)
{
  tree VAR_7, VAR_8, VAR_9;
  tree_stmt_iterator VAR_10;


  VAR_6
    = FUNC_8 (FUNC_5 (FUNC_2 (VAR_5),
                               "__mf_lookup_shift_l"));

  VAR_4
    = FUNC_8 (FUNC_5 (FUNC_2 (VAR_3),
                               "__mf_lookup_mask_l"));



  VAR_7 = FUNC_4 (VAR_1, FUNC_2 (VAR_6),
              VAR_6, VAR_5);
  FUNC_1 (VAR_7, FUNC_0 (VAR_2));
  FUNC_6 (&VAR_7);
  VAR_8 = VAR_7;

  VAR_7 = FUNC_4 (VAR_1, FUNC_2 (VAR_4),
              VAR_4, VAR_3);
  FUNC_1 (VAR_7, FUNC_0 (VAR_2));
  FUNC_6 (&VAR_7);
  VAR_9 = VAR_7;



  for (VAR_10 = FUNC_11 (VAR_8);
       ! FUNC_9 (VAR_10);
       FUNC_10 (&VAR_10))
    FUNC_7 (FUNC_12 (VAR_10), VAR_0);

  for (VAR_10 = FUNC_11 (VAR_9);
       ! FUNC_9 (VAR_10);
       FUNC_10 (&VAR_10))
    FUNC_7 (FUNC_12 (VAR_10), VAR_0);
  FUNC_3 ();
}
