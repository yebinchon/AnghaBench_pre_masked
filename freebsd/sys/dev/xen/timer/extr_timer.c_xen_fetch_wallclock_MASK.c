
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct pvclock_wall_clock {int dummy; } ;
struct TYPE_3__ {int wc_version; } ;
typedef TYPE_1__ shared_info_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct pvclock_wall_clock*,struct timespec*) ;

__attribute__((used)) static void
FUNC_1(struct timespec *VAR_1)
{
 shared_info_t *VAR_2 = VAR_0;
 struct pvclock_wall_clock *VAR_3;

 VAR_3 = (struct pvclock_wall_clock *) &VAR_2->wc_version;

 FUNC_0(VAR_3, VAR_1);
}
