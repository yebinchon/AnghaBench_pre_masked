
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,char*,int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_3 ;
 scalar_t__ FUNC_4 () ;

int
FUNC_5(void)
{
 uint16_t VAR_4;
 static int VAR_5 = 0;

 if (VAR_5)
  return (1);

 if (VAR_2 == VAR_0 && FUNC_4() == 0)
  return (0);

 VAR_4 = FUNC_3();
 if (VAR_4 > 0)
  FUNC_0(("pcibios: BIOS version %x.%02x\n", (VAR_4 & 0xff00) >> 8,
      VAR_4 & 0xff));
 FUNC_1(&VAR_3, "pcicfg", ((void*)0), VAR_1);
 VAR_5 = 1;


 if (VAR_4 >= 0x0210)
  FUNC_2();

 return (1);
}
