
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint32_t ;


 unsigned char FUNC_0 (unsigned char,unsigned char,unsigned char) ;

void
FUNC_1(uint32_t VAR_0, void *VAR_1, const void *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4;
 const unsigned char *VAR_5;

 VAR_4 = VAR_1;
 VAR_5 = VAR_2;
 while (VAR_3 -- > 0) {
  uint32_t VAR_6, VAR_7;

  VAR_6 = *VAR_5 ++;
  VAR_7 = *VAR_4;
  *VAR_4 = FUNC_0(VAR_0, VAR_6, VAR_7);
  VAR_4 ++;
 }
}
