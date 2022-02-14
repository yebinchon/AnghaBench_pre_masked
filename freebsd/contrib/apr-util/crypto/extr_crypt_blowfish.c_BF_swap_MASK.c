
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BF_word ;



__attribute__((used)) static void FUNC_0(BF_word *VAR_0, int VAR_1)
{
 static int VAR_2 = 1;
 char *VAR_3 = (char *)&VAR_2;
 BF_word VAR_4;

 if (*VAR_3)
 do {
  VAR_4 = *VAR_0;
  VAR_4 = (VAR_4 << 16) | (VAR_4 >> 16);
  *VAR_0++ = ((VAR_4 & 0x00FF00FF) << 8) | ((VAR_4 >> 8) & 0x00FF00FF);
 } while (--VAR_1);
}
