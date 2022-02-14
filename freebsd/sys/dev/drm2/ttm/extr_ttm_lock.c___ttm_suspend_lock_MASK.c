
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_lock {scalar_t__ rw; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct ttm_lock *VAR_2)
{
 bool VAR_3 = 0;

 if (VAR_2->rw == 0) {
  VAR_2->flags &= ~VAR_1;
  VAR_2->flags |= VAR_0;
  VAR_3 = 1;
 } else {
  VAR_2->flags |= VAR_1;
 }
 return VAR_3;
}
