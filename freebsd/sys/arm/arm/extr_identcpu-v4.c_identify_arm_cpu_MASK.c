
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_4__ {char* class_name; } ;
struct TYPE_3__ {size_t cpuid; size_t cpu_class; char* cpu_name; char** cpu_steppings; } ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 size_t FUNC_0 () ;
 size_t FUNC_1 () ;
 size_t VAR_21 ;
 TYPE_2__* VAR_22 ;
 TYPE_1__* VAR_23 ;
 int FUNC_2 (size_t,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int ) ;
 char** VAR_24 ;

void
FUNC_5(void)
{
 u_int VAR_25, VAR_26;
 int VAR_27;

 VAR_26 = FUNC_1();
 VAR_25 = FUNC_0();

 if (VAR_25 == 0) {
  FUNC_3("Processor failed probe - no CPU ID\n");
  return;
 }

 for (VAR_27 = 0; VAR_23[VAR_27].cpuid != 0; VAR_27++)
  if (VAR_23[VAR_27].cpuid == (VAR_25 & VAR_6)) {
   VAR_21 = VAR_23[VAR_27].cpu_class;
   FUNC_3("CPU: %s %s (%s core)\n",
       VAR_23[VAR_27].cpu_name,
       VAR_23[VAR_27].cpu_steppings[VAR_25 &
       VAR_7],
       VAR_22[VAR_21].class_name);
   break;
  }
 if (VAR_23[VAR_27].cpuid == 0)
  FUNC_3("unknown CPU (ID = 0x%x)\n", VAR_25);

 FUNC_3(" ");

 if (VAR_26 & VAR_0)
  FUNC_3(" Big-endian");
 else
  FUNC_3(" Little-endian");

 switch (VAR_21) {
 case 130:
 case 131:
 case 132:
 case 134:
 case 133:
 case 128:
 case 129:
  FUNC_2(VAR_26 & VAR_2, "DC");
  FUNC_2(VAR_26 & VAR_3, "IC");
  break;
 default:
  break;
 }

 FUNC_2(VAR_26 & VAR_5, "WB");
 if (VAR_26 & VAR_4)
  FUNC_3(" LABT");
 else
  FUNC_3(" EABT");

 FUNC_2(VAR_26 & VAR_1, "branch prediction");
 FUNC_3("\n");


 if (VAR_18 == 0 && VAR_15 == 0)
  return;

 if (VAR_14) {
  FUNC_3("  %dKB/%dB %d-way %s unified cache\n",
      VAR_16 / 1024,
      VAR_15, VAR_17,
      VAR_24[VAR_13]);
 } else {
  FUNC_3("  %dKB/%dB %d-way instruction cache\n",
      VAR_19 / 1024,
      VAR_18, VAR_20);
  FUNC_3("  %dKB/%dB %d-way %s data cache\n",
      VAR_16 / 1024,
      VAR_15, VAR_17,
      VAR_24[VAR_13]);
 }
}
