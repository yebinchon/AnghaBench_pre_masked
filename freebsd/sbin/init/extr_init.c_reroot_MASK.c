
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int state_func_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void*,size_t) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ,char*,int *) ;
 int FUNC_3 (void*) ;
 int VAR_5 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,void**,size_t*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_6 ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static state_func_t
FUNC_10(void)
{
 void *VAR_7;
 size_t VAR_8;
 int VAR_9;

 VAR_7 = ((void*)0);
 VAR_8 = 0;

 FUNC_7();
 FUNC_8();






 VAR_9 = FUNC_4(-1, VAR_1);
 if (VAR_9 != 0 && VAR_4 != VAR_0) {
  FUNC_1("kill(2) failed: %s", FUNC_9(VAR_4));
  goto out;
 }





 VAR_9 = FUNC_6(VAR_5, &VAR_7, &VAR_8);
 if (VAR_9 != 0)
  goto out;
 VAR_9 = FUNC_5(VAR_2);
 if (VAR_9 != 0)
  goto out;
 VAR_9 = FUNC_0(VAR_3, VAR_7, VAR_8);
 if (VAR_9 != 0)
  goto out;




 FUNC_2(VAR_3, VAR_3, "-r", ((void*)0));
 FUNC_1("cannot exec %s: %s", VAR_3, FUNC_9(VAR_4));

out:
 FUNC_1("reroot failed; going to single user mode");
 FUNC_3(VAR_7);
 return (state_func_t) VAR_6;
}
