
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef TYPE_1__* hcb_p ;
typedef TYPE_2__* ccb_p ;
struct TYPE_6__ {scalar_t__ ccb_ba; struct TYPE_6__* link_ccbh; } ;
struct TYPE_5__ {TYPE_2__** ccbh; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static ccb_p FUNC_1(hcb_p VAR_0, u32 VAR_1)
{
 int VAR_2;
 ccb_p VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = VAR_0->ccbh[VAR_2];
 while (VAR_3) {
  if (VAR_3->ccb_ba == VAR_1)
   break;
  VAR_3 = VAR_3->link_ccbh;
 }

 return VAR_3;
}
