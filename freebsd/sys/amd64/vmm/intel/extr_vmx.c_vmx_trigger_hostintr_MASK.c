
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gate_descriptor {int gd_p; scalar_t__ gd_type; scalar_t__ gd_dpl; scalar_t__ gd_selector; scalar_t__ gd_ist; long gd_looffset; scalar_t__ gd_hioffset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct gate_descriptor* VAR_3 ;
 int FUNC_2 (uintptr_t) ;

__attribute__((used)) static void
FUNC_3(int VAR_4)
{
 uintptr_t VAR_5;
 struct gate_descriptor *VAR_6;

 VAR_6 = &VAR_3[VAR_4];

 FUNC_1(VAR_4 >= 32 && VAR_4 <= 255, ("vmx_trigger_hostintr: "
     "invalid vector %d", VAR_4));
 FUNC_1(VAR_6->gd_p == 1, ("gate descriptor for vector %d not present",
     VAR_4));
 FUNC_1(VAR_6->gd_type == VAR_1, ("gate descriptor for vector %d "
     "has invalid type %d", VAR_4, VAR_6->gd_type));
 FUNC_1(VAR_6->gd_dpl == VAR_2, ("gate descriptor for vector %d "
     "has invalid dpl %d", VAR_4, VAR_6->gd_dpl));
 FUNC_1(VAR_6->gd_selector == FUNC_0(VAR_0, VAR_2), ("gate descriptor "
     "for vector %d has invalid selector %d", VAR_4, VAR_6->gd_selector));
 FUNC_1(VAR_6->gd_ist == 0, ("gate descriptor for vector %d has invalid "
     "IST %d", VAR_4, VAR_6->gd_ist));

 VAR_5 = ((long)VAR_6->gd_hioffset << 16 | VAR_6->gd_looffset);
 FUNC_2(VAR_5);
}
