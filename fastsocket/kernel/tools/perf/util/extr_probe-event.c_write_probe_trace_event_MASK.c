
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_trace_event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (struct probe_trace_event*) ;
 int FUNC_6 (int,char*,int ) ;

__attribute__((used)) static int FUNC_7(int VAR_3, struct probe_trace_event *VAR_4)
{
 int VAR_5 = 0;
 char *VAR_6 = FUNC_5(VAR_4);

 if (!VAR_6) {
  FUNC_1("Failed to synthesize probe trace event.\n");
  return -VAR_0;
 }

 FUNC_1("Writing event: %s\n", VAR_6);
 if (!VAR_2) {
  VAR_5 = FUNC_6(VAR_3, VAR_6, FUNC_4(VAR_6));
  if (VAR_5 <= 0)
   FUNC_2("Failed to write event: %s\n",
       FUNC_3(VAR_1));
 }
 FUNC_0(VAR_6);
 return VAR_5;
}
