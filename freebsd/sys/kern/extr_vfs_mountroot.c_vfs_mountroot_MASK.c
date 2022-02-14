
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct thread {int dummy; } ;
struct sbuf {int dummy; } ;
struct mount {scalar_t__ mnt_time; } ;
struct TYPE_2__ {int pr_mtx; int pr_root; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mount* FUNC_1 (int *) ;
 struct mount* FUNC_2 (struct mount*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int) ;
 struct thread* VAR_2 ;
 int FUNC_6 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (struct sbuf*) ;
 int FUNC_11 (struct sbuf*) ;
 int FUNC_12 (struct sbuf*) ;
 struct sbuf* FUNC_13 () ;
 int FUNC_14 (struct sbuf*) ;
 int FUNC_15 (struct thread*,struct mount**) ;
 int FUNC_16 (struct sbuf*,struct mount*) ;
 int FUNC_17 (struct thread*,struct sbuf*) ;
 int FUNC_18 (struct thread*,struct mount*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *) ;

void
FUNC_21(void)
{
 struct mount *VAR_11;
 struct sbuf *VAR_12;
 struct thread *VAR_13;
 time_t VAR_14;
 int VAR_15;

 FUNC_7(&VAR_0, VAR_1);

 FUNC_3();

 VAR_13 = VAR_2;

 VAR_12 = FUNC_13();
 FUNC_14(VAR_12);
 FUNC_12(VAR_12);

 VAR_15 = FUNC_15(VAR_13, &VAR_11);
 while (!VAR_15) {
  VAR_15 = FUNC_16(VAR_12, VAR_11);
  if (!VAR_15) {
   FUNC_18(VAR_13, VAR_11);
   FUNC_10(VAR_12);
   VAR_15 = FUNC_17(VAR_13, VAR_12);
   FUNC_12(VAR_12);
  }
 }

 FUNC_11(VAR_12);







 VAR_14 = 0;
 FUNC_8(&VAR_5);
 VAR_11 = FUNC_1(&VAR_4);
 while (VAR_11 != ((void*)0)) {
  if (VAR_11->mnt_time > VAR_14)
   VAR_14 = VAR_11->mnt_time;
  VAR_11 = FUNC_2(VAR_11, VAR_3);
 }
 FUNC_9(&VAR_5);
 FUNC_6(VAR_14);


 FUNC_8(&VAR_7);
 VAR_7 = VAR_10;
 FUNC_19(VAR_7);
 FUNC_9(&VAR_7);

 FUNC_8(&VAR_8);
 FUNC_5(&VAR_9, 1);
 FUNC_20(&VAR_9);
 FUNC_9(&VAR_8);

 FUNC_0(VAR_6);

 FUNC_4();
}
