
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;

int FUNC_5(void)
{
 int VAR_0;

 FUNC_3("Freezing user space processes ... ");
 VAR_0 = FUNC_4(1);
 if (VAR_0)
  goto Exit;
 FUNC_3("done.\n");

 FUNC_3("Freezing remaining freezable tasks ... ");
 VAR_0 = FUNC_4(0);
 if (VAR_0)
  goto Exit;
 FUNC_3("done.");

 FUNC_2();
 Exit:
 FUNC_0(FUNC_1());
 FUNC_3("\n");

 return VAR_0;
}
