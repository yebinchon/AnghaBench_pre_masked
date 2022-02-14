
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct boot_info {long long boot_cpuid_phys; int dt; } ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 struct boot_info* FUNC_1 (char const*) ;
 struct boot_info* FUNC_2 (char const*) ;
 struct boot_info* FUNC_3 (char const*) ;
 int FUNC_4 (int *,struct boot_info*,int) ;
 int FUNC_5 (int *,struct boot_info*,int) ;
 int FUNC_6 (int *,struct boot_info*) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int * FUNC_9 (char const*,char*) ;
 int FUNC_10 (int ,char*,char const*,char const*,char const*) ;
 int FUNC_11 (int,char**,char*) ;
 void* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (int,struct boot_info*) ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 int FUNC_15 (int ) ;
 void* FUNC_16 (char*,int *,int ) ;
 long long FUNC_17 (char*,int *,int ) ;
 int FUNC_18 () ;

int FUNC_19(int VAR_12, char *VAR_13[])
{
 struct boot_info *VAR_14;
 const char *VAR_15 = "dts";
 const char *VAR_16 = "dts";
 const char *VAR_17 = "-";
 int VAR_18 = 0, VAR_19 = 0;
 const char *VAR_20;
 int VAR_21;
 FILE *VAR_22 = ((void*)0);
 int VAR_23 = VAR_0;
 long long VAR_24 = -1;

 VAR_8 = 0;
 VAR_9 = 0;
 VAR_4 = 0;
 VAR_7 = 0;

 while ((VAR_21 = FUNC_11(VAR_12, VAR_13, "hI:O:o:V:R:S:p:fcqb:v")) != VAR_2) {
  switch (VAR_21) {
  case 'I':
   VAR_15 = VAR_5;
   break;
  case 'O':
   VAR_16 = VAR_5;
   break;
  case 'o':
   VAR_17 = VAR_5;
   break;
  case 'V':
   VAR_23 = FUNC_16(VAR_5, ((void*)0), 0);
   break;
  case 'R':
   VAR_9 = FUNC_16(VAR_5, ((void*)0), 0);
   break;
  case 'S':
   VAR_4 = FUNC_16(VAR_5, ((void*)0), 0);
   break;
  case 'p':
   VAR_7 = FUNC_16(VAR_5, ((void*)0), 0);
   break;
  case 'f':
   VAR_18 = 1;
   break;
  case 'c':
   VAR_19 = 1;
   break;
  case 'q':
   VAR_8++;
   break;
  case 'b':
   VAR_24 = FUNC_17(VAR_5, ((void*)0), 0);
   break;
  case 'v':
   FUNC_12("Version: %s\n", VAR_1);
   FUNC_7(0);
  case 'h':
  default:
   FUNC_18();
  }
 }

 if (VAR_12 > (VAR_6+1))
  FUNC_18();
 else if (VAR_12 < (VAR_6+1))
  VAR_20 = "-";
 else
  VAR_20 = VAR_13[VAR_6];


 if (VAR_4 && VAR_7)
  FUNC_0("Can't set both -p and -S\n");

 FUNC_10(VAR_10, "DTC: %s->%s  on file \"%s\"\n",
  VAR_15, VAR_16, VAR_20);

 if (FUNC_14(VAR_15, "dts"))
  VAR_14 = FUNC_3(VAR_20);
 else if (FUNC_14(VAR_15, "fs"))
  VAR_14 = FUNC_2(VAR_20);
 else if(FUNC_14(VAR_15, "dtb"))
  VAR_14 = FUNC_1(VAR_20);
 else
  FUNC_0("Unknown input format \"%s\"\n", VAR_15);

 if (VAR_24 != -1)
  VAR_14->boot_cpuid_phys = VAR_24;

 FUNC_8(VAR_14->dt, "");
 FUNC_13(VAR_18, VAR_14);


 if (FUNC_14(VAR_17, "-")) {
  VAR_22 = VAR_11;
 } else {
  VAR_22 = FUNC_9(VAR_17, "w");
  if (! VAR_22)
   FUNC_0("Couldn't open output file %s: %s\n",
       VAR_17, FUNC_15(VAR_3));
 }

 if (FUNC_14(VAR_16, "dts")) {
  FUNC_6(VAR_22, VAR_14);
 } else if (FUNC_14(VAR_16, "dtb")) {
  FUNC_5(VAR_22, VAR_14, VAR_23);
 } else if (FUNC_14(VAR_16, "asm")) {
  FUNC_4(VAR_22, VAR_14, VAR_23);
 } else if (FUNC_14(VAR_16, "null")) {

 } else {
  FUNC_0("Unknown output format \"%s\"\n", VAR_16);
 }

 FUNC_7(0);
}
