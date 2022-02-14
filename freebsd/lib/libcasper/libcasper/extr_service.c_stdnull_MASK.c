
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(void)
{
 int VAR_5;

 VAR_5 = FUNC_3(VAR_4, VAR_0);
 if (VAR_5 == -1)
  FUNC_2(1, "Unable to open %s", VAR_4);

 if (FUNC_4() == -1)
  FUNC_2(1, "Unable to detach from session");

 if (FUNC_1(VAR_5, VAR_2) == -1)
  FUNC_2(1, "Unable to cover stdin");
 if (FUNC_1(VAR_5, VAR_3) == -1)
  FUNC_2(1, "Unable to cover stdout");
 if (FUNC_1(VAR_5, VAR_1) == -1)
  FUNC_2(1, "Unable to cover stderr");

 if (VAR_5 > VAR_1)
  FUNC_0(VAR_5);
}
