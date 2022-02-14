
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int old_autoload ;
typedef int new_autoload ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,char*,int ,int *,int ) ;
 int FUNC_6 (char*,int*,size_t*,int*,size_t) ;

__attribute__((used)) static void
FUNC_7(void)
{
 bool VAR_1, VAR_2;
 size_t VAR_3, VAR_4;
 int VAR_5;

 if (!FUNC_3())
  FUNC_1("host kernel modules not supported");

 FUNC_2();

 if (FUNC_4("/kern", 0777) == -1)
  FUNC_0("mkdir /kern");

 VAR_2 = 1;
 VAR_3 = sizeof(VAR_1);
 VAR_4 = sizeof(VAR_2);
 VAR_5 = FUNC_6("kern.module.autoload",
      &VAR_1, &VAR_3,
      &VAR_2, VAR_4);
 if (VAR_5 != 0)
  FUNC_0("could not enable module autoload");

 if (FUNC_5(VAR_0, "/kern", 0, ((void*)0), 0) == -1)
  FUNC_0("could not mount kernfs");
}
