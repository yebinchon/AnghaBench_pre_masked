
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ainsn {int dummy; } ;
typedef TYPE_1__* decl_t ;
typedef TYPE_2__* ainsn_t ;
struct TYPE_9__ {int decls_num; TYPE_1__** decls; } ;
struct TYPE_8__ {struct TYPE_8__* next_ainsn; int important_p; int insn_reserv_decl; } ;
struct TYPE_7__ {scalar_t__ mode; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int) ;
 TYPE_3__* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static ainsn_t
FUNC_2 (void)
{
  decl_t VAR_3;
  ainsn_t VAR_4;
  ainsn_t VAR_5;
  ainsn_t VAR_6;
  int VAR_7;

  VAR_4 = ((void*)0);
  VAR_6 = ((void*)0);
  for (VAR_7 = 0; VAR_7 < VAR_1->decls_num; VAR_7++)
    {
      VAR_3 = VAR_1->decls [VAR_7];
      if (VAR_3->mode == VAR_2)
 {
   VAR_5 = FUNC_1 (sizeof (struct ainsn));
   VAR_5->insn_reserv_decl = FUNC_0 (VAR_3);
   VAR_5->important_p = VAR_0;
   VAR_5->next_ainsn = ((void*)0);
   if (VAR_6 == ((void*)0))
     VAR_4 = VAR_5;
   else
     VAR_6->next_ainsn = VAR_5;
   VAR_6 = VAR_5;
 }
    }
  return VAR_4;
}
