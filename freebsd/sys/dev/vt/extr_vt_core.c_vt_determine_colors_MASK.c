
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int term_color_t ;
typedef int term_char_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_4(term_char_t VAR_3, int VAR_4,
    term_color_t *VAR_5, term_color_t *VAR_6)
{
 term_color_t VAR_7;
 int VAR_8;

 VAR_8 = 0;

 *VAR_5 = FUNC_1(VAR_3);
 if (FUNC_2(VAR_3) & VAR_1)
  *VAR_5 = FUNC_3(*VAR_5);
 *VAR_6 = FUNC_0(VAR_3);
 if (FUNC_2(VAR_3) & VAR_0)
  *VAR_6 = FUNC_3(*VAR_6);

 if (FUNC_2(VAR_3) & VAR_2)
  VAR_8 ^= 1;
 if (VAR_4)
  VAR_8 ^= 1;

 if (VAR_8) {
  VAR_7 = *VAR_5;
  *VAR_5 = *VAR_6;
  *VAR_6 = VAR_7;
 }
}
