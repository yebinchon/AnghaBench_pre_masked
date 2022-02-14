
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct entry {scalar_t__ e_type; struct entry* e_next; int e_ino; struct entry* e_links; TYPE_1__* e_parent; } ;
typedef scalar_t__ ino_t ;
struct TYPE_2__ {scalar_t__ e_ino; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct entry*) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct entry*) ;
 struct entry* FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (struct entry*) ;
 int FUNC_7 (struct entry*) ;
 int FUNC_8 (struct entry*) ;
 struct entry* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int ,char*) ;

void
FUNC_10(void)
{
 struct entry *VAR_8, *VAR_9;
 ino_t VAR_10, VAR_11;

 FUNC_9(VAR_6, "Mark entries to be removed.\n");
 if ((VAR_8 = FUNC_5(VAR_2))) {
  FUNC_9(VAR_6, "Delete whiteouts\n");
  for ( ; VAR_8 != ((void*)0); VAR_8 = VAR_9) {
   VAR_9 = VAR_8->e_links;
   VAR_11 = VAR_8->e_parent->e_ino;




   if (FUNC_0(VAR_11, VAR_7) &&
       !FUNC_0(VAR_11, VAR_3))
    continue;
   FUNC_2(VAR_8);
   FUNC_4(VAR_8);
  }
 }
 for (VAR_10 = VAR_1 + 1; VAR_10 < VAR_4; VAR_10++) {
  VAR_8 = FUNC_5(VAR_10);
  if (VAR_8 == ((void*)0))
   continue;
  if (FUNC_0(VAR_10, VAR_7))
   continue;
  for ( ; VAR_8 != ((void*)0); VAR_8 = VAR_8->e_links) {
   FUNC_3(VAR_6, "%s: REMOVE\n", FUNC_7(VAR_8));
   if (VAR_8->e_type == VAR_0) {
    FUNC_8(VAR_8);
    FUNC_4(VAR_8);
   } else {
    FUNC_6(VAR_8);
    FUNC_1(VAR_8->e_ino);
    VAR_8->e_next = VAR_5;
    VAR_5 = VAR_8;
   }
  }
 }
}
