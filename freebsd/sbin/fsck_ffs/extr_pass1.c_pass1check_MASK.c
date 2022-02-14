
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ufs2_daddr_t ;
typedef int u_long ;
struct inodesc {scalar_t__ id_blkno; scalar_t__ id_type; scalar_t__ id_number; scalar_t__ id_lbn; int id_numfrags; scalar_t__ id_level; scalar_t__ id_lballoc; scalar_t__ id_entryno; } ;
struct dups {scalar_t__ dup; struct dups* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (scalar_t__,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 struct dups* VAR_12 ;
 int FUNC_5 (int ) ;
 struct dups* VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_15 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ) ;
 scalar_t__ FUNC_9 (char*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;

int
FUNC_12(struct inodesc *VAR_18)
{
 int VAR_19 = VAR_3;
 int VAR_20, VAR_21;
 ufs2_daddr_t VAR_22 = VAR_18->id_blkno;
 struct dups *VAR_23;
 struct dups *VAR_24;

 if (VAR_18->id_type == VAR_7) {
  if (VAR_22 == VAR_0)
   return (VAR_3);
  if (VAR_18->id_number == VAR_10) {
   if (VAR_22 == FUNC_2(&VAR_17, VAR_18->id_lbn))
    return (VAR_3);
   if (VAR_22 == VAR_1) {
    VAR_22 = FUNC_2(&VAR_17, VAR_18->id_lbn);
    VAR_18->id_entryno -= VAR_18->id_numfrags;
   }
  } else {
   if (VAR_22 == VAR_1)
    return (VAR_3);
  }
 }
 if ((VAR_20 = FUNC_3(VAR_22, VAR_18->id_numfrags)) != 0) {
  FUNC_1(VAR_18->id_number, "BAD", VAR_22);
  if (VAR_9++ >= VAR_4) {
   FUNC_8("EXCESSIVE BAD BLKS I=%lu",
       (u_long)VAR_18->id_number);
   if (VAR_15)
    FUNC_7(" (SKIPPING)\n");
   else if (FUNC_9("CONTINUE") == 0) {
    FUNC_4(0);
    FUNC_5(VAR_2);
   }
   VAR_16 = 1;
   return (VAR_8);
  }
 }
 for (VAR_21 = VAR_18->id_numfrags; VAR_21 > 0; VAR_22++, VAR_21--) {
  if (VAR_20 && FUNC_3(VAR_22, 1)) {
   VAR_19 = VAR_6;
  } else if (!FUNC_11(VAR_22)) {
   VAR_14++;
   FUNC_10(VAR_22);
  } else {
   FUNC_1(VAR_18->id_number, "DUP", VAR_22);
   if (VAR_11++ >= VAR_5) {
    FUNC_8("EXCESSIVE DUP BLKS I=%lu",
     (u_long)VAR_18->id_number);
    if (VAR_15)
     FUNC_7(" (SKIPPING)\n");
    else if (FUNC_9("CONTINUE") == 0) {
     FUNC_4(0);
     FUNC_5(VAR_2);
    }
    VAR_16 = 1;
    return (VAR_8);
   }
   VAR_24 = (struct dups *)FUNC_0(sizeof(struct dups));
   if (VAR_24 == ((void*)0)) {
    FUNC_6("DUP TABLE OVERFLOW.");
    if (FUNC_9("CONTINUE") == 0) {
     FUNC_4(0);
     FUNC_5(VAR_2);
    }
    VAR_16 = 1;
    return (VAR_8);
   }
   VAR_24->dup = VAR_22;
   if (VAR_13 == ((void*)0)) {
    VAR_12 = VAR_13 = VAR_24;
    VAR_24->next = ((void*)0);
   } else {
    VAR_24->next = VAR_13->next;
    VAR_13->next = VAR_24;
   }
   for (VAR_23 = VAR_12; VAR_23 != VAR_13; VAR_23 = VAR_23->next)
    if (VAR_23->dup == VAR_22)
     break;
   if (VAR_23 == VAR_13 && VAR_23->dup != VAR_22)
    VAR_13 = VAR_24;
  }



  VAR_18->id_entryno++;
 }
 if (VAR_18->id_level == 0 && VAR_18->id_lballoc < VAR_18->id_lbn)
  VAR_18->id_lballoc = VAR_18->id_lbn;
 return (VAR_19);
}
