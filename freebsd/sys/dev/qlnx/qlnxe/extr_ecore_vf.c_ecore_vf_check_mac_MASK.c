
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ecore_hwfn {TYPE_1__* vf_iov_info; } ;
struct ecore_bulletin_content {int valid_bitmap; int mac; } ;
struct TYPE_2__ {struct ecore_bulletin_content bulletin_shadow; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int ) ;

bool FUNC_1(struct ecore_hwfn *VAR_2, u8 *VAR_3)
{
 struct ecore_bulletin_content *VAR_4;

 VAR_4 = &VAR_2->vf_iov_info->bulletin_shadow;
 if (!(VAR_4->valid_bitmap & (1 << VAR_1)))
  return 1;


 if (FUNC_0(VAR_4->mac, VAR_3, VAR_0))
  return 0;

 return 0;
}
