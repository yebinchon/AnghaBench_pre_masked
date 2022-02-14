
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct pfi_kif {char* pfik_name; int pfik_flags; int pfik_rulerefs; scalar_t__*** pfik_bytes; scalar_t__*** pfik_packets; int pfik_tzero; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *) ;
 char**** VAR_3 ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(struct pfi_kif *VAR_4, int VAR_5)
{
 time_t VAR_6 = VAR_4->pfik_tzero;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 FUNC_1("%s", VAR_4->pfik_name);
 if (VAR_5 & VAR_1) {
  if (VAR_4->pfik_flags & VAR_0)
   FUNC_1(" (skip)");
 }
 FUNC_1("\n");

 if (!(VAR_5 & VAR_2))
  return;
 FUNC_1("\tCleared:     %s", FUNC_0(&VAR_6));
 FUNC_1("\tReferences:  %-18d\n", VAR_4->pfik_rulerefs);
 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  VAR_8 = (VAR_7>>2) & 1;
  VAR_9 = (VAR_7>>1) &1;
  VAR_10 = VAR_7 & 1;
  FUNC_1("\t%-12s [ Packets: %-18llu Bytes: %-18llu ]\n",
      VAR_3[VAR_8][VAR_9][VAR_10],
      (unsigned long long)VAR_4->pfik_packets[VAR_8][VAR_9][VAR_10],
      (unsigned long long)VAR_4->pfik_bytes[VAR_8][VAR_9][VAR_10]);
 }
}
