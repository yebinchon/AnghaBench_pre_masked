
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;





 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(uint64_t VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_0(VAR_1))
  VAR_2 = 32;
 else
  switch (VAR_1 & VAR_0) {
  case 129:
   VAR_2 = 32;
   break;
  case 130:
   VAR_2 = 20;
   break;
  case 128:
   VAR_2 = 64;
   break;
  }
 return (VAR_2);
}
