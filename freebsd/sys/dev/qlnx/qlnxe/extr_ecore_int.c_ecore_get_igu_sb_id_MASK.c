
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {TYPE_1__* p_igu_info; } ;
struct ecore_hwfn {int p_dev; TYPE_2__ hw_info; } ;
struct TYPE_3__ {scalar_t__ igu_dsb_id; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,scalar_t__) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,scalar_t__,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct ecore_hwfn*,scalar_t__) ;

u16 FUNC_5(struct ecore_hwfn *VAR_3, u16 VAR_4)
{
 u16 VAR_5;


 if (VAR_4 == VAR_2)
  VAR_5 = VAR_3->hw_info.p_igu_info->igu_dsb_id;
 else if (FUNC_2(VAR_3->p_dev))
  VAR_5 = FUNC_3(VAR_3, VAR_4 + 1);
 else
  VAR_5 = FUNC_4(VAR_3, VAR_4);

 if (VAR_5 == VAR_1)
  FUNC_0(VAR_3, 1,
     "Slowpath SB vector %04x doesn't exist\n",
     VAR_4);
 else if (VAR_4 == VAR_2)
  FUNC_1(VAR_3, VAR_0,
      "Slowpath SB index in IGU is 0x%04x\n", VAR_5);
 else
  FUNC_1(VAR_3, VAR_0,
      "SB [%04x] <--> IGU SB [%04x]\n", VAR_4, VAR_5);

 return VAR_5;
}
