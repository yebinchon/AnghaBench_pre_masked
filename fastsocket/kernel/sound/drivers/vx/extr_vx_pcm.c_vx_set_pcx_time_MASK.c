
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;
typedef int pcx_time_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct vx_core *VAR_2, pcx_time_t *VAR_3,
       unsigned int *VAR_4)
{
 VAR_4[0] = (unsigned int)((*VAR_3) >> 24) & VAR_1;
 VAR_4[1] = (unsigned int)(*VAR_3) & VAR_0;
}
