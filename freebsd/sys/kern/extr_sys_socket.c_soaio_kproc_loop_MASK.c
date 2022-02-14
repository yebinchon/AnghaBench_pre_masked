
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmspace {int dummy; } ;
struct task {int ta_pending; int ta_context; int (* ta_func ) (int ,int) ;} ;
struct proc {struct vmspace* p_vmspace; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 struct task* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 struct proc* VAR_1 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int ,char*,int ) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (int ,int) ;
 int VAR_11 ;
 struct vmspace* FUNC_10 (struct proc*) ;
 int FUNC_11 (struct vmspace*) ;

__attribute__((used)) static void
FUNC_12(void *VAR_12)
{
 struct proc *VAR_13;
 struct vmspace *VAR_14;
 struct task *VAR_15;
 int VAR_16, VAR_17, VAR_18;

 VAR_17 = (intptr_t)VAR_12;






 VAR_13 = VAR_1;
 VAR_14 = FUNC_10(VAR_13);

 FUNC_6(&VAR_4);
 FUNC_0(VAR_9 > 0);
 VAR_9--;
 for (;;) {
  while (!FUNC_1(&VAR_3)) {
   VAR_15 = FUNC_2(&VAR_3);
   FUNC_3(&VAR_3, VAR_11);
   VAR_8--;
   VAR_18 = VAR_15->ta_pending;
   VAR_15->ta_pending = 0;
   FUNC_8(&VAR_4);

   VAR_15->ta_func(VAR_15->ta_context, VAR_18);

   FUNC_6(&VAR_4);
  }
  FUNC_0(VAR_8 == 0);

  if (VAR_13->p_vmspace != VAR_14) {
   FUNC_8(&VAR_4);
   FUNC_11(VAR_14);
   FUNC_6(&VAR_4);
   continue;
  }

  VAR_2++;
  VAR_16 = FUNC_7(&VAR_2, &VAR_4, 0, "-",
      VAR_6);
  VAR_2--;
  if (VAR_16 == VAR_0 && FUNC_1(&VAR_3) &&
      VAR_7 > VAR_10)
   break;
 }
 VAR_7--;
 FUNC_8(&VAR_4);
 FUNC_4(VAR_5, VAR_17);
 FUNC_5(0);
}
