
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {long* sig; } ;
typedef TYPE_1__ sigset_t ;
struct TYPE_6__ {long* sig; } ;
typedef TYPE_2__ compat_sigset_t ;


 int VAR_0 ;

void
FUNC_0 (sigset_t *VAR_1, compat_sigset_t *VAR_2)
{
 switch (VAR_0) {
 case 4: VAR_1->sig[3] = VAR_2->sig[6] | (((long)VAR_2->sig[7]) << 32 );
 case 3: VAR_1->sig[2] = VAR_2->sig[4] | (((long)VAR_2->sig[5]) << 32 );
 case 2: VAR_1->sig[1] = VAR_2->sig[2] | (((long)VAR_2->sig[3]) << 32 );
 case 1: VAR_1->sig[0] = VAR_2->sig[0] | (((long)VAR_2->sig[1]) << 32 );
 }
}
