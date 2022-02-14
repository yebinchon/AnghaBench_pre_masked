
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_4__ {int world_save_p; scalar_t__ first_fp_reg_save; scalar_t__ first_gp_reg_save; scalar_t__ first_altivec_reg_save; int vrsave_size; scalar_t__ vrsave_mask; scalar_t__ cr_save_p; } ;
typedef TYPE_1__ rs6000_stack_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static void
FUNC_7 (rs6000_stack_t *VAR_8)
{
  VAR_8->world_save_p = 1;
  VAR_8->world_save_p
    = (FUNC_3 (VAR_8)
       && VAR_2 == VAR_0
       && ! (VAR_6 && VAR_7)
       && VAR_8->first_fp_reg_save == VAR_4
       && VAR_8->first_gp_reg_save == VAR_5
       && VAR_8->first_altivec_reg_save == VAR_3
       && VAR_8->cr_save_p);



  if (FUNC_3 (VAR_8))
    {
      rtx VAR_9;
      for ( VAR_9 = FUNC_6 (); VAR_9; VAR_9 = FUNC_1 (VAR_9))
 if ( FUNC_0 (VAR_9) == VAR_1
      && FUNC_2 (VAR_9))
   {
     VAR_8->world_save_p = 0;
     break;
   }
    }

  if (FUNC_3 (VAR_8))
    {



      VAR_8->vrsave_size = 4;


      if (VAR_8->vrsave_mask == 0)
 VAR_8->vrsave_mask = FUNC_4 ();




      FUNC_5 (VAR_8->first_fp_reg_save >= VAR_4
    && (VAR_8->first_altivec_reg_save
        >= VAR_3));
    }
  return;
}
