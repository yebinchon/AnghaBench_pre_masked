
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt_info {char const* outname; long long boot_cpuid_phys; int dtsflags; int dt; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char const* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (char*,...) ;
 struct dt_info* FUNC_1 (char const*) ;
 struct dt_info* FUNC_2 (char const*) ;
 struct dt_info* FUNC_3 (char const*) ;
 int FUNC_4 (int *,struct dt_info*,int) ;
 int FUNC_5 (int *,struct dt_info*,int) ;
 int FUNC_6 (int *,struct dt_info*) ;
 int VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int ,char*) ;
 void* FUNC_10 (char const*,char*) ;
 int FUNC_11 (void*,char*,char const*) ;
 int FUNC_12 (char,void*) ;
 int VAR_10 ;
 int FUNC_13 (struct dt_info*,char*) ;
 int FUNC_14 (struct dt_info*,char*,int) ;
 int FUNC_15 (struct dt_info*,char*) ;
 int VAR_11 ;
 char* FUNC_16 (char const*,char*) ;
 char* FUNC_17 (char const*,int *) ;
 int FUNC_18 (char const*) ;
 void* VAR_12 ;
 char const* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int FUNC_19 (int,int,char const*) ;
 int VAR_16 ;
 int FUNC_20 (int,struct dt_info*) ;
 scalar_t__ VAR_17 ;
 void* VAR_18 ;
 int FUNC_21 (struct dt_info*) ;
 int FUNC_22 (char const*) ;
 int * VAR_19 ;
 scalar_t__ FUNC_23 (char const*,char*) ;
 int FUNC_24 (int ) ;
 void* FUNC_25 (char const*,int *,int ) ;
 long long FUNC_26 (char const*,int *,int ) ;
 int FUNC_27 (char*) ;
 int FUNC_28 () ;
 int FUNC_29 () ;

int FUNC_30(int VAR_20, char *VAR_21[])
{
 struct dt_info *VAR_22;
 const char *VAR_23 = ((void*)0);
 const char *VAR_24 = ((void*)0);
 const char *VAR_25 = "-";
 const char *VAR_26 = ((void*)0);
 bool VAR_27 = 0, VAR_28 = 0;
 const char *VAR_29;
 int VAR_30;
 FILE *VAR_31 = ((void*)0);
 int VAR_32 = VAR_0;
 long long VAR_33 = -1;

 VAR_17 = 0;
 VAR_18 = 0;
 VAR_12 = 0;
 VAR_15 = 0;
 VAR_6 = 0;

 while ((VAR_30 = FUNC_28()) != VAR_2) {
  switch (VAR_30) {
  case 'I':
   VAR_23 = VAR_13;
   break;
  case 'O':
   VAR_24 = VAR_13;
   break;
  case 'o':
   VAR_25 = VAR_13;
   break;
  case 'V':
   VAR_32 = FUNC_25(VAR_13, ((void*)0), 0);
   break;
  case 'd':
   VAR_26 = VAR_13;
   break;
  case 'R':
   VAR_18 = FUNC_25(VAR_13, ((void*)0), 0);
   break;
  case 'S':
   VAR_12 = FUNC_25(VAR_13, ((void*)0), 0);
   break;
  case 'p':
   VAR_15 = FUNC_25(VAR_13, ((void*)0), 0);
   break;
  case 'a':
   VAR_6 = FUNC_25(VAR_13, ((void*)0), 0);
   if (!FUNC_18(VAR_6))
    FUNC_0("Invalid argument \"%d\" to -a option\n",
        VAR_6);
   break;
  case 'f':
   VAR_27 = 1;
   break;
  case 'q':
   VAR_17++;
   break;
  case 'b':
   VAR_33 = FUNC_26(VAR_13, ((void*)0), 0);
   break;
  case 'i':
   FUNC_22(VAR_13);
   break;
  case 'v':
   FUNC_29();
  case 'H':
   if (FUNC_23(VAR_13, "legacy"))
    VAR_16 = VAR_5;
   else if (FUNC_23(VAR_13, "epapr"))
    VAR_16 = VAR_4;
   else if (FUNC_23(VAR_13, "both"))
    VAR_16 = VAR_3;
   else
    FUNC_0("Invalid argument \"%s\" to -H option\n",
        VAR_13);
   break;

  case 's':
   VAR_28 = 1;
   break;

  case 'W':
   FUNC_19(1, 0, VAR_13);
   break;

  case 'E':
   FUNC_19(0, 1, VAR_13);
   break;

  case '@':
   VAR_11 = 1;
   break;
  case 'A':
   VAR_7 = 1;
   break;

  case 'h':
   FUNC_27(((void*)0));
  default:
   FUNC_27("unknown option");
  }
 }

 if (VAR_20 > (VAR_14+1))
  FUNC_27("missing files");
 else if (VAR_20 < (VAR_14+1))
  VAR_29 = "-";
 else
  VAR_29 = VAR_21[VAR_14];


 if (VAR_12 && VAR_15)
  FUNC_0("Can't set both -p and -S\n");

 if (VAR_26) {
  VAR_8 = FUNC_10(VAR_26, "w");
  if (!VAR_8)
   FUNC_0("Couldn't open dependency file %s: %s\n", VAR_26,
       FUNC_24(VAR_9));
  FUNC_11(VAR_8, "%s:", VAR_25);
 }

 if (VAR_23 == ((void*)0))
  VAR_23 = FUNC_16(VAR_29, "dts");
 if (VAR_24 == ((void*)0)) {
  VAR_24 = FUNC_17(VAR_25, ((void*)0));
  if (VAR_24 == ((void*)0)) {
   if (FUNC_23(VAR_23, "dts"))
    VAR_24 = "dtb";
   else
    VAR_24 = "dts";
  }
 }
 if (FUNC_23(VAR_23, "dts"))
  VAR_22 = FUNC_3(VAR_29);
 else if (FUNC_23(VAR_23, "fs"))
  VAR_22 = FUNC_2(VAR_29);
 else if(FUNC_23(VAR_23, "dtb"))
  VAR_22 = FUNC_1(VAR_29);
 else
  FUNC_0("Unknown input format \"%s\"\n", VAR_23);

 VAR_22->outname = VAR_25;

 if (VAR_8) {
  FUNC_12('\n', VAR_8);
  FUNC_8(VAR_8);
 }

 if (VAR_33 != -1)
  VAR_22->boot_cpuid_phys = VAR_33;

 FUNC_9(VAR_22->dt, "");
 FUNC_20(VAR_27, VAR_22);


 if (VAR_22->dtsflags & VAR_1) {
  VAR_10 = 1;
 }

 if (VAR_7)
  FUNC_14(VAR_22, "aliases", 0);

 if (VAR_11)
  FUNC_14(VAR_22, "__symbols__", 1);

 if (VAR_10) {
  FUNC_13(VAR_22, "__fixups__");
  FUNC_15(VAR_22, "__local_fixups__");
 }

 if (VAR_28)
  FUNC_21(VAR_22);

 if (FUNC_23(VAR_25, "-")) {
  VAR_31 = VAR_19;
 } else {
  VAR_31 = FUNC_10(VAR_25, "wb");
  if (! VAR_31)
   FUNC_0("Couldn't open output file %s: %s\n",
       VAR_25, FUNC_24(VAR_9));
 }

 if (FUNC_23(VAR_24, "dts")) {
  FUNC_6(VAR_31, VAR_22);
 } else if (FUNC_23(VAR_24, "dtb")) {
  FUNC_5(VAR_31, VAR_22, VAR_32);
 } else if (FUNC_23(VAR_24, "asm")) {
  FUNC_4(VAR_31, VAR_22, VAR_32);
 } else if (FUNC_23(VAR_24, "null")) {

 } else {
  FUNC_0("Unknown output format \"%s\"\n", VAR_24);
 }

 FUNC_7(0);
}
