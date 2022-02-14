
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fatEntry {int dummy; } ;
struct bootblock {scalar_t__ ValidFat; int bpbFATs; int NumBad; int NumFree; int ClusterSize; int NumFiles; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int,struct bootblock*) ;
 int FUNC_2 (struct bootblock*,struct fatEntry*) ;
 int FUNC_3 (int,struct bootblock*,struct fatEntry*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct bootblock*,struct fatEntry*,struct fatEntry*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (struct fatEntry*) ;
 int FUNC_8 (int,struct bootblock*,struct fatEntry*) ;
 int FUNC_9 (char const*,int ,int ) ;
 int FUNC_10 (char*,char const*) ;
 scalar_t__ VAR_9 ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*,...) ;
 int VAR_10 ;
 int FUNC_13 (int,struct bootblock*) ;
 int FUNC_14 (int,struct bootblock*,int,struct fatEntry**) ;
 int FUNC_15 (struct bootblock*,struct fatEntry*) ;
 scalar_t__ VAR_11 ;
 int FUNC_16 (int,struct bootblock*,struct fatEntry*,int) ;

int
FUNC_17(const char *VAR_12)
{
 int VAR_13;
 struct bootblock VAR_14;
 struct fatEntry *VAR_15 = ((void*)0);
 int VAR_16=0;
 u_int VAR_17;
 int VAR_18 = 0;
 int VAR_19 = 8;

 VAR_10 = VAR_8;
 if (!VAR_9)
  FUNC_11("** %s", VAR_12);

 VAR_13 = FUNC_9(VAR_12, VAR_10 ? VAR_6 : VAR_7, 0);
 if (VAR_13 < 0 && !VAR_10) {
  VAR_13 = FUNC_9(VAR_12, VAR_6, 0);
  if (VAR_13 >= 0)
   FUNC_12(" (NO WRITE)\n");
  else if (!VAR_9)
   FUNC_11("\n");
  VAR_10 = 1;
 } else if (!VAR_9)
  FUNC_11("\n");

 if (VAR_13 < 0) {
  FUNC_10("Can't open `%s'", VAR_12);
  FUNC_11("\n");
  return 8;
 }

 if (FUNC_13(VAR_13, &VAR_14) == VAR_3) {
  FUNC_4(VAR_13);
  FUNC_11("\n");
  return 8;
 }

 if (VAR_11 && VAR_9 && FUNC_1(VAR_13, &VAR_14)) {
  FUNC_11("%s: ", VAR_12);
  FUNC_11("FILESYSTEM CLEAN; SKIPPING CHECKS\n");
  VAR_19 = 0;
  goto out;
 }

 if (!VAR_9) {
  if (VAR_14.ValidFat < 0)
   FUNC_11("** Phase 1 - Read and Compare FATs\n");
  else
   FUNC_11("** Phase 1 - Read FAT\n");
 }

 VAR_18 |= FUNC_14(VAR_13, &VAR_14, VAR_14.ValidFat >= 0 ? VAR_14.ValidFat : 0, &VAR_15);
 if (VAR_18 & VAR_3) {
  FUNC_4(VAR_13);
  return 8;
 }

 if (VAR_14.ValidFat < 0)
  for (VAR_17 = 1; VAR_17 < VAR_14.bpbFATs; VAR_17++) {
   struct fatEntry *VAR_20;

   VAR_18 |= FUNC_14(VAR_13, &VAR_14, VAR_17, &VAR_20);

   if (VAR_18 & VAR_3)
    goto out;

   VAR_18 |= FUNC_5(&VAR_14, VAR_15, VAR_20, VAR_17);
   FUNC_7(VAR_20);
   if (VAR_18 & VAR_3)
    goto out;
  }

 if (!VAR_9)
  FUNC_11("** Phase 2 - Check Cluster Chains\n");

 VAR_18 |= FUNC_2(&VAR_14, VAR_15);
 if (VAR_18 & VAR_3)
  goto out;


 if (!VAR_9)
  FUNC_11("** Phase 3 - Checking Directories\n");

 VAR_18 |= FUNC_15(&VAR_14, VAR_15);
 VAR_16 = 1;
 if (VAR_18 & VAR_3)
  goto out;


 VAR_18 |= FUNC_8(VAR_13, &VAR_14, VAR_15);
 if (VAR_18 & VAR_3)
  goto out;

 if (!VAR_9)
  FUNC_11("** Phase 4 - Checking for Lost Files\n");

 VAR_18 |= FUNC_3(VAR_13, &VAR_14, VAR_15);
 if (VAR_18 & VAR_3)
  goto out;


 if (VAR_18 & (VAR_4|VAR_5)) {
  if (FUNC_0(1, "Update FATs")) {
   VAR_18 |= FUNC_16(VAR_13, &VAR_14, VAR_15, VAR_18 & VAR_5);
   if (VAR_18 & VAR_3)
    goto out;
  } else
   VAR_18 |= VAR_2;
 }

 if (VAR_14.NumBad)
  FUNC_12("%d files, %d free (%d clusters), %d bad (%d clusters)\n",
        VAR_14.NumFiles,
        VAR_14.NumFree * VAR_14.ClusterSize / 1024, VAR_14.NumFree,
        VAR_14.NumBad * VAR_14.ClusterSize / 1024, VAR_14.NumBad);
 else
  FUNC_12("%d files, %d free (%d clusters)\n",
        VAR_14.NumFiles,
        VAR_14.NumFree * VAR_14.ClusterSize / 1024, VAR_14.NumFree);

 if (VAR_18 && (VAR_18 & VAR_2) == 0) {
  if (VAR_18 & VAR_1) {
   if (FUNC_0(1, "MARK FILE SYSTEM CLEAN") == 0)
    VAR_18 &= ~VAR_1;

   if (VAR_18 & VAR_1) {
    FUNC_12("MARKING FILE SYSTEM CLEAN\n");
    VAR_18 |= FUNC_16(VAR_13, &VAR_14, VAR_15, 1);
   } else {
    FUNC_12("\n***** FILE SYSTEM IS LEFT MARKED AS DIRTY *****\n");
    VAR_18 |= VAR_2;
   }
  }
 }

 if (VAR_18 & (VAR_3 | VAR_2))
  goto out;

 VAR_19 = 0;

    out:
 if (VAR_16)
  FUNC_6();
 FUNC_7(VAR_15);
 FUNC_4(VAR_13);

 if (VAR_18 & (VAR_4|VAR_0))
  FUNC_12("\n***** FILE SYSTEM WAS MODIFIED *****\n");

 return VAR_19;
}
