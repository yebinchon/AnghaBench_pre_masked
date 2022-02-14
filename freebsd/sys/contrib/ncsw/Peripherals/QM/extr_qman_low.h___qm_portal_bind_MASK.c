
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int t_Error ;
struct TYPE_2__ {int bound; } ;
struct qm_portal {TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __inline__ t_Error FUNC_0(struct qm_portal *VAR_2, uint8_t VAR_3)
{
    t_Error VAR_4 = VAR_0;
    if (!(VAR_2->config.bound & VAR_3)) {
        VAR_2->config.bound |= VAR_3;
        VAR_4 = VAR_1;
    }
    return VAR_4;
}
