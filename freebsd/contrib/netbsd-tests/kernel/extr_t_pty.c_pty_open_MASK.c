
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(void)
{
 int VAR_2;

 if ((VAR_2 = FUNC_3(VAR_1)) == -1)
  FUNC_1(VAR_0, "Couldn't pty(4) device");
 FUNC_0(VAR_2);
 if (FUNC_2(VAR_2) == -1)
  FUNC_1(VAR_0,
      "Couldn't grant permissions on tty(4) device");


 FUNC_0(VAR_2);

 if (FUNC_4(VAR_2) == -1)
  FUNC_1(VAR_0, "unlockpt()");

 return VAR_2;
}
