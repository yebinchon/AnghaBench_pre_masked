
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct entry {int e_flags; } ;
typedef scalar_t__ ino_t ;
struct TYPE_2__ {scalar_t__ ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct entry*,char*) ;
 char VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (char*,long) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char*,...) ;
 struct entry* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 char* FUNC_6 (struct entry*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct entry*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_7 ;
 int VAR_8 ;
 long VAR_9 ;
 int FUNC_11 (int ,char*) ;

void
FUNC_12(char *VAR_10)
{
 struct entry *VAR_11;
 ino_t VAR_12;
 long VAR_13;

 if (VAR_4 == 'R') {
  FUNC_11(VAR_8, "Continue extraction of new leaves\n");
 } else {
  FUNC_11(VAR_8, "Extract new leaves.\n");
  FUNC_1(VAR_10, VAR_9);
 }
 VAR_12 = FUNC_5(VAR_3);
 VAR_13 = VAR_9;
 while (VAR_5.ino < VAR_6) {
  VAR_12 = FUNC_5(VAR_12);







  while (VAR_12 < VAR_5.ino) {
   VAR_11 = FUNC_4(VAR_12);
   if (VAR_11 == ((void*)0))
    FUNC_7("%ju: bad first\n", (uintmax_t)VAR_12);
   FUNC_3(VAR_7, "%s: not found on tape\n", FUNC_6(VAR_11));
   VAR_11->e_flags &= ~(VAR_1|VAR_0);
   VAR_12 = FUNC_5(VAR_12);
  }







  if (VAR_12 != VAR_5.ino) {
   FUNC_3(VAR_7, "expected next file %s, got %jd\n",
       (uintmax_t)VAR_12, (uintmax_t)VAR_5.ino);
   FUNC_9();
   goto next;
  }
  VAR_11 = FUNC_4(VAR_5.ino);
  if (VAR_11 == ((void*)0))
   FUNC_7("unknown file on tape\n");
  if ((VAR_11->e_flags & (VAR_1|VAR_0)) == 0)
   FUNC_0(VAR_11, "unexpected file on tape");





  if ((VAR_11->e_flags & VAR_0) != 0) {
   FUNC_8(VAR_11);
   VAR_11->e_flags &= ~VAR_2;
  }
  (void) FUNC_2(FUNC_6(VAR_11));
  VAR_11->e_flags &= ~(VAR_1|VAR_0);





 next:
  if (VAR_13 != VAR_9) {
   FUNC_1(VAR_10, VAR_9);
   FUNC_10();
   VAR_13 = VAR_9;
  }
 }
}
