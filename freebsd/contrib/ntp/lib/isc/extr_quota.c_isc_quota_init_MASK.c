
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {int max; int lock; scalar_t__ soft; scalar_t__ used; } ;
typedef TYPE_1__ isc_quota_t ;


 int FUNC_0 (int *) ;

isc_result_t
FUNC_1(isc_quota_t *VAR_0, int VAR_1) {
 VAR_0->max = VAR_1;
 VAR_0->used = 0;
 VAR_0->soft = 0;
 return (FUNC_0(&VAR_0->lock));
}
