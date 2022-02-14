
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_child {int function; int mwoff; int mwcnt; int spadoff; int spadcnt; int dboff; int dbcnt; int dbmask; struct ntb_child* next; int * dev; int ctx_lock; } ;
typedef int device_t ;
typedef int cfg ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,char*,int) ;
 char* FUNC_6 (int ) ;
 struct ntb_child** FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int *,struct ntb_child*) ;
 int FUNC_11 (int ) ;
 struct ntb_child* FUNC_12 (int,int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (int *,char*) ;
 int FUNC_16 (char*,int,char*,char*,int) ;
 char* FUNC_17 (char**,char*) ;
 int FUNC_18 (char*,int *,int) ;

int
FUNC_19(device_t VAR_5)
{
 struct ntb_child **VAR_6 = FUNC_7(VAR_5);
 struct ntb_child *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 char VAR_18[128] = "";
 char VAR_19[32];
 char *VAR_20, *VAR_21, *VAR_22, *VAR_23, *VAR_24;

 VAR_10 = 0;
 VAR_11 = FUNC_1(VAR_5);
 VAR_13 = 0;
 VAR_14 = FUNC_2(VAR_5);
 VAR_16 = 0;
 VAR_17 = FUNC_11(FUNC_0(VAR_5));

 FUNC_9(VAR_5, "%d memory windows, %d scratchpads, "
     "%d doorbells\n", VAR_11, VAR_14, VAR_17);

 FUNC_16(VAR_19, sizeof(VAR_19), "hint.%s.%d.config", FUNC_6(VAR_5),
     FUNC_8(VAR_5));
 FUNC_3(VAR_19, VAR_18, sizeof(VAR_18));
 VAR_20 = VAR_18;
 VAR_8 = 0;
 while ((VAR_22 = FUNC_17(&VAR_20, ",")) != ((void*)0)) {
  VAR_21 = VAR_22;
  VAR_24 = FUNC_17(&VAR_21, ":");
  if (VAR_24 != ((void*)0) && VAR_24[0] == 0)
   VAR_24 = ((void*)0);
  VAR_23 = FUNC_17(&VAR_21, ":");
  VAR_9 = (VAR_23 && VAR_23[0] != 0) ? FUNC_18(VAR_23, ((void*)0), 10) : VAR_11 - VAR_10;
  VAR_23 = FUNC_17(&VAR_21, ":");
  VAR_12 = (VAR_23 && VAR_23[0] != 0) ? FUNC_18(VAR_23, ((void*)0), 10) : VAR_14 - VAR_13;
  VAR_15 = (VAR_21 && VAR_21[0] != 0) ? FUNC_18(VAR_21, ((void*)0), 10) : VAR_17 - VAR_16;

  if (VAR_9 > VAR_11 - VAR_10 || VAR_12 > VAR_14 - VAR_13 || VAR_15 > VAR_17 - VAR_16) {
   FUNC_9(VAR_5, "Not enough resources for config\n");
   break;
  }

  VAR_7 = FUNC_12(sizeof(*VAR_7), VAR_1, VAR_2 | VAR_3);
  VAR_7->function = VAR_8;
  VAR_7->mwoff = VAR_10;
  VAR_7->mwcnt = VAR_9;
  VAR_7->spadoff = VAR_13;
  VAR_7->spadcnt = VAR_12;
  VAR_7->dboff = VAR_16;
  VAR_7->dbcnt = VAR_15;
  VAR_7->dbmask = (VAR_15 == 0) ? 0 : (0xffffffffffffffff >> (64 - VAR_15));
  FUNC_15(&VAR_7->ctx_lock, "ntb ctx");
  VAR_7->dev = FUNC_5(VAR_5, VAR_24, -1);
  if (VAR_7->dev == ((void*)0)) {
   FUNC_13(VAR_5);
   return (VAR_0);
  }
  FUNC_10(VAR_7->dev, VAR_7);
  *VAR_6 = VAR_7;
  VAR_6 = &VAR_7->next;

  if (VAR_4) {
   FUNC_9(VAR_5, "%d \"%s\":", VAR_8, VAR_24);
   if (VAR_9 > 0) {
    FUNC_14(" memory windows %d", VAR_10);
    if (VAR_9 > 1)
     FUNC_14("-%d", VAR_10 + VAR_9 - 1);
   }
   if (VAR_12 > 0) {
    FUNC_14(" scratchpads %d", VAR_13);
    if (VAR_12 > 1)
     FUNC_14("-%d", VAR_13 + VAR_12 - 1);
   }
   if (VAR_15 > 0) {
    FUNC_14(" doorbells %d", VAR_16);
    if (VAR_15 > 1)
     FUNC_14("-%d", VAR_16 + VAR_15 - 1);
   }
   FUNC_14("\n");
  }

  VAR_10 += VAR_9;
  VAR_13 += VAR_12;
  VAR_16 += VAR_15;
  VAR_8++;
 }

 FUNC_4(VAR_5);
 return (0);
}
