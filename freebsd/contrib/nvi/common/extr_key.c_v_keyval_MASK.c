
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int scr_keyval_t ;
struct TYPE_9__ {int value; scalar_t__ ch; } ;
struct TYPE_8__ {TYPE_1__* gp; } ;
struct TYPE_7__ {scalar_t__ (* scr_keyval ) (TYPE_2__*,int ,scalar_t__*,int*) ;} ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ KEYLIST ;
typedef scalar_t__ CHAR_T ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,scalar_t__*,int*) ;

__attribute__((used)) static void
FUNC_1(
 SCR *VAR_3,
 int VAR_4,
 scr_keyval_t VAR_5)
{
 KEYLIST *VAR_6;
 CHAR_T VAR_7;
 int VAR_8;


 if (VAR_3->gp->scr_keyval(VAR_3, VAR_5, &VAR_7, &VAR_8))
  return;
 if (VAR_8)
  return;


 for (VAR_6 = VAR_1; VAR_6->value != VAR_0; ++VAR_6)
  if (VAR_6->ch == VAR_7) {
   VAR_6->value = VAR_4;
   return;
  }


 if (VAR_6->value == VAR_0) {
  VAR_1[VAR_2].ch = VAR_7;
  VAR_1[VAR_2].value = VAR_4;
  ++VAR_2;
 }
}
