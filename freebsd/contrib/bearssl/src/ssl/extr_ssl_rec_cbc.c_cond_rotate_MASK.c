
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 unsigned char FUNC_0 (int ,unsigned char,unsigned char) ;
 int FUNC_1 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static void
FUNC_2(uint32_t VAR_0, unsigned char *VAR_1, size_t VAR_2, size_t VAR_3)
{
 unsigned char VAR_4[64];
 size_t VAR_5, VAR_6;

 for (VAR_5 = 0, VAR_6 = VAR_3; VAR_5 < VAR_2; VAR_5 ++) {
  VAR_4[VAR_5] = FUNC_0(VAR_0, VAR_1[VAR_6], VAR_1[VAR_5]);
  if (++ VAR_6 == VAR_2) {
   VAR_6 = 0;
  }
 }
 FUNC_1(VAR_1, VAR_4, VAR_2);
}
