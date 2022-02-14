
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void *
FUNC_5(void *VAR_5)
{

 FUNC_2(FUNC_1(), VAR_0);
 FUNC_4(1);

 if (VAR_1 == 2)
  FUNC_3("Success: Both handlers ran in order\n");
 else if (VAR_1 == 1 && VAR_2 == 1 && VAR_3 != VAR_4)
  FUNC_3("Success: Handlers were invoked by different threads\n");
 else {
  FUNC_3("Failure: flag=%d, flag2=%d, thr1=%p, thr2=%p\n",
   (int)VAR_1, (int)VAR_2, (void *)VAR_3, (void *)VAR_4);
  FUNC_0("failure");
 }

 return ((void*)0);
}
