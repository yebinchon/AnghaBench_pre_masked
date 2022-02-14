
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_char ;
struct g_bde_softc {scalar_t__ sha2; } ;
struct g_bde_key {int sectorsize; int* lsector; int flags; int* spare; scalar_t__ keyoffset; scalar_t__ sectorN; scalar_t__ sector0; } ;
typedef int off_t ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int,int,scalar_t__) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (scalar_t__,struct g_bde_key*,int*) ;
 int FUNC_6 (scalar_t__,int,int,int*) ;
 int FUNC_7 (int,int,int ) ;
 int* FUNC_8 (int) ;
 int FUNC_9 (int*,int*,int) ;
 int FUNC_10 (char const*,int,int) ;
 int FUNC_11 (char*,int,...) ;
 int FUNC_12 (int*,int) ;
 int FUNC_13 (int,int*,int) ;
 int FUNC_14 (int,int*,int) ;

__attribute__((used)) static void
FUNC_15(struct g_bde_key *VAR_6, struct g_bde_softc *VAR_7, int VAR_8 , int VAR_9, const char *VAR_10)
{
 int VAR_11, VAR_12;
 uint64_t VAR_13[2];
 u_char VAR_14[16];
 u_char *VAR_15, *VAR_16;
 off_t VAR_17, VAR_18;

 VAR_15 = FUNC_8(VAR_6->sectorsize);





 for(;;) {
  FUNC_12(VAR_13, sizeof VAR_13);
  VAR_13[0] &= (VAR_6->sectorsize - 1);
  if (VAR_13[0] + VAR_1 > VAR_6->sectorsize)
   continue;
  break;
 }


 VAR_13[0] += (VAR_6->lsector[VAR_9] & ~(VAR_6->sectorsize - 1));
 VAR_6->lsector[VAR_9] = VAR_13[0];

 VAR_11 = FUNC_6(VAR_7->sha2, VAR_13[0], VAR_13[1], VAR_14);
 if (VAR_11)
  FUNC_3(1, "g_bde_keyloc_encrypt()");
 if (VAR_10 != ((void*)0)) {
  VAR_12 = FUNC_10(VAR_10, VAR_4 | VAR_2 | VAR_3, 0600);
  if (VAR_12 < 0)
   FUNC_2(1, "%s", VAR_10);
  FUNC_14(VAR_12, VAR_14, sizeof VAR_14);
  FUNC_0(VAR_12);
 } else if (VAR_6->flags & VAR_0) {
  VAR_18 = FUNC_7(VAR_8, 0, VAR_5);
  if (VAR_18 != 0)
   FUNC_2(1, "lseek");
  VAR_11 = FUNC_13(VAR_8, VAR_15, VAR_6->sectorsize);
  if (VAR_11 != (int)VAR_6->sectorsize)
   FUNC_2(1, "read");
  FUNC_9(VAR_15 + VAR_9 * 16, VAR_14, sizeof VAR_14);
  VAR_18 = FUNC_7(VAR_8, 0, VAR_5);
  if (VAR_18 != 0)
   FUNC_2(1, "lseek");
  VAR_11 = FUNC_14(VAR_8, VAR_15, VAR_6->sectorsize);
  if (VAR_11 != (int)VAR_6->sectorsize)
   FUNC_2(1, "write");
 } else {
  FUNC_3(1, "No -L option and no space in sector 0 for lockfile");
 }


 if (VAR_15 == ((void*)0))
  FUNC_2(1, "malloc");
 FUNC_12(VAR_15, VAR_6->sectorsize);


 FUNC_12(VAR_6->spare, sizeof(VAR_6->spare));


 VAR_16 = VAR_15 + (VAR_13[0] % VAR_6->sectorsize);
 VAR_11 = FUNC_5(VAR_7->sha2, VAR_6, VAR_16);
 if (VAR_11 < 0)
  FUNC_3(1, "programming error encoding lock");

 FUNC_1(VAR_16, VAR_1, 256, VAR_7->sha2 + 16);
 VAR_17 = VAR_6->lsector[VAR_9] & ~(VAR_6->sectorsize - 1);
 VAR_18 = FUNC_7(VAR_8, VAR_17, VAR_5);
 if (VAR_18 != VAR_17)
  FUNC_2(1, "lseek");
 VAR_11 = FUNC_14(VAR_8, VAR_15, VAR_6->sectorsize);
 if (VAR_11 != (int)VAR_6->sectorsize)
  FUNC_2(1, "write");
 FUNC_4(VAR_15);
}
