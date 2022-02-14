
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static uint64_t
FUNC_2(bool VAR_2)
{
 uint64_t VAR_3
;
 FUNC_1();
 if (VAR_2) {
  do {
   VAR_3 = FUNC_0(VAR_0);
  }
  while (((VAR_3 + 1) & 0x7FF) <= 1);
 }
 else {
  do {
   VAR_3 = FUNC_0(VAR_1);
  }
  while (((VAR_3 + 1) & 0x7FF) <= 1);
 }

 return (VAR_3);
}
