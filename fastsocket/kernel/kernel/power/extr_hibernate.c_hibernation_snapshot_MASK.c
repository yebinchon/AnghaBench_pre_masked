
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;

int FUNC_13(int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_3();
 if (VAR_7)
  goto Close;

 FUNC_11();
 FUNC_9();
 VAR_7 = FUNC_2(VAR_0);
 if (VAR_7)
  goto Recover_platform;

 if (FUNC_4(VAR_4))
  goto Recover_platform;

 VAR_7 = FUNC_0(VAR_6);





 Resume_devices:

 if (VAR_7 || !VAR_5)
  FUNC_12();

 FUNC_1(VAR_5 ?
  (VAR_7 ? VAR_1 : VAR_3) : VAR_2);

 if (VAR_7 || !VAR_5)
  FUNC_8();

 FUNC_10();
 Close:
 FUNC_6(VAR_6);
 return VAR_7;

 Recover_platform:
 FUNC_7(VAR_6);
 goto Resume_devices;
}
