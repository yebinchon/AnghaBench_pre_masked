
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int high; int low; } ;
struct rejected_reply {int rj_stat; int rj_why; TYPE_1__ rj_vers; } ;
typedef int enum_t ;
typedef enum reject_stat { ____Placeholder_reject_stat } reject_stat ;
typedef enum auth_stat { ____Placeholder_auth_stat } auth_stat ;
typedef int bool_t ;
typedef int XDR ;



 int VAR_0 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

bool_t
FUNC_3(XDR *VAR_1, struct rejected_reply *VAR_2)
{
 enum reject_stat *VAR_3;
 enum auth_stat *VAR_4;

 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_2 != ((void*)0));

 VAR_3 = &VAR_2->rj_stat;


 if (! FUNC_1(VAR_1, (enum_t *) VAR_3))
  return (VAR_0);
 switch (VAR_2->rj_stat) {

 case 128:
  if (! FUNC_2(VAR_1, &(VAR_2->rj_vers.low)))
   return (VAR_0);
  return (FUNC_2(VAR_1, &(VAR_2->rj_vers.high)));

 case 129:
  VAR_4 = &VAR_2->rj_why;
  return (FUNC_1(VAR_1, (enum_t *) VAR_4));
 }

 FUNC_0(0);
 return (VAR_0);
}
