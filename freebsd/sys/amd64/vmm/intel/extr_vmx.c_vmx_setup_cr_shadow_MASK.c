
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct vmcs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct vmcs*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_8, struct vmcs *VAR_9, uint32_t VAR_10)
{
 int VAR_11, VAR_12, VAR_13;
 uint64_t VAR_14;

 if (VAR_8 != 0 && VAR_8 != 4)
  FUNC_1("vmx_setup_cr_shadow: unknown cr%d", VAR_8);

 if (VAR_8 == 0) {
  VAR_12 = VAR_0;
  VAR_14 = VAR_4 | VAR_5;
  VAR_13 = VAR_1;
 } else {
  VAR_12 = VAR_2;
  VAR_14 = VAR_6 | VAR_7;
  VAR_13 = VAR_3;
 }

 VAR_11 = FUNC_2(VAR_9, 0, FUNC_0(VAR_12), VAR_14);
 if (VAR_11)
  return (VAR_11);

 VAR_11 = FUNC_2(VAR_9, 0, FUNC_0(VAR_13), VAR_10);
 if (VAR_11)
  return (VAR_11);

 return (0);
}
