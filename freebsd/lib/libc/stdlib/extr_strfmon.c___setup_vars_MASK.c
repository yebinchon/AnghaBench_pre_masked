
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lconv {char int_n_cs_precedes; char int_n_sep_by_space; char int_n_sign_posn; char* negative_sign; char int_p_cs_precedes; char int_p_sep_by_space; char int_p_sign_posn; char* positive_sign; char n_cs_precedes; char n_sep_by_space; char n_sign_posn; char p_cs_precedes; char p_sep_by_space; char p_sign_posn; } ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct lconv* FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(int VAR_4, char *VAR_5, char *VAR_6,
  char *VAR_7, char **VAR_8) {

 struct lconv *VAR_9 = FUNC_0();

 if ((VAR_4 & VAR_1) && (VAR_4 & VAR_3)) {
  *VAR_5 = VAR_9->int_n_cs_precedes;
  *VAR_6 = VAR_9->int_n_sep_by_space;
  *VAR_7 = (VAR_4 & VAR_2) ? 0 : VAR_9->int_n_sign_posn;
  *VAR_8 = (VAR_9->negative_sign[0] == '\0') ? "-"
      : VAR_9->negative_sign;
 } else if (VAR_4 & VAR_3) {
  *VAR_5 = VAR_9->int_p_cs_precedes;
  *VAR_6 = VAR_9->int_p_sep_by_space;
  *VAR_7 = (VAR_4 & VAR_2) ? 0 : VAR_9->int_p_sign_posn;
  *VAR_8 = VAR_9->positive_sign;
 } else if (VAR_4 & VAR_1) {
  *VAR_5 = VAR_9->n_cs_precedes;
  *VAR_6 = VAR_9->n_sep_by_space;
  *VAR_7 = (VAR_4 & VAR_2) ? 0 : VAR_9->n_sign_posn;
  *VAR_8 = (VAR_9->negative_sign[0] == '\0') ? "-"
      : VAR_9->negative_sign;
 } else {
  *VAR_5 = VAR_9->p_cs_precedes;
  *VAR_6 = VAR_9->p_sep_by_space;
  *VAR_7 = (VAR_4 & VAR_2) ? 0 : VAR_9->p_sign_posn;
  *VAR_8 = VAR_9->positive_sign;
 }


 if (*VAR_5 != 0)
  *VAR_5 = 1;
 if (*VAR_6 == VAR_0)
  *VAR_6 = 0;
 if (*VAR_7 == VAR_0)
  *VAR_7 = 0;
}
