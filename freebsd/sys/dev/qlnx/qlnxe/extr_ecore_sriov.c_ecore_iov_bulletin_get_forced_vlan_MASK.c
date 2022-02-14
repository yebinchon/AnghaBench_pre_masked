
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {TYPE_1__* p_virt; } ;
struct ecore_vf_info {TYPE_2__ bulletin; } ;
struct ecore_hwfn {int dummy; } ;
struct TYPE_3__ {int valid_bitmap; int pvid; } ;


 int VAR_0 ;
 struct ecore_vf_info* FUNC_0 (struct ecore_hwfn*,int ,int) ;

u16 FUNC_1(struct ecore_hwfn *VAR_1,
           u16 VAR_2)
{
 struct ecore_vf_info *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2, 1);
 if (!VAR_3 || !VAR_3->bulletin.p_virt)
  return 0;

 if (!(VAR_3->bulletin.p_virt->valid_bitmap & (1 << VAR_0)))
  return 0;

 return VAR_3->bulletin.p_virt->pvid;
}
