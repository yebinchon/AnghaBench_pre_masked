
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int v_type; int v_mount; } ;
typedef TYPE_1__ vnode_t ;
typedef scalar_t__ uid_t ;
typedef int privs ;
struct TYPE_8__ {scalar_t__ cr_uid; } ;
typedef TYPE_2__ cred_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;

int
FUNC_2(cred_t *VAR_3, vnode_t *VAR_4, uid_t VAR_5)
{
 static int VAR_6[] = {
     132,
     129,
     128,
     131,
     130
 };
 int VAR_7;

 if (FUNC_1(VAR_4->v_mount, VAR_3) == 0)
  return (0);


 if (VAR_5 == VAR_3->cr_uid)
  return (0);

 for (VAR_7 = 0; VAR_7 < sizeof (VAR_6)/sizeof (int); VAR_7++) {
  boolean_t VAR_8 = VAR_0;
  int VAR_9;

  switch (VAR_9 = VAR_6[VAR_7]) {
  case 131:
   if (VAR_4->v_type == VAR_2)
    continue;
   break;
  case 130:
   if (VAR_4->v_type != VAR_2)
    continue;
   break;
  }
  if (FUNC_0(VAR_3, VAR_9) == 0)
   return (0);
 }
 return (VAR_1);
}
