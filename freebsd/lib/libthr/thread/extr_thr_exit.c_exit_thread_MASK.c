
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int flags; int tid; int refcount; int force_exit; int cycle; int state; int * specific; int * name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct pthread*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct pthread*) ;
 int FUNC_3 (struct pthread*) ;
 struct pthread* FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct pthread*) ;
 int FUNC_8 (struct pthread*,struct pthread*) ;
 int FUNC_9 (int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_10 () ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void
FUNC_15(void)
{
 struct pthread *VAR_5 = FUNC_4();

 FUNC_13(VAR_5->name);
 VAR_5->name = ((void*)0);


 if (VAR_5->specific != ((void*)0)) {

  FUNC_10();
 }

 if (!FUNC_6())
  FUNC_12(0);

 if (FUNC_11(&VAR_4, -1) == 1) {
  FUNC_12(0);

 }


 FUNC_5();

 FUNC_3(VAR_5);
 VAR_5->state = VAR_1;
 if (VAR_5->flags & VAR_3) {
  VAR_5->cycle++;
  FUNC_9(&VAR_5->cycle, VAR_0, 0);
 }
 if (!VAR_5->force_exit && FUNC_1(VAR_5, VAR_2))
  FUNC_7(VAR_5);




 VAR_5->refcount--;
 FUNC_8(VAR_5, VAR_5);
 FUNC_14(&VAR_5->tid);
 FUNC_0("thr_exit() returned");

}
