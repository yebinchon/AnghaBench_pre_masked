
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {scalar_t__ max; scalar_t__ used; scalar_t__ soft; int lock; } ;
typedef TYPE_1__ isc_quota_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

isc_result_t
FUNC_2(isc_quota_t *VAR_3) {
 isc_result_t VAR_4;
 FUNC_0(&VAR_3->lock);
 if (VAR_3->max == 0 || VAR_3->used < VAR_3->max) {
  if (VAR_3->soft == 0 || VAR_3->used < VAR_3->soft)
   VAR_4 = VAR_2;
  else
   VAR_4 = VAR_1;
  VAR_3->used++;
 } else
  VAR_4 = VAR_0;
 FUNC_1(&VAR_3->lock);
 return (VAR_4);
}
