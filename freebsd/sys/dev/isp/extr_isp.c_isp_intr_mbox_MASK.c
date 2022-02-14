
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int isp_obits; int * isp_mboxtmp; int isp_mboxbsy; } ;
typedef TYPE_1__ ispsoftc_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ,char*,int ) ;

void
FUNC_5(ispsoftc_t *VAR_1, uint16_t VAR_2)
{
 int VAR_3, VAR_4;

 if (!VAR_1->isp_mboxbsy) {
  FUNC_4(VAR_1, VAR_0, "mailbox 0x%x with no waiters", VAR_2);
  return;
 }
 VAR_4 = VAR_1->isp_obits;
 VAR_1->isp_mboxtmp[0] = VAR_2;
 for (VAR_3 = 1; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  if ((VAR_4 & (1 << VAR_3)) == 0)
   continue;
  VAR_1->isp_mboxtmp[VAR_3] = FUNC_1(VAR_1, FUNC_3(VAR_3));
 }
 FUNC_2(VAR_1);
}
