
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct gate_descriptor {uintptr_t gd_looffset; int gd_selector; int gd_type; int gd_dpl; int gd_p; int gd_hioffset; scalar_t__ gd_xx; scalar_t__ gd_stkcpy; } ;


 struct gate_descriptor* VAR_0 ;

void
FUNC_0(int VAR_1, uintptr_t VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct gate_descriptor *VAR_6;

 VAR_6 = VAR_0 + VAR_1;
 VAR_6->gd_looffset = VAR_2;
 VAR_6->gd_selector = VAR_5;
 VAR_6->gd_stkcpy = 0;
 VAR_6->gd_xx = 0;
 VAR_6->gd_type = VAR_3;
 VAR_6->gd_dpl = VAR_4;
 VAR_6->gd_p = 1;
 VAR_6->gd_hioffset = ((u_int)VAR_2) >> 16 ;
}
