
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(void)
{
 uint64_t VAR_4;


 if ((VAR_3 & VAR_0) == 0) {
  FUNC_0("SVM: not available.\n");
  return (0);
 }

 VAR_4 = FUNC_1(VAR_1);
 if ((VAR_4 & VAR_2) != 0) {
  FUNC_0("SVM: disabled by BIOS.\n");
  return (0);
 }

 return (1);
}
