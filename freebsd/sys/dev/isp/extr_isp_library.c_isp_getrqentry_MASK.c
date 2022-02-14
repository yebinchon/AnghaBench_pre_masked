
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ isp_reqodx; int isp_reqidx; int isp_rquest; int isp_rqstoutrp; } ;
typedef TYPE_1__ ispsoftc_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

void *
FUNC_4(ispsoftc_t *VAR_0)
{
 uint32_t VAR_1;

 VAR_1 = FUNC_0(VAR_0->isp_reqidx, FUNC_3(VAR_0));
 if (VAR_1 == VAR_0->isp_reqodx) {
  VAR_0->isp_reqodx = FUNC_2(VAR_0, VAR_0->isp_rqstoutrp);
  if (VAR_1 == VAR_0->isp_reqodx)
   return (((void*)0));
 }
 return (FUNC_1(VAR_0->isp_rquest, VAR_0->isp_reqidx));
}
