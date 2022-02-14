
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_sb_private_info {int dummy; } ;
struct TYPE_2__ {unsigned int count; int ** bh; } ;


 TYPE_1__* FUNC_0 (struct ufs_sb_private_info*) ;
 int FUNC_1 (int *) ;

void FUNC_2 (struct ufs_sb_private_info * VAR_0)
{
 unsigned VAR_1;
 if (!FUNC_0(VAR_0))
  return;
 for ( VAR_1 = 0; VAR_1 < FUNC_0(VAR_0)->count; VAR_1++ ) {
  FUNC_1 (FUNC_0(VAR_0)->bh[VAR_1]);
  FUNC_0(VAR_0)->bh[VAR_1] = ((void*)0);
 }
}
