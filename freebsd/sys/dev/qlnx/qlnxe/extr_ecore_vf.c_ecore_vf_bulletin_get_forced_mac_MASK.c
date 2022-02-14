
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
 int FUNC_0 (int*,int ,int ) ;
 int VAR_2 ;

bool FUNC_1(struct ecore_hwfn *VAR_3, u8 *VAR_4,
          u8 *VAR_5)
{
 struct ecore_bulletin_content *VAR_6;

 VAR_6 = &VAR_3->vf_iov_info->bulletin_shadow;

 if (VAR_6->valid_bitmap & (1 << VAR_1)) {
  if (VAR_5)
   *VAR_5 = 1;
 } else if (VAR_6->valid_bitmap & (1 << VAR_2)) {
  if (VAR_5)
   *VAR_5 = 0;
 } else {
  return 0;
 }

 FUNC_0(VAR_4, VAR_6->mac, VAR_0);

 return 1;
}
