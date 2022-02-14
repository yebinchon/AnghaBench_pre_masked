
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_gate_ctl_cancel {scalar_t__ gctl_seq; int gctl_unit; int gctl_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct g_gate_ctl_cancel*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_6(void)
{
 struct g_gate_ctl_cancel VAR_8;

 FUNC_4(VAR_3, VAR_6);
 for (;;) {
  FUNC_3();
  FUNC_1(VAR_2, "Disconnected [%s %s]. Connecting...",
      VAR_4, VAR_5);
  while (!FUNC_2()) {
   FUNC_5(2);
   FUNC_1(VAR_2, "Connecting [%s %s]...", VAR_4,
       VAR_5);
  }
  VAR_8.gctl_version = VAR_1;
  VAR_8.gctl_unit = VAR_7;
  VAR_8.gctl_seq = 0;
  FUNC_0(VAR_0, &VAR_8);
 }
}
