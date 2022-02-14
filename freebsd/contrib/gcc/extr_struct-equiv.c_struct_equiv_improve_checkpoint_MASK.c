
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct struct_equiv_checkpoint {scalar_t__ ninsns; int input_count; } ;
struct TYPE_2__ {scalar_t__ input_count; scalar_t__ ninsns; int x_start; } ;
struct equiv_info {int input_cost; int mode; scalar_t__ check_input_conflict; TYPE_1__ cur; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct equiv_info*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct struct_equiv_checkpoint*,struct equiv_info*) ;

__attribute__((used)) static void
FUNC_7 (struct struct_equiv_checkpoint *VAR_3,
     struct equiv_info *VAR_4)
{





  if (VAR_4->cur.input_count >= VAR_0)
    return;
  if (VAR_4->input_cost >= 0
      ? (FUNC_0(VAR_4->cur.ninsns - VAR_3->ninsns)
  > VAR_4->input_cost * (VAR_4->cur.input_count - VAR_3->input_count))
      : VAR_4->cur.ninsns > VAR_3->ninsns && !VAR_4->cur.input_count)
    {
      if (VAR_4->check_input_conflict && ! FUNC_4 (VAR_4))
 return;



      if (VAR_4->mode & VAR_1)
 FUNC_2 ();
      else
 FUNC_1 (0);
      FUNC_6 (VAR_3, VAR_4);
    }
}
