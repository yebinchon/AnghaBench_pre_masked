
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (unsigned int,int*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (char*,int,...) ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static bool
FUNC_3(void)
{
 u_int VAR_18[4];
 unsigned int VAR_19;

 if (VAR_17 != VAR_10)
  return (0);

 FUNC_1(VAR_7, VAR_18);
 VAR_19 = VAR_18[0];
 if (VAR_19 < VAR_6)
  return (0);

 FUNC_1(VAR_5, VAR_18);
 if (VAR_18[0] != VAR_0)
  return (0);

 FUNC_1(VAR_2, VAR_18);
 if ((VAR_18[0] & VAR_1) == 0) {




  return (0);
 }
 VAR_12 = VAR_18[0];
 VAR_14 = VAR_18[2];
 VAR_13 = VAR_18[3];

 FUNC_1(VAR_4, VAR_18);
 VAR_16 = VAR_18[1] >> 16;
 FUNC_2("Hyper-V Version: %d.%d.%d [SP%d]\n",
     VAR_16, VAR_18[1] & 0xffff, VAR_18[0], VAR_18[2]);

 FUNC_2("  Features=0x%b\n", VAR_12,
     "\020"
     "\001VPRUNTIME"
     "\002TMREFCNT"
     "\003SYNIC"
     "\004SYNTM"
     "\005APIC"
     "\006HYPERCALL"
     "\007VPINDEX"
     "\010RESET"
     "\011STATS"
     "\012REFTSC"
     "\013IDLE"
     "\014TMFREQ"
     "\015DEBUG");
 FUNC_2("  PM Features=0x%b [C%u]\n",
     (VAR_14 & ~VAR_9),
     "\020"
     "\005C3HPET",
     FUNC_0(VAR_14));
 FUNC_2("  Features3=0x%b\n", VAR_13,
     "\020"
     "\001MWAIT"
     "\002DEBUG"
     "\003PERFMON"
     "\004PCPUDPE"
     "\005XMMHC"
     "\006IDLE"
     "\007SLEEP"
     "\010NUMA"
     "\011TMFREQ"
     "\012SYNCMC"
     "\013CRASH"
     "\014DEBUGMSR"
     "\015NPIEP"
     "\016HVDIS");

 FUNC_1(VAR_8, VAR_18);
 VAR_15 = VAR_18[0];
 if (VAR_11)
  FUNC_2("  Recommends: %08x %08x\n", VAR_18[0], VAR_18[1]);

 FUNC_1(VAR_6, VAR_18);
 if (VAR_11) {
  FUNC_2("  Limits: Vcpu:%d Lcpu:%d Int:%d\n",
      VAR_18[0], VAR_18[1], VAR_18[2]);
 }

 if (VAR_19 >= VAR_3) {
  FUNC_1(VAR_3, VAR_18);
  if (VAR_11) {
   FUNC_2("  HW Features: %08x, AMD: %08x\n",
       VAR_18[0], VAR_18[3]);
  }
 }

 return (1);
}
