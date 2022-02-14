
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
typedef char* u_long ;
struct inodesc {scalar_t__ id_parent; scalar_t__ id_number; int id_func; int id_type; int id_name; } ;
typedef scalar_t__ ino_t ;
struct TYPE_2__ {scalar_t__ ino_state; scalar_t__ ino_linkcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (union dinode*,int ) ;
 int FUNC_1 (union dinode*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct inodesc*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,char*,scalar_t__) ;
 int FUNC_5 (union dinode*,struct inodesc*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 union dinode* FUNC_7 (scalar_t__) ;
 int FUNC_8 (union dinode*) ;
 TYPE_1__* FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 char* VAR_16 ;
 int FUNC_10 (char*,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__,char*) ;
 int FUNC_12 (struct inodesc*,int ,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_13 (char*) ;
 scalar_t__ VAR_19 ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (scalar_t__,union dinode*) ;
 int FUNC_16 (char*,...) ;
 scalar_t__ FUNC_17 (char*) ;
 int FUNC_18 (char*) ;

int
FUNC_19(ino_t VAR_20, ino_t VAR_21, char *VAR_22)
{
 union dinode *VAR_23;
 int VAR_24;
 ino_t VAR_25;
 struct inodesc VAR_26;
 char VAR_27[VAR_2];

 FUNC_12(&VAR_26, 0, sizeof(struct inodesc));
 VAR_23 = FUNC_7(VAR_20);
 VAR_24 = (FUNC_0(VAR_23, VAR_10) & VAR_7) == VAR_6;
 FUNC_16("UNREF %s ", VAR_24 ? "DIR" : "FILE");
 FUNC_15(VAR_20, VAR_23);
 FUNC_14("\n");
 if (VAR_19 && FUNC_0(VAR_23, VAR_12) == 0)
  return (0);
 if (VAR_9 != 0) {
  FUNC_13("FILE LINKUP IN SNAPSHOT");
  return (0);
 }
 if (VAR_19)
  FUNC_14(" (RECONNECTED)\n");
 else
  if (FUNC_17("RECONNECT") == 0)
   return (0);
 if (VAR_14 == 0) {
  VAR_23 = FUNC_7(VAR_8);
  VAR_26.id_name = FUNC_18(VAR_16);
  VAR_26.id_type = VAR_3;
  VAR_26.id_func = VAR_13;
  VAR_26.id_number = VAR_8;
  if ((FUNC_5(VAR_23, &VAR_26) & VAR_5) != 0) {
   VAR_14 = VAR_26.id_parent;
  } else {
   FUNC_16("NO lost+found DIRECTORY");
   if (VAR_19 || FUNC_17("CREATE")) {
    VAR_14 = FUNC_3(VAR_8, (ino_t)0, VAR_15);
    if (VAR_14 != 0) {
     if (FUNC_11(VAR_8, VAR_14,
         VAR_16) != 0) {
      VAR_17++;
      if (VAR_19)
       FUNC_14(" (CREATED)\n");
     } else {
      FUNC_6(VAR_14, VAR_8);
      VAR_14 = 0;
      if (VAR_19)
       FUNC_14("\n");
     }
    }
   }
  }
  if (VAR_14 == 0) {
   FUNC_13("SORRY. CANNOT CREATE lost+found DIRECTORY");
   FUNC_14("\n\n");
   return (0);
  }
 }
 VAR_23 = FUNC_7(VAR_14);
 if ((FUNC_0(VAR_23, VAR_10) & VAR_7) != VAR_6) {
  FUNC_13("lost+found IS NOT A DIRECTORY");
  if (FUNC_17("REALLOCATE") == 0)
   return (0);
  VAR_25 = VAR_14;
  if ((VAR_14 = FUNC_3(VAR_8, (ino_t)0, VAR_15)) == 0) {
   FUNC_13("SORRY. CANNOT CREATE lost+found DIRECTORY\n\n");
   return (0);
  }
  if ((FUNC_4(VAR_8, VAR_16, VAR_14) & VAR_1) == 0) {
   FUNC_13("SORRY. CANNOT CREATE lost+found DIRECTORY\n\n");
   return (0);
  }
  FUNC_8(VAR_23);
  VAR_26.id_type = VAR_0;
  VAR_26.id_func = VAR_18;
  VAR_26.id_number = VAR_25;
  FUNC_2(&VAR_26, FUNC_9(VAR_25)->ino_linkcnt + 1);
  FUNC_9(VAR_25)->ino_linkcnt = 0;
  VAR_23 = FUNC_7(VAR_14);
 }
 if (FUNC_9(VAR_14)->ino_state != VAR_4) {
  FUNC_13("SORRY. NO lost+found DIRECTORY\n\n");
  return (0);
 }
 (void)FUNC_10(VAR_27, VAR_20);
 if (FUNC_11(VAR_14, VAR_20, (VAR_22 ? VAR_22 : VAR_27)) == 0) {
  FUNC_13("SORRY. NO SPACE IN lost+found DIRECTORY");
  FUNC_14("\n\n");
  return (0);
 }
 FUNC_9(VAR_20)->ino_linkcnt--;
 if (VAR_24) {
  if ((FUNC_4(VAR_20, "..", VAR_14) & VAR_1) == 0 &&
      VAR_21 != (ino_t)-1)
   (void)FUNC_11(VAR_20, VAR_14, "..");
  VAR_23 = FUNC_7(VAR_14);
  FUNC_1(VAR_23, VAR_11, FUNC_0(VAR_23, VAR_11) + 1);
  FUNC_8(VAR_23);
  FUNC_9(VAR_14)->ino_linkcnt++;
  FUNC_16("DIR I=%lu CONNECTED. ", (u_long)VAR_20);
  if (VAR_21 != (ino_t)-1) {
   FUNC_14("PARENT WAS I=%lu\n", (u_long)VAR_21);







   FUNC_9(VAR_21)->ino_linkcnt++;
  }
  if (VAR_19 == 0)
   FUNC_14("\n");
 }
 return (1);
}
