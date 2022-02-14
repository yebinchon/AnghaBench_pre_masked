
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int absolute; } ;
typedef TYPE_1__ isc_time_t ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int) ;

int
FUNC_2(const isc_time_t *VAR_0, const isc_time_t *VAR_1) {
 FUNC_1(VAR_0 != ((void*)0) && VAR_1 != ((void*)0));

 return ((int)FUNC_0(&VAR_0->absolute, &VAR_1->absolute));
}
