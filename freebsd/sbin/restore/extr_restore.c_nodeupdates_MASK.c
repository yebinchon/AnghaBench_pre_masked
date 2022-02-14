
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uintmax_t ;
struct entry {int e_type; int e_flags; struct entry* e_next; int e_ino; struct entry* e_links; } ;
typedef int ino_t ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct entry* FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct entry*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*,...) ;
 int VAR_9 ;
 int FUNC_5 (struct entry*) ;
 int FUNC_6 (int ,char*,char*,char*) ;
 int FUNC_7 (struct entry*) ;
 char* FUNC_8 (int) ;
 struct entry* FUNC_9 (int ) ;
 struct entry* FUNC_10 (char*) ;
 int FUNC_11 (struct entry*) ;
 int FUNC_12 (struct entry*,char*) ;
 char* FUNC_13 (struct entry*) ;
 int FUNC_14 (struct entry*) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (struct entry*) ;
 struct entry* VAR_10 ;
 int FUNC_17 (char*,char*) ;
 int VAR_11 ;
 int VAR_12 ;

long
FUNC_18(char *VAR_13, ino_t VAR_14, int VAR_15)
{
 struct entry *VAR_16, *VAR_17, *VAR_18;
 long VAR_19 = VAR_2;
 int VAR_20 = 0;
 int VAR_21 = 0;
 if (FUNC_0(VAR_14, VAR_9))
  VAR_21 |= 0x1;



 VAR_17 = FUNC_10(VAR_13);
 if (VAR_17 != ((void*)0)) {
  VAR_21 |= 0x4;
  VAR_18 = FUNC_9(VAR_17->e_ino);
  if (VAR_18 == ((void*)0))
   FUNC_15("corrupted symbol table\n");
  if (VAR_18 != VAR_17)
   VAR_20 = VAR_5;
 }




 VAR_18 = FUNC_9(VAR_14);
 if (VAR_18 != ((void*)0)) {
  VAR_21 |= 0x2;
  for (VAR_16 = VAR_18->e_links; VAR_16 != ((void*)0); VAR_16 = VAR_16->e_links) {
   if (VAR_16 == VAR_17) {
    VAR_18 = VAR_16;
    break;
   }
  }
 }
 if (((VAR_21 & (0x2|0x4)) == (0x2|0x4)) && VAR_18 != VAR_17) {
  if (VAR_20 == VAR_5) {
   FUNC_16(VAR_17);
   FUNC_7(VAR_17);
  } else {
   FUNC_4(VAR_12, "name/inode conflict, mktempname %s\n",
    FUNC_13(VAR_17));
   FUNC_11(VAR_17);
  }
  VAR_17 = ((void*)0);
  VAR_21 &= ~0x4;
 }
 if ((VAR_21 & 0x1) &&
   (((VAR_21 & 0x2) && VAR_18->e_type != VAR_15) ||
    ((VAR_21 & 0x4) && VAR_17->e_type != VAR_15)))
  VAR_21 |= 0x8;







 switch (VAR_21) {







 case 0x2|0x4:
  VAR_18->e_flags |= VAR_3;
  FUNC_4(VAR_12, "[%s] %s: %s\n", FUNC_8(VAR_21), VAR_13,
   FUNC_5(VAR_18));
  break;
 case 0x1|0x4:
 case 0x1|0x4|0x8:
  if (VAR_20 == VAR_5) {
   FUNC_16(VAR_17);
   FUNC_7(VAR_17);
  } else {
   FUNC_11(VAR_17);
  }
 case 0x1:
  VAR_16 = FUNC_1(VAR_13, VAR_14, VAR_15);
  if (VAR_15 == VAR_7)
   FUNC_14(VAR_16);
  VAR_16->e_flags |= VAR_6|VAR_3;
  FUNC_4(VAR_12, "[%s] %s: %s\n", FUNC_8(VAR_21), VAR_13,
   FUNC_5(VAR_16));
  break;
 case 0x1|0x2:
  if (VAR_15 == VAR_4 && (VAR_18->e_flags & VAR_3) == 0)
   VAR_18->e_flags |= VAR_0;

 case 0x2:
  if ((VAR_18->e_flags & VAR_3) == 0) {
   FUNC_17(FUNC_13(VAR_18), VAR_13);
   FUNC_12(VAR_18, VAR_13);
   VAR_18->e_flags |= VAR_3;
   FUNC_4(VAR_12, "[%s] %s: %s\n", FUNC_8(VAR_21), VAR_13,
    FUNC_5(VAR_18));
   break;
  }
  if (VAR_18->e_type == VAR_7) {
   VAR_19 = VAR_1;
   FUNC_6(VAR_11,
    "deleted hard link %s to directory %s\n",
    VAR_13, FUNC_13(VAR_18));
   break;
  }
  VAR_16 = FUNC_1(VAR_13, VAR_14, VAR_15|VAR_5);
  VAR_16->e_flags |= VAR_6;
  FUNC_4(VAR_12, "[%s] %s: %s|LINK\n", FUNC_8(VAR_21), VAR_13,
   FUNC_5(VAR_16));
  break;






 case 0x1|0x2|0x4:
  if (VAR_20 == VAR_5) {
   FUNC_16(VAR_17);
   FUNC_7(VAR_17);
   VAR_16 = FUNC_1(VAR_13, VAR_14, VAR_15|VAR_5);
   if (VAR_15 == VAR_7)
           FUNC_14(VAR_16);
   VAR_16->e_flags |= VAR_6|VAR_3;
   FUNC_4(VAR_12, "[%s] %s: %s|LINK\n", FUNC_8(VAR_21), VAR_13,
    FUNC_5(VAR_16));
   break;
  }
  if (VAR_15 == VAR_4 && VAR_20 != VAR_5)
   VAR_17->e_flags |= VAR_0;
  VAR_17->e_flags |= VAR_3;
  FUNC_4(VAR_12, "[%s] %s: %s\n", FUNC_8(VAR_21), VAR_13,
   FUNC_5(VAR_17));
  break;
 case 0x1|0x2|0x8:
 case 0x1|0x2|0x4|0x8:
  if (VAR_18->e_flags & VAR_3) {
   FUNC_2(VAR_18, "cannot KEEP and change modes");
   break;
  }
  if (VAR_18->e_type == VAR_4) {

   for (VAR_18 = FUNC_9(VAR_14); VAR_18 != ((void*)0); VAR_18 = VAR_18->e_links) {
    if (VAR_18->e_type != VAR_4)
     FUNC_2(VAR_18, "NODE and LEAF links to same inode");
    FUNC_16(VAR_18);
    FUNC_7(VAR_18);
   }
   VAR_18 = FUNC_1(VAR_13, VAR_14, VAR_15);
   FUNC_14(VAR_18);
  } else {

   if ((VAR_18->e_flags & VAR_8) == 0)
    FUNC_11(VAR_18);
   FUNC_3(VAR_18->e_ino);
   VAR_18->e_next = VAR_10;
   VAR_10 = VAR_18;
   VAR_18 = FUNC_1(VAR_13, VAR_14, VAR_15);
  }
  VAR_18->e_flags |= VAR_6|VAR_3;
  FUNC_4(VAR_12, "[%s] %s: %s\n", FUNC_8(VAR_21), VAR_13,
   FUNC_5(VAR_18));
  break;





 case 0x4:
  FUNC_4(VAR_12, "[%s] %s: Extraneous name\n", FUNC_8(VAR_21),
   VAR_13);
  VAR_19 = VAR_1;
  break;
 case 0:
  FUNC_6(VAR_11, "%s: (inode %s) not found on tape\n",
      VAR_13, (uintmax_t)VAR_14);
  break;





 case 0x2|0x4|0x8:
 case 0x4|0x8:
 case 0x2|0x8:
  FUNC_6(VAR_11, "[%s] %s: inconsistent state\n", FUNC_8(VAR_21),
   VAR_13);
  break;




 case 0x1|0x8:
 case 0x8:
 default:
  FUNC_15("[%s] %s: impossible state\n", FUNC_8(VAR_21), VAR_13);
  break;
 }
 return (VAR_19);
}
