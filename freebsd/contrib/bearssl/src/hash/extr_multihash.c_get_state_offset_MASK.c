
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static size_t
FUNC_1(int VAR_3)
{
 if (VAR_3 >= 5) {




  return FUNC_0(VAR_0, VAR_2)
   + ((size_t)(VAR_3 - 5) * (8 * sizeof(uint64_t)));
 } else {






  unsigned VAR_4;

  VAR_4 = VAR_3 - 1;
  VAR_4 = ((VAR_4 + (VAR_4 & (VAR_4 >> 1))) << 2) + (VAR_4 >> 1);
  return FUNC_0(VAR_0, VAR_1)
   + VAR_4 * sizeof(uint32_t);
 }
}
