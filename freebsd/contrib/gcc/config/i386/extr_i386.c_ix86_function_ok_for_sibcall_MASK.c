
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int rtx ;
struct TYPE_6__ {TYPE_1__* machine; scalar_t__ decl; } ;
struct TYPE_5__ {int (* binds_local_p ) (scalar_t__) ;} ;
struct TYPE_4__ {scalar_t__ force_align_arg_pointer; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 TYPE_3__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (scalar_t__,int *) ;
 int FUNC_8 (scalar_t__,scalar_t__,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static bool
FUNC_11 (tree VAR_4, tree VAR_5)
{
  tree VAR_6;
  rtx VAR_7, VAR_8;




  if (!VAR_0 && VAR_2 && (!VAR_4 || !VAR_3.binds_local_p (VAR_4)))
    return 0;

  if (VAR_4)
    VAR_6 = VAR_4;
  else
    {
      VAR_6 = FUNC_5 (FUNC_4 (VAR_5, 0));
      if (FUNC_2 (VAR_6))
        VAR_6 = FUNC_5 (VAR_6);
    }
  VAR_7 = FUNC_8 (FUNC_5 (VAR_5), VAR_6, 0);
  VAR_8 = FUNC_8 (FUNC_5 (FUNC_1 (VAR_1->decl)),
      VAR_1->decl, 0);
  if (FUNC_3 (VAR_7) || FUNC_3 (VAR_8))
    {
      if (!FUNC_9 (VAR_7, VAR_8))
 return 0;
    }
  else if (FUNC_6 (FUNC_5 (FUNC_1 (VAR_1->decl))))
    ;
  else if (!FUNC_9 (VAR_7, VAR_8))
    return 0;




  if (!VAR_4 && !VAR_0)
    {
      tree VAR_9;


      VAR_9 = FUNC_4 (VAR_5, 0);
      VAR_9 = FUNC_5 (VAR_9);
      VAR_9 = FUNC_5 (VAR_9);

      if (FUNC_7 (VAR_9, ((void*)0)) >= 3)
 {


   return 0;
 }
    }
  if (VAR_1->machine->force_align_arg_pointer)
    return 0;


  return 1;
}
