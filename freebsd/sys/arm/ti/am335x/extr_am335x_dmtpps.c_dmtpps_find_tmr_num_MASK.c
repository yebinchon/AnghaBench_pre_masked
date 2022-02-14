
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(void)
{
 int VAR_0;

 if ((VAR_0 = FUNC_1()) == 0)
  VAR_0 = FUNC_0();

 if (VAR_0 <= 0) {
  FUNC_2("am335x_dmtpps: PPS driver not enabled: unable to find "
      "or configure a capture input pin\n");
  VAR_0 = -1;
 }
 return (VAR_0);
}
