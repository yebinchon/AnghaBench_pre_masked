
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct lock_object {int dummy; } ;
struct lock_class {int lc_flags; int (* lc_unlock ) (struct lock_object*) ;int (* lc_lock ) (struct lock_object*,int) ;} ;
struct cv {int cv_description; } ;
typedef int sbintime_t ;
struct TYPE_3__ {struct lock_object lock_object; } ;


 int FUNC_0 (struct cv*,struct lock_object*,struct thread*) ;
 int FUNC_1 (struct cv*) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_3 (struct thread*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct lock_class* FUNC_4 (struct lock_object*) ;
 int VAR_3 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct thread*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct lock_object*,int ) ;
 int FUNC_8 (struct lock_object*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,struct lock_object*,char*,int ) ;
 struct thread* VAR_7 ;
 int FUNC_11 (struct cv*) ;
 int FUNC_12 (int,int ,int ) ;
 int VAR_8 ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (struct cv*,struct lock_object*,int ,int ,int ) ;
 int FUNC_15 (struct cv*) ;
 int FUNC_16 (struct cv*) ;
 int FUNC_17 (struct cv*,int ,int ,int) ;
 int FUNC_18 (struct cv*,int ) ;
 int FUNC_19 (struct lock_object*) ;
 int FUNC_20 (struct lock_object*,int) ;

int
FUNC_21(struct cv *VAR_9, struct lock_object *VAR_10, sbintime_t VAR_11,
    sbintime_t VAR_12, int VAR_13)
{
 FUNC_9(VAR_8);
 struct lock_class *VAR_14;
 struct thread *VAR_15;
 int VAR_16, VAR_17;

 VAR_15 = VAR_7;
 VAR_16 = 0;




 FUNC_0(VAR_9, VAR_10, VAR_15);
 FUNC_10(VAR_5 | VAR_6, VAR_10,
     "Waiting on \"%s\"", VAR_9->cv_description);
 VAR_14 = FUNC_4(VAR_10);

 if (FUNC_6(VAR_15))
  return (0);

 FUNC_15(VAR_9);

 FUNC_1(VAR_9);
 if (VAR_10 == &VAR_0.lock_object)
  FUNC_13(&VAR_0, VAR_3);
 FUNC_2();

 FUNC_14(VAR_9, VAR_10, VAR_9->cv_description, VAR_4, 0);
 FUNC_17(VAR_9, VAR_11, VAR_12, VAR_13);
 if (VAR_10 != &VAR_0.lock_object) {
  if (VAR_14->lc_flags & VAR_2)
   FUNC_16(VAR_9);
  FUNC_8(VAR_10, VAR_8);
  VAR_16 = VAR_14->lc_unlock(VAR_10);
  if (VAR_14->lc_flags & VAR_2)
   FUNC_15(VAR_9);
 }
 VAR_17 = FUNC_18(VAR_9, 0);





 FUNC_5();
 if (VAR_10 != &VAR_0.lock_object) {
  VAR_14->lc_lock(VAR_10, VAR_16);
  FUNC_7(VAR_10, VAR_8);
 }

 return (VAR_17);
}
