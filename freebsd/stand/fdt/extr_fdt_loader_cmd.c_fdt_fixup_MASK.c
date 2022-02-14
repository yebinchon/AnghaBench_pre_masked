
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (int *,int,char*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int,char*,int *,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *,int ,char*) ;
 int * VAR_1 ;

__attribute__((used)) static int
FUNC_7(void)
{
 int VAR_2;

 FUNC_0("fdt_fixup()\n");

 if (VAR_1 == ((void*)0) && FUNC_5() != 0)
  return (0);


 if ((VAR_2 = FUNC_6(VAR_1, 0, "chosen")) ==
     -VAR_0)
  VAR_2 = FUNC_1(VAR_1, 0, "chosen");


 if (FUNC_2(VAR_1, VAR_2, "fixup-applied", ((void*)0)))
  return (1);

 FUNC_3();






 VAR_2 = FUNC_6(VAR_1, 0, "chosen");
 FUNC_4(VAR_1, VAR_2, "fixup-applied", ((void*)0), 0);
 return (1);
}
