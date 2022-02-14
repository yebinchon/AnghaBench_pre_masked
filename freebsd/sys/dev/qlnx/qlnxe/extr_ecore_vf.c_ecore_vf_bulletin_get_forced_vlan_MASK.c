
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ecore_hwfn {TYPE_1__* vf_iov_info; } ;
struct ecore_bulletin_content {int valid_bitmap; int pvid; } ;
struct TYPE_2__ {struct ecore_bulletin_content bulletin_shadow; } ;


 int VAR_0 ;

bool FUNC_0(struct ecore_hwfn *VAR_1, u16 *VAR_2)
{
 struct ecore_bulletin_content *VAR_3;

 VAR_3 = &VAR_1->vf_iov_info->bulletin_shadow;

 if (!(VAR_3->valid_bitmap & (1 << VAR_0)))
  return 0;

 if (VAR_2)
  *VAR_2 = VAR_3->pvid;

 return 1;
}
