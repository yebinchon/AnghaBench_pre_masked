
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_gate_ctl_cancel {scalar_t__ gctl_seq; int gctl_unit; int gctl_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,struct g_gate_ctl_cancel*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct g_gate_ctl_cancel VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_4, FUNC_2(VAR_3));
 if (VAR_7 == -1)
  FUNC_0(VAR_0, "Cannot open %s", VAR_4);

 VAR_6.gctl_version = VAR_2;
 VAR_6.gctl_unit = VAR_5;
 VAR_6.gctl_seq = 0;
 FUNC_1(VAR_1, &VAR_6);

 FUNC_3(VAR_7);
}
