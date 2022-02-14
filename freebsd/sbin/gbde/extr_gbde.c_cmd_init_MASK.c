
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_char ;
struct g_bde_key {unsigned int sectorsize; int flags; int sector0; int sectorN; int keyoffset; int* lsector; int* mkey; int* salt; } ;
typedef scalar_t__ ssize_t ;
typedef int properties ;
typedef unsigned int off_t ;
typedef int cbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char**,char*,int ) ;
 int FUNC_1 (struct g_bde_key*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int,int ,unsigned int*) ;
 unsigned int FUNC_8 (int,unsigned int,int ) ;
 int* FUNC_9 (unsigned int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char const*,int ) ;
 int FUNC_12 (int) ;
 char* FUNC_13 (int ,char*) ;
 int FUNC_14 (int*,unsigned int,int,int ) ;
 int FUNC_15 (int*,int) ;
 scalar_t__ FUNC_16 (char*,int,char*,char const*,char*) ;
 int VAR_9 ;
 unsigned int FUNC_17 (int*) ;
 void* FUNC_18 (char const*,char**,int ) ;
 int FUNC_19 (char*) ;
 int* VAR_10 ;
 int FUNC_20 (char*) ;
 int FUNC_21 (int,int*,unsigned int) ;

__attribute__((used)) static void
FUNC_22(struct g_bde_key *VAR_11, int VAR_12, const char *VAR_13, int VAR_14, const char *VAR_15)
{
 int VAR_16;
 u_char *VAR_17;
 unsigned VAR_18;
 uint64_t VAR_19;
 uint64_t VAR_20;
 uint64_t VAR_21;
 off_t VAR_22, VAR_23;
 unsigned VAR_24;
 const char *VAR_25;
 char *VAR_26, VAR_27[VAR_0];
 unsigned VAR_28, VAR_29;
 uint64_t VAR_30;
 properties VAR_31;

 FUNC_1(VAR_11, sizeof *VAR_11);
 if (VAR_13 != ((void*)0)) {
  VAR_16 = FUNC_11(VAR_13, VAR_5);
  if (VAR_16 < 0)
   FUNC_3(1, "%s", VAR_13);
  VAR_31 = FUNC_12(VAR_16);
  FUNC_2 (VAR_16);
 } else if (VAR_14) {

  FUNC_0(&VAR_26, "%dtemp.XXXXXXXXXX", VAR_8);
  if (VAR_26 == ((void*)0))
   FUNC_3(1, "asprintf");
  VAR_16 = FUNC_10(VAR_26);
  if (VAR_16 < 0)
   FUNC_3(1, "%s", VAR_26);
  FUNC_21(VAR_16, VAR_10, FUNC_17(VAR_10));
  FUNC_2 (VAR_16);
  VAR_25 = FUNC_6("EDITOR");
  if (VAR_25 == ((void*)0))
   VAR_25 = "vi";
  if (FUNC_16(VAR_27, sizeof(VAR_27), "%s %s\n", VAR_25, VAR_26) >=
      (ssize_t)sizeof(VAR_27)) {
   FUNC_20(VAR_26);
   FUNC_4(1, "EDITOR is too long");
  }
  FUNC_19(VAR_27);
  VAR_16 = FUNC_11(VAR_26, VAR_5);
  if (VAR_16 < 0)
   FUNC_3(1, "%s", VAR_13);
  VAR_31 = FUNC_12(VAR_16);
  FUNC_2 (VAR_16);
  FUNC_20(VAR_26);
  FUNC_5(VAR_26);
 } else {

  VAR_16 = FUNC_11(VAR_7, VAR_5);
  if (VAR_16 < 0)
   FUNC_3(1, "%s", VAR_7);
  VAR_31 = FUNC_12(VAR_16);
  FUNC_2 (VAR_16);
 }


 VAR_25 = FUNC_13(VAR_31, "sector_size");
 VAR_16 = FUNC_7(VAR_12, VAR_2, &VAR_28);
 if (VAR_25 != ((void*)0)) {
  VAR_18 = FUNC_18(VAR_25, &VAR_26, 0);
  if (!*VAR_25 || *VAR_26)
   FUNC_4(1, "sector_size not a proper number");
 } else if (VAR_16 == 0) {
  VAR_18 = VAR_28;
 } else {
  FUNC_4(1, "Missing sector_size property");
 }
 if (VAR_18 & (VAR_18 - 1))
  FUNC_4(1, "sector_size not a power of 2");
 if (VAR_18 < 512)
  FUNC_4(1, "sector_size is smaller than 512");
 VAR_17 = FUNC_9(VAR_18);
 if (VAR_17 == ((void*)0))
  FUNC_3(1, "Failed to malloc sector buffer");
 VAR_11->sectorsize = VAR_18;

 VAR_16 = FUNC_7(VAR_12, VAR_1, &VAR_22);
 if (VAR_16 == 0) {
  VAR_19 = 0;
  VAR_21 = VAR_22 / VAR_18;
  VAR_20 = VAR_21 - 1;
 } else {
  VAR_19 = 0;
  VAR_20 = 0;
  VAR_21 = 0;
 }


 VAR_25 = FUNC_13(VAR_31, "first_sector");
 if (VAR_25 != ((void*)0)) {
  VAR_19 = FUNC_18(VAR_25, &VAR_26, 0);
  if (!*VAR_25 || *VAR_26)
   FUNC_4(1, "first_sector not a proper number");
 }


 VAR_25 = FUNC_13(VAR_31, "last_sector");
 if (VAR_25 != ((void*)0)) {
  VAR_20 = FUNC_18(VAR_25, &VAR_26, 0);
  if (!*VAR_25 || *VAR_26)
   FUNC_4(1, "last_sector not a proper number");
  if (VAR_20 <= VAR_19)
   FUNC_4(1, "last_sector not larger than first_sector");
  VAR_21 = VAR_20 + 1;
 }


 VAR_25 = FUNC_13(VAR_31, "total_sectors");
 if (VAR_25 != ((void*)0)) {
  VAR_21 = FUNC_18(VAR_25, &VAR_26, 0);
  if (!*VAR_25 || *VAR_26)
   FUNC_4(1, "total_sectors not a proper number");
  if (VAR_20 == 0)
   VAR_20 = VAR_19 + VAR_21 - 1;
 }

 if (VAR_15 == ((void*)0) && VAR_19 != 0)
  FUNC_4(1, "No -L new-lockfile argument and first_sector != 0");
 else if (VAR_15 == ((void*)0)) {
  VAR_19++;
  VAR_21--;
  VAR_11->flags |= VAR_3;
 }
 VAR_11->sector0 = VAR_19 * VAR_11->sectorsize;

 if (VAR_21 != (VAR_20 - VAR_19) + 1)
  FUNC_4(1, "total_sectors disagree with first_sector and last_sector");
 if (VAR_21 == 0)
  FUNC_4(1, "missing last_sector or total_sectors");

 VAR_11->sectorN = (VAR_20 + 1) * VAR_11->sectorsize;


 FUNC_15(&VAR_30, sizeof VAR_30);
 VAR_30 %= (VAR_11->sectorN - VAR_11->sector0);
 VAR_30 &= ~(VAR_11->sectorsize - 1);
 VAR_11->keyoffset = VAR_30;


 VAR_25 = FUNC_13(VAR_31, "number_of_keys");
 if (VAR_25 != ((void*)0)) {
  VAR_24 = FUNC_18(VAR_25, &VAR_26, 0);
  if (!*VAR_25 || *VAR_26)
   FUNC_4(1, "number_of_keys not a proper number");
  if (VAR_24 < 1 || VAR_24 > VAR_4)
   FUNC_4(1, "number_of_keys out of range");
 } else {
  VAR_24 = 4;
 }
 for (VAR_28 = 0; VAR_28 < VAR_24; VAR_28++) {
  for(;;) {
   do {
    FUNC_15(&VAR_30, sizeof VAR_30);
    VAR_30 %= VAR_11->sectorN;
    VAR_30 &= ~(VAR_11->sectorsize - 1);
   } while(VAR_30 < VAR_11->sector0);
   for (VAR_29 = 0; VAR_29 < VAR_28; VAR_29++)
    if (VAR_30 == VAR_11->lsector[VAR_29])
     break;
   if (VAR_29 < VAR_28)
    continue;
   break;
  }
  VAR_11->lsector[VAR_28] = VAR_30;
 }
 for (; VAR_28 < VAR_4; VAR_28++) {
  do
   FUNC_15(&VAR_30, sizeof VAR_30);
  while (VAR_30 < VAR_11->sectorN);
  VAR_11->lsector[VAR_28] = VAR_30;
 }
 FUNC_14(VAR_11->lsector, VAR_4, sizeof VAR_11->lsector[0], VAR_9);


 if (VAR_11->flags & VAR_3) {
  VAR_23 = FUNC_8(VAR_12, 0, VAR_6);
  if (VAR_23 != 0)
   FUNC_3(1, "lseek(2) to sector 0");
  FUNC_15(VAR_17, VAR_18);
  VAR_16 = FUNC_21(VAR_12, VAR_17, VAR_18);
  if (VAR_16 != (int)VAR_18)
   FUNC_3(1, "write sector 0");
 }


 VAR_25 = FUNC_13(VAR_31, "random_flush");
 if (VAR_25 != ((void*)0)) {
  VAR_22 = VAR_19 * VAR_18;
  VAR_23 = FUNC_8(VAR_12, VAR_22, VAR_6);
  if (VAR_23 != VAR_22)
   FUNC_3(1, "lseek(2) to first_sector");
  VAR_23 = VAR_20 * VAR_18;
  while (VAR_22 <= VAR_23) {
   FUNC_15(VAR_17, VAR_18);
   VAR_16 = FUNC_21(VAR_12, VAR_17, VAR_18);
   if (VAR_16 != (int)VAR_18)
    FUNC_3(1, "write to $device_name");
   VAR_22 += VAR_18;
  }
 }

 FUNC_15(VAR_11->mkey, sizeof VAR_11->mkey);
 FUNC_15(VAR_11->salt, sizeof VAR_11->salt);

 return;
}
