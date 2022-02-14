
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__*,int ,char*,int) ;
 int FUNC_4 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_5(void)
{
 FUNC_2();
 FUNC_1(VAR_3 != ((void*)0));
 VAR_4 = VAR_0;
 FUNC_4(&VAR_4);
 while (VAR_4 != VAR_1)
  FUNC_3(&VAR_4, VAR_2, "jfini:wait", VAR_5 / 5);
 FUNC_0(1, "Switcher died.");
 VAR_3 = ((void*)0);
}
