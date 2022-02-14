
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ just_syms_flag; } ;
typedef TYPE_1__ lang_input_statement_type ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_2__ bfd ;
typedef int asection ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2 (bfd *VAR_2, asection *VAR_3, void *VAR_4)
{
  lang_input_statement_type *VAR_5 = VAR_4;



  if (VAR_5->just_syms_flag)
    {
      FUNC_0 (VAR_2, VAR_3, &VAR_1);
      return;
    }

  if (!(VAR_2->flags & VAR_0))
    FUNC_1 (VAR_2, VAR_3, &VAR_1);
}
