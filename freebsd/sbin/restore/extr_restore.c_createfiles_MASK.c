
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct entry {int e_flags; } ;
typedef scalar_t__ ino_t ;
struct TYPE_2__ {scalar_t__ ino; void* action; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (long) ;
 struct entry* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 char* FUNC_5 (struct entry*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_11 (int ,char*) ;

void
FUNC_12(void)
{
 ino_t VAR_10, VAR_11, VAR_12;
 struct entry *VAR_13;
 long VAR_14;

 FUNC_11(VAR_8, "Extract requested files\n");
 VAR_5.action = VAR_3;
 FUNC_2((long)1);
 FUNC_9();
 FUNC_7();
 VAR_10 = FUNC_4(VAR_4);
 VAR_12 = FUNC_10(VAR_6 - 1);
 for (;;) {
  VAR_14 = VAR_9;
  VAR_10 = FUNC_4(VAR_10);
  VAR_12 = FUNC_10(VAR_12);



  if (VAR_10 > VAR_12)
   return;
  if (VAR_0) {
   if (VAR_5.ino == VAR_6)
    return;
   if((VAR_13 = FUNC_3(VAR_5.ino)) != ((void*)0) &&
       (VAR_13->e_flags & (VAR_2|VAR_1))) {
    goto justgetit;
   } else {
    FUNC_8();
    continue;
   }
  }







  if (VAR_5.ino > VAR_12 && VAR_5.ino < VAR_6 && VAR_9 > 1) {
   VAR_5.action = VAR_3;
   FUNC_2((long)0);
   FUNC_9();
   FUNC_7();
   continue;
  }





  if (VAR_5.ino < VAR_6) {
   VAR_11 = FUNC_4(VAR_5.ino);
   while (VAR_11 > VAR_5.ino && VAR_9 == VAR_14)
    FUNC_8();
   if (VAR_9 != VAR_14) {
    FUNC_9();
    FUNC_7();
    continue;
   }
  } else {





   VAR_11 = VAR_10;
  }
  while (VAR_11 < VAR_5.ino) {
   VAR_13 = FUNC_3(VAR_11);
   if (VAR_13 == ((void*)0))
    FUNC_6("corrupted symbol table\n");
   FUNC_1(VAR_7, "%s: not found on tape\n", FUNC_5(VAR_13));
   VAR_13->e_flags &= ~VAR_2;
   VAR_11 = FUNC_4(VAR_11);
  }




  if (VAR_11 == VAR_5.ino && VAR_11 <= VAR_12) {
   VAR_13 = FUNC_3(VAR_11);
   if (VAR_13 == ((void*)0))
    FUNC_6("corrupted symbol table\n");
justgetit:
   (void) FUNC_0(FUNC_5(VAR_13));
   VAR_13->e_flags &= ~VAR_2;
   if (VAR_9 != VAR_14)
    FUNC_9();
  }
 }
}
