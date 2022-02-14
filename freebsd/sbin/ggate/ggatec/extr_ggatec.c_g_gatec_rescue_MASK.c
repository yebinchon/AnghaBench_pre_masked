
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_gate_ctl_cancel {scalar_t__ gctl_seq; int gctl_unit; int gctl_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct g_gate_ctl_cancel*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_6(void)
{
 struct g_gate_ctl_cancel VAR_4;

 if (!FUNC_2())
  FUNC_1("Cannot connect: %s.", FUNC_5(VAR_2));

 VAR_4.gctl_version = VAR_1;
 VAR_4.gctl_unit = VAR_3;
 VAR_4.gctl_seq = 0;
 FUNC_0(VAR_0, &VAR_4);

 FUNC_4();
 FUNC_3();
}
