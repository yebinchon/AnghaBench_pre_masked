
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int uint64_t ;
typedef int f_attr_t ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(uint64_t VAR_1)
{
 uint_t VAR_2;
 int VAR_3 = 0;

 if (VAR_1 == 0)
  return;

 (void) FUNC_1("-------------------\n");
 (void) FUNC_1("Attribute bit(s) set:\n");
 (void) FUNC_1("-------------------\n");

 VAR_2 = VAR_1 & ((1 << VAR_0) - 1);
 while (VAR_2) {
  uint_t VAR_4 = VAR_2 >> 1;
  if (VAR_2 & 1) {
   (void) FUNC_1("%s", FUNC_0((f_attr_t)VAR_3));
   if (VAR_4)
    (void) FUNC_1(", ");
  }
  VAR_3++;
  VAR_2 = VAR_4;
 }
 (void) FUNC_1("\n");
}
