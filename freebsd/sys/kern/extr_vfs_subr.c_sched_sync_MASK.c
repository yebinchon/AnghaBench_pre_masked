
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_proc; int td_pflags; } ;
struct synclist {int dummy; } ;
struct bufobj {int dummy; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct synclist*) ;
 int FUNC_2 (struct synclist*,struct bufobj*,int ) ;
 int FUNC_3 (struct bufobj*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct thread* VAR_9 ;
 int FUNC_4 (int *,int *,int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ VAR_12 ;
 int FUNC_9 (struct thread*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (struct synclist*,struct bufobj**,struct thread*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 struct synclist* VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_11 (struct thread*) ;
 int FUNC_12 (struct thread*) ;
 long VAR_23 ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(void)
{
 struct synclist *VAR_24, *VAR_25;
 struct bufobj *VAR_26;
 long VAR_27;
 struct thread *VAR_28 = VAR_9;
 int VAR_29;
 int VAR_30;
 int VAR_31;
 int VAR_32;

 VAR_29 = 0;
 VAR_31 = 0;
 VAR_20 = VAR_3;
 VAR_27 = VAR_23;
 VAR_28->td_pflags |= VAR_6;

 FUNC_0(VAR_13, VAR_19, VAR_28->td_proc,
     VAR_1);

 FUNC_6(&VAR_14);
 for (;;) {
  if (VAR_20 == VAR_2 &&
      VAR_31 == 0) {
   FUNC_7(&VAR_14);
   FUNC_5(VAR_28->td_proc);
   FUNC_6(&VAR_14);
  }
  VAR_30 = VAR_22 - VAR_15;
  if (VAR_20 != VAR_3 &&
      VAR_27 != VAR_23) {
   if (VAR_10) {
    FUNC_8("\nSyncing disks, vnodes remaining... ");
    VAR_10 = 0;
   }
   FUNC_8("%d ", VAR_30);
  }
  VAR_27 = VAR_23;







  do {
   VAR_25 = &VAR_21[VAR_17];
   VAR_17 += 1;
   if (VAR_17 == VAR_18)
    VAR_17 = 0;
   VAR_24 = &VAR_21[VAR_17];






   if (VAR_20 == VAR_5 &&
       VAR_30 == 0 &&
       VAR_29 == VAR_17) {
    VAR_20 = VAR_2;
    VAR_31 = VAR_4;
   }
  } while (VAR_20 != VAR_3 && FUNC_1(VAR_25) &&
      VAR_22 > 0);







  if (VAR_30 > 0 || VAR_20 == VAR_3)
   VAR_29 = VAR_17;
  if (VAR_30 > 0 && VAR_20 == VAR_2)
   VAR_20 = VAR_5;
  while (!FUNC_1(VAR_25)) {
   VAR_32 = FUNC_10(VAR_25, &VAR_26, VAR_28);
   if (VAR_32 == 1) {
    FUNC_3(VAR_26, VAR_8);
    FUNC_2(VAR_24, VAR_26, VAR_8);
    continue;
   }

   if (VAR_10 == 0) {




    FUNC_7(&VAR_14);
    FUNC_13(VAR_7);
    FUNC_6(&VAR_14);
   }

  }
  if (VAR_20 == VAR_2 && VAR_31 > 0)
   VAR_31--;
  if (VAR_12 > 0) {
   VAR_12 -= 1;
   continue;
  }
  if (VAR_20 != VAR_3 ||
      VAR_23 == VAR_27) {
   FUNC_11(VAR_28);
   FUNC_9(VAR_28, VAR_0);
   FUNC_12(VAR_28);
  }
  if (VAR_20 != VAR_3)
   FUNC_4(&VAR_16, &VAR_14,
       VAR_11 / VAR_4);
  else if (VAR_23 == VAR_27)
   FUNC_4(&VAR_16, &VAR_14, VAR_11);
 }
}
