
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct lock_object {int dummy; } ;
struct lock_class {int lc_flags; int (* lc_unlock ) (struct lock_object*) ;} ;
struct cv {int cv_description; } ;
struct TYPE_2__ {struct lock_object lock_object; } ;


 int FUNC_0 (struct cv*,struct lock_object*,struct thread*) ;
 int FUNC_1 (struct cv*) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (struct thread*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct lock_class* FUNC_5 (struct lock_object*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct thread*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int,struct lock_object*,char*,int ) ;
 struct thread* VAR_6 ;
 int FUNC_9 (struct cv*) ;
 int FUNC_10 (int,int ,int ) ;
 int FUNC_11 (struct cv*,struct lock_object*,int ,int ,int ) ;
 int FUNC_12 (struct cv*) ;
 int FUNC_13 (struct cv*) ;
 int FUNC_14 (struct cv*,int ) ;
 int FUNC_15 (struct lock_object*) ;
 int FUNC_16 (struct lock_object*) ;

void
FUNC_17(struct cv *VAR_7, struct lock_object *VAR_8)
{
 struct lock_class *VAR_9;
 struct thread *VAR_10;

 VAR_10 = VAR_6;




 FUNC_0(VAR_7, VAR_8, VAR_10);
 FUNC_8(VAR_4 | VAR_5, VAR_8,
     "Waiting on \"%s\"", VAR_7->cv_description);
 FUNC_3(VAR_8 != &VAR_0.lock_object,
     ("cv_wait_unlock cannot be used with Giant"));
 VAR_9 = FUNC_5(VAR_8);

 if (FUNC_7(VAR_10)) {
  VAR_9->lc_unlock(VAR_8);
  return;
 }

 FUNC_12(VAR_7);

 FUNC_1(VAR_7);
 FUNC_2();

 FUNC_11(VAR_7, VAR_8, VAR_7->cv_description, VAR_3, 0);
 if (VAR_9->lc_flags & VAR_2)
  FUNC_13(VAR_7);
 VAR_9->lc_unlock(VAR_8);
 if (VAR_9->lc_flags & VAR_2)
  FUNC_12(VAR_7);
 FUNC_14(VAR_7, 0);





 FUNC_6();
}
