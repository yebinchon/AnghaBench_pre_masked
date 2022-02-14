
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;

int
FUNC_3(uintmax_t *VAR_3)
{
 uintmax_t VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1();
 VAR_6 = (VAR_5 == '-') ? 1 : 0;
 if (VAR_6 == 1)
  VAR_5 = FUNC_1();
 if (!FUNC_2(VAR_5)) {
  VAR_1 -= ((VAR_5 == -1) ? 0 : 1) + VAR_6;
  VAR_2 += ((VAR_5 == -1) ? 0 : 1) + VAR_6;
  return (-1);
 }
 VAR_4 = 0;
 do {
  VAR_4 <<= 4;
  VAR_4 += FUNC_0(VAR_5);
  VAR_5 = FUNC_1();
 } while (FUNC_2(VAR_5));
 if (VAR_5 != VAR_0) {
  VAR_1--;
  VAR_2++;
 }
 *VAR_3 = (VAR_6) ? -VAR_4 : VAR_4;
 return (0);
}
