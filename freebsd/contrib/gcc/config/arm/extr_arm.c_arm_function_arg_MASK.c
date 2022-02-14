
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_3__ {scalar_t__ named_count; scalar_t__ nargs; int iwmmxt_nregs; int can_split; int nregs; int call_cookie; } ;
typedef TYPE_1__ CUMULATIVE_ARGS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

rtx
FUNC_5 (CUMULATIVE_ARGS *VAR_6, enum machine_mode VAR_7,
    tree VAR_8, int VAR_9)
{
  int VAR_10;



  if (VAR_4
      && FUNC_3 (VAR_7)
      && VAR_6->named_count > VAR_6->nargs + 1)
    {
      if (VAR_6->iwmmxt_nregs <= 9)
 return FUNC_4 (VAR_7, VAR_6->iwmmxt_nregs + VAR_1);
      else
 {
   VAR_6->can_split = 0;
   return VAR_2;
 }
    }


  if (VAR_6->nregs & 1
      && VAR_0
      && FUNC_2 (VAR_7, VAR_8))
    VAR_6->nregs++;

  if (VAR_7 == VAR_5)

    return FUNC_1 (VAR_6->call_cookie);




  if (VAR_6->can_split)
    VAR_10 = 1;
  else
    VAR_10 = FUNC_0 (VAR_7, VAR_8);

  if (!VAR_9 || VAR_6->nregs + VAR_10 > VAR_3)
    return VAR_2;

  return FUNC_4 (VAR_7, VAR_6->nregs);
}
