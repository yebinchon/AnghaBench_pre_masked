
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(uint64_t VAR_1, int VAR_2)
{
 const int VAR_3 = 8;
 uint32_t VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_6 = VAR_3 * VAR_5;
  VAR_4 = (VAR_3 << 20) | (VAR_6 << 8) | (VAR_5);
  FUNC_0(VAR_1, VAR_0, VAR_4);
 }
}
