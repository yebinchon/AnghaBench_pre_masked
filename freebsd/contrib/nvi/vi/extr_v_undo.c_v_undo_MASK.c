
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int lundo; int m_final; } ;
typedef TYPE_1__ VICMD ;
struct TYPE_14__ {int u_ccnt; } ;
struct TYPE_13__ {TYPE_1__* ep; int ccnt; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_1__ EXF ;




 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;

int
FUNC_6(SCR *VAR_2, VICMD *VAR_3)
{
 EXF *VAR_4;


 FUNC_2(VAR_2)->u_ccnt = VAR_2->ccnt;
 VAR_4 = VAR_2->ep;
 if (!FUNC_0(VAR_4, VAR_0)) {
  FUNC_1(VAR_4, VAR_0);
  VAR_4->lundo = 129;
 } else if (!FUNC_0(VAR_3, VAR_1))
  VAR_4->lundo = VAR_4->lundo == 129 ? 128 : 129;

 switch (VAR_4->lundo) {
 case 129:
  return (FUNC_4(VAR_2, &VAR_3->m_final));
 case 128:
  return (FUNC_5(VAR_2, &VAR_3->m_final));
 default:
  FUNC_3();
 }

}
