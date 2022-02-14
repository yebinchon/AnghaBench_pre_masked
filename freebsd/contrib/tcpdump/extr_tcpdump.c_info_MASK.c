
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcap_stat {scalar_t__ ps_ifdrop; int ps_recv; int ps_drop; } ;


 char* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,struct pcap_stat*) ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_5 (char,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6(register int VAR_5)
{
 struct pcap_stat VAR_6;





 VAR_6.ps_ifdrop = 0;
 if (FUNC_4(VAR_2, &VAR_6) < 0) {
  (void)FUNC_1(VAR_4, "pcap_stats: %s\n", FUNC_3(VAR_2));
  VAR_0 = 0;
  return;
 }

 if (!VAR_5)
  FUNC_1(VAR_4, "%s: ", VAR_3);

 (void)FUNC_1(VAR_4, "%u packet%s captured", VAR_1,
     FUNC_0(VAR_1));
 if (!VAR_5)
  FUNC_2(", ", VAR_4);
 else
  FUNC_5('\n', VAR_4);
 (void)FUNC_1(VAR_4, "%u packet%s received by filter", VAR_6.ps_recv,
     FUNC_0(VAR_6.ps_recv));
 if (!VAR_5)
  FUNC_2(", ", VAR_4);
 else
  FUNC_5('\n', VAR_4);
 (void)FUNC_1(VAR_4, "%u packet%s dropped by kernel", VAR_6.ps_drop,
     FUNC_0(VAR_6.ps_drop));
 if (VAR_6.ps_ifdrop != 0) {
  if (!VAR_5)
   FUNC_2(", ", VAR_4);
  else
   FUNC_5('\n', VAR_4);
  (void)FUNC_1(VAR_4, "%ld packet%s dropped by interface\n",
      VAR_6.ps_ifdrop, FUNC_0(VAR_6.ps_ifdrop));
 } else
  FUNC_5('\n', VAR_4);
 VAR_0 = 0;
}
