
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
typedef int uintmax_t ;
struct inoinfo {scalar_t__ i_parent; scalar_t__ i_dotdot; } ;
struct inodesc {int id_entryno; scalar_t__ id_number; struct direct* id_dirp; } ;
struct direct {scalar_t__ d_ino; char* d_name; scalar_t__ d_type; int d_namlen; int d_reclen; } ;
typedef void* ino_t ;
typedef scalar_t__ dirp ;
struct TYPE_5__ {int ino_linkcnt; int ino_state; scalar_t__ ino_type; } ;
struct TYPE_4__ {scalar_t__ value; } ;


 int VAR_0 ;


 int FUNC_0 (union dinode*,int ) ;
 int FUNC_1 (int ,struct direct*) ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (scalar_t__,char*) ;
 int VAR_13 ;
 int FUNC_3 (int ,char*,int,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,char const*) ;
 int FUNC_5 (struct inoinfo*,struct inodesc*) ;
 struct inoinfo* FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,scalar_t__,scalar_t__) ;
 union dinode* FUNC_8 (scalar_t__) ;
 TYPE_2__* FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 int FUNC_10 (struct direct*,struct direct*,size_t) ;
 int FUNC_11 (struct direct*,int ,size_t) ;
 int FUNC_12 (char*,...) ;
 int VAR_15 ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*,char*,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (char*,char*) ;
 int FUNC_18 (char*,char*) ;
 char* FUNC_19 (int ) ;
 int FUNC_20 (char*,int ,int ,TYPE_1__*,int) ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_21(struct inodesc *VAR_17)
{
 struct direct *VAR_18 = VAR_17->id_dirp;
 char VAR_19[VAR_7 + 1];
 struct inoinfo *VAR_20;
 int VAR_21, VAR_22, VAR_23 = 0;
 union dinode *VAR_24;
 const char *VAR_25;
 struct direct VAR_26;




 if (VAR_18->d_ino > VAR_14)
  goto chk2;
 if (VAR_17->id_entryno != 0)
  goto chk1;
 if (VAR_18->d_ino != 0 && FUNC_17(VAR_18->d_name, ".") == 0) {
  if (VAR_18->d_ino != VAR_17->id_number) {
   FUNC_2(VAR_17->id_number, "BAD INODE NUMBER FOR '.'");
   VAR_18->d_ino = VAR_17->id_number;
   if (FUNC_15("FIX") == 1)
    VAR_23 |= VAR_0;
  }
  if (VAR_18->d_type != VAR_1) {
   FUNC_2(VAR_17->id_number, "BAD TYPE VALUE FOR '.'");
   VAR_18->d_type = VAR_1;
   if (FUNC_15("FIX") == 1)
    VAR_23 |= VAR_0;
  }
  goto chk1;
 }
 FUNC_2(VAR_17->id_number, "MISSING '.'");
 VAR_26.d_ino = VAR_17->id_number;
 VAR_26.d_type = VAR_1;
 VAR_26.d_namlen = 1;
 (void)FUNC_18(VAR_26.d_name, ".");
 VAR_22 = FUNC_1(0, &VAR_26);
 if (VAR_18->d_ino != 0 && FUNC_17(VAR_18->d_name, "..") != 0) {
  FUNC_12("CANNOT FIX, FIRST ENTRY IN DIRECTORY CONTAINS %s\n",
   VAR_18->d_name);
 } else if (VAR_18->d_reclen < VAR_22) {
  FUNC_12("CANNOT FIX, INSUFFICIENT SPACE TO ADD '.'\n");
 } else if (VAR_18->d_reclen < 2 * VAR_22) {
  VAR_26.d_reclen = VAR_18->d_reclen;
  FUNC_10(VAR_18, &VAR_26, (size_t)VAR_22);
  if (FUNC_15("FIX") == 1)
   VAR_23 |= VAR_0;
 } else {
  VAR_21 = VAR_18->d_reclen - VAR_22;
  VAR_26.d_reclen = VAR_22;
  FUNC_10(VAR_18, &VAR_26, (size_t)VAR_22);
  VAR_17->id_entryno++;
  FUNC_9(VAR_18->d_ino)->ino_linkcnt--;
  VAR_18 = (struct direct *)((char *)(VAR_18) + VAR_22);
  FUNC_11(VAR_18, 0, (size_t)VAR_21);
  VAR_18->d_reclen = VAR_21;
  if (FUNC_15("FIX") == 1)
   VAR_23 |= VAR_0;
 }
chk1:
 if (VAR_17->id_entryno > 1)
  goto chk2;
 VAR_20 = FUNC_6(VAR_17->id_number);
 VAR_26.d_ino = VAR_20->i_parent;
 VAR_26.d_type = VAR_1;
 VAR_26.d_namlen = 2;
 (void)FUNC_18(VAR_26.d_name, "..");
 VAR_22 = FUNC_1(0, &VAR_26);
 if (VAR_17->id_entryno == 0) {
  VAR_21 = FUNC_1(0, VAR_18);
  if (VAR_18->d_reclen < VAR_21 + VAR_22)
   goto chk2;
  VAR_26.d_reclen = VAR_18->d_reclen - VAR_21;
  VAR_18->d_reclen = VAR_21;
  VAR_17->id_entryno++;
  FUNC_9(VAR_18->d_ino)->ino_linkcnt--;
  VAR_18 = (struct direct *)((char *)(VAR_18) + VAR_21);
  FUNC_11(VAR_18, 0, (size_t)VAR_26.d_reclen);
  VAR_18->d_reclen = VAR_26.d_reclen;
 }
 if (VAR_18->d_ino != 0 && FUNC_17(VAR_18->d_name, "..") == 0) {
  VAR_20->i_dotdot = VAR_18->d_ino;
  if (VAR_18->d_type != VAR_1) {
   FUNC_2(VAR_17->id_number, "BAD TYPE VALUE FOR '..'");
   VAR_18->d_type = VAR_1;
   if (FUNC_15("FIX") == 1)
    VAR_23 |= VAR_0;
  }
  goto chk2;
 }
 if (VAR_18->d_ino != 0 && FUNC_17(VAR_18->d_name, ".") != 0) {
  FUNC_4(VAR_20->i_parent, VAR_17->id_number, "MISSING '..'");
  FUNC_12("CANNOT FIX, SECOND ENTRY IN DIRECTORY CONTAINS %s\n",
   VAR_18->d_name);
  VAR_20->i_dotdot = (ino_t)-1;
 } else if (VAR_18->d_reclen < VAR_22) {
  FUNC_4(VAR_20->i_parent, VAR_17->id_number, "MISSING '..'");
  FUNC_12("CANNOT FIX, INSUFFICIENT SPACE TO ADD '..'\n");
  VAR_20->i_dotdot = (ino_t)-1;
 } else if (VAR_20->i_parent != 0) {



  VAR_20->i_dotdot = VAR_20->i_parent;
  FUNC_4(VAR_20->i_parent, VAR_17->id_number, "MISSING '..'");
  VAR_26.d_reclen = VAR_18->d_reclen;
  FUNC_10(VAR_18, &VAR_26, (size_t)VAR_22);
  if (FUNC_15("FIX") == 1)
   VAR_23 |= VAR_0;
 }
 VAR_17->id_entryno++;
 if (VAR_18->d_ino != 0)
  FUNC_9(VAR_18->d_ino)->ino_linkcnt--;
 return (VAR_23|VAR_6);
chk2:
 if (VAR_18->d_ino == 0)
  return (VAR_23|VAR_6);
 if (VAR_18->d_namlen <= 2 &&
     VAR_18->d_name[0] == '.' &&
     VAR_17->id_entryno >= 2) {
  if (VAR_18->d_namlen == 1) {
   FUNC_2(VAR_17->id_number, "EXTRA '.' ENTRY");
   VAR_18->d_ino = 0;
   if (FUNC_15("FIX") == 1)
    VAR_23 |= VAR_0;
   return (VAR_6 | VAR_23);
  }
  if (VAR_18->d_name[1] == '.') {
   FUNC_2(VAR_17->id_number, "EXTRA '..' ENTRY");
   VAR_18->d_ino = 0;
   if (FUNC_15("FIX") == 1)
    VAR_23 |= VAR_0;
   return (VAR_6 | VAR_23);
  }
 }
 VAR_17->id_entryno++;
 VAR_21 = 0;
 if (VAR_18->d_ino > VAR_14) {
  FUNC_4(VAR_17->id_number, VAR_18->d_ino, "I OUT OF RANGE");
  VAR_21 = FUNC_15("REMOVE");
 } else if (((VAR_18->d_ino == VAR_8 && VAR_18->d_type != VAR_2) ||
      (VAR_18->d_ino != VAR_8 && VAR_18->d_type == VAR_2))) {
  FUNC_4(VAR_17->id_number, VAR_18->d_ino, "BAD WHITEOUT ENTRY");
  VAR_18->d_ino = VAR_8;
  VAR_18->d_type = VAR_2;
  if (FUNC_15("FIX") == 1)
   VAR_23 |= VAR_0;
 } else {
again:
  switch (FUNC_9(VAR_18->d_ino)->ino_state) {
  case 128:
   if (VAR_17->id_entryno <= 2)
    break;
   FUNC_4(VAR_17->id_number, VAR_18->d_ino, "UNALLOCATED");
   VAR_21 = FUNC_15("REMOVE");
   break;

  case 135:
  case 131:
   if (VAR_17->id_entryno <= 2)
    break;
   if (FUNC_9(VAR_18->d_ino)->ino_state == 131)
    VAR_25 = "DUP/BAD";
   else if (!VAR_15 && !VAR_16)
    VAR_25 = "ZERO LENGTH DIRECTORY";
   else if (VAR_10 == 0) {
    VAR_21 = 1;
    break;
   } else {
    FUNC_7(VAR_19, VAR_17->id_number,
        VAR_18->d_ino);
    FUNC_14("ZERO LENGTH DIRECTORY %s I=%ju",
        VAR_19, (uintmax_t)VAR_18->d_ino);





    VAR_9.value = VAR_17->id_number;
    if (FUNC_20("vfs.ffs.setcwd", 0, 0,
        &VAR_9, sizeof VAR_9) == -1) {

     FUNC_13(" (IGNORED)\n");
     VAR_21 = 1;
     break;
    }
    if (FUNC_16(VAR_18->d_name) == -1) {
     FUNC_13(" (REMOVAL FAILED: %s)\n",
         FUNC_19(VAR_13));
     VAR_21 = 1;
     break;
    }

    FUNC_9(VAR_17->id_number)->ino_linkcnt--;
    FUNC_13(" (REMOVED)\n");
    break;
   }
   FUNC_4(VAR_17->id_number, VAR_18->d_ino, VAR_25);
   if ((VAR_21 = FUNC_15("REMOVE")) == 1)
    break;
   VAR_24 = FUNC_8(VAR_18->d_ino);
   FUNC_9(VAR_18->d_ino)->ino_state =
      (FUNC_0(VAR_24, VAR_11) & VAR_5) == VAR_4 ? 133 : 130;
   FUNC_9(VAR_18->d_ino)->ino_linkcnt = FUNC_0(VAR_24, VAR_12);
   goto again;

  case 133:
  case 132:
   if (FUNC_9(VAR_17->id_number)->ino_state == 134)
    FUNC_9(VAR_18->d_ino)->ino_state = 134;


  case 134:
   VAR_20 = FUNC_6(VAR_18->d_ino);
   if (VAR_17->id_entryno > 2) {
    if (VAR_20->i_parent == 0)
     VAR_20->i_parent = VAR_17->id_number;
    else if ((VAR_21 = FUNC_5(VAR_20, VAR_17)) == 1)
     break;
   }


  case 130:
  case 129:
   if (VAR_18->d_type != FUNC_9(VAR_18->d_ino)->ino_type) {
    FUNC_4(VAR_17->id_number, VAR_18->d_ino,
        "BAD TYPE VALUE");
    VAR_18->d_type = FUNC_9(VAR_18->d_ino)->ino_type;
    if (FUNC_15("FIX") == 1)
     VAR_23 |= VAR_0;
   }
   FUNC_9(VAR_18->d_ino)->ino_linkcnt--;
   break;

  default:
   FUNC_3(VAR_3, "BAD STATE %d FOR INODE I=%ju",
       FUNC_9(VAR_18->d_ino)->ino_state,
       (uintmax_t)VAR_18->d_ino);
  }
 }
 if (VAR_21 == 0)
  return (VAR_23|VAR_6);
 VAR_18->d_ino = 0;
 return (VAR_23|VAR_6|VAR_0);
}
