
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iconv_xlat16 {int** d_table; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(void *VAR_1, int VAR_2)
{
        struct iconv_xlat16 *VAR_3 = (struct iconv_xlat16*)VAR_1;
 int VAR_4, VAR_5, VAR_6;

 if (VAR_2 < 0x100) {
  VAR_4 = FUNC_0(VAR_2 << 8);
  VAR_5 = FUNC_1(VAR_2 << 8);
 } else if (VAR_2 < 0x10000) {
                VAR_4 = FUNC_0(VAR_2);
                VAR_5 = FUNC_1(VAR_2);
 } else
  return (VAR_2);

 if (VAR_3->d_table[VAR_4] && VAR_3->d_table[VAR_4][VAR_5] & VAR_0) {
  VAR_6 = VAR_3->d_table[VAR_4][VAR_5] & 0xffff;
  if ((VAR_6 & 0xff) == 0)
   VAR_6 = (VAR_6 >> 8) & 0xff;
  return (VAR_6);
 } else
  return (VAR_2);
}
