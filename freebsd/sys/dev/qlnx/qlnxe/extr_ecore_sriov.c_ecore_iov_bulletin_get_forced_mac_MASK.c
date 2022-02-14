
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* p_virt; } ;
struct ecore_vf_info {TYPE_2__ bulletin; } ;
struct ecore_hwfn {int dummy; } ;
struct TYPE_3__ {int valid_bitmap; int * mac; } ;


 int VAR_0 ;
 int * VAR_1 ;
 struct ecore_vf_info* FUNC_0 (struct ecore_hwfn*,int ,int) ;

u8 *FUNC_1(struct ecore_hwfn *VAR_2,
          u16 VAR_3)
{
 struct ecore_vf_info *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3, 1);
 if (!VAR_4 || !VAR_4->bulletin.p_virt)
  return VAR_1;

 if (!(VAR_4->bulletin.p_virt->valid_bitmap & (1 << VAR_0)))
  return VAR_1;

 return VAR_4->bulletin.p_virt->mac;
}
