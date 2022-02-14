
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef char u_char ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_0, uint8_t *VAR_1, int VAR_2)
{
 int VAR_3;
 u_char VAR_4;

 FUNC_4(VAR_1, 0, VAR_2);
 while (FUNC_2(VAR_0[0]))
  VAR_0++;
 if (VAR_0[0] == '0' && (VAR_0[1] == 'x' || VAR_0[1] == 'X'))
  VAR_0 += 2;
 VAR_2 *= 2;
 for (VAR_3 = 0; VAR_0[VAR_3] != 0 && VAR_3 < VAR_2; VAR_3++) {
  while (VAR_0[VAR_3] == '-')
   VAR_0++;
  VAR_4 = VAR_0[VAR_3];
  if (FUNC_1(VAR_4))
   VAR_4 -= '0';
  else if (FUNC_0(VAR_4))
   VAR_4 -= FUNC_3(VAR_4) ? 'A' - 10 : 'a' - 10;
  else
   break;
  if (VAR_4 >= 16)
   break;
  if ((VAR_3 & 1) == 0)
   VAR_1[VAR_3 / 2] |= (VAR_4 << 4);
  else
   VAR_1[VAR_3 / 2] |= VAR_4;
 }
 return ((VAR_3 + 1) / 2);
}
