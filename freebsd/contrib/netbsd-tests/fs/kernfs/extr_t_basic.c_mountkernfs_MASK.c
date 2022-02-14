
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,char*,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_4(void)
{

 FUNC_1();

 if (FUNC_2("/kern", 0777) == -1)
  FUNC_0("mkdir /kern");
 if (FUNC_3(VAR_0, "/kern", 0, ((void*)0), 0) == -1)
  FUNC_0("could not mount kernfs");
}
