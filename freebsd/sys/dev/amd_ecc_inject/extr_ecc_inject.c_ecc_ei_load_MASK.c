
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 int * FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(void)
{
 uint32_t VAR_7;

 if (VAR_5 != VAR_0 || FUNC_0(VAR_4) < 0x10) {
  FUNC_3("DRAM ECC error injection is not supported\n");
  return (VAR_2);
 }
 VAR_6 = FUNC_1(0, 24, 3);
 if (VAR_6 == ((void*)0)) {
  FUNC_3("Couldn't find NB PCI device\n");
  return (VAR_2);
 }
 VAR_7 = FUNC_2(VAR_6, VAR_3, 4);
 if ((VAR_7 & VAR_1) == 0) {
  FUNC_3("DRAM ECC is not supported or disabled\n");
  return (VAR_2);
 }
 FUNC_3("DRAM ECC error injection support loaded\n");
 return (0);
}
