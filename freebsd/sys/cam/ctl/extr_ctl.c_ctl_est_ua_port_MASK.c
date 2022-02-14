
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ctl_lun {int ** pending_ua; int lun_lock; } ;
typedef int ctl_ua_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

void
FUNC_1(struct ctl_lun *VAR_2, int VAR_3, uint32_t VAR_4, ctl_ua_type VAR_5)
{
 int VAR_6;

 FUNC_0(&VAR_2->lun_lock, VAR_1);
 if (VAR_2->pending_ua[VAR_3] == ((void*)0))
  return;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_3 * VAR_0 + VAR_6 == VAR_4)
   continue;
  VAR_2->pending_ua[VAR_3][VAR_6] |= VAR_5;
 }
}
