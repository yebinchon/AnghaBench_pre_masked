
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(uint64_t VAR_1, int VAR_2,
    int VAR_3, int *VAR_4)
{
 uint32_t VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = VAR_3/VAR_2;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_5 = (VAR_4[(VAR_6/VAR_2) & 0x7] << 8) | VAR_6;
  FUNC_0(VAR_1, VAR_0, VAR_5);
 }
}
