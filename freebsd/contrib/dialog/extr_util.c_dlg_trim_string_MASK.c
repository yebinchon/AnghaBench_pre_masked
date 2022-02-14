
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nocollapse; scalar_t__ cr_wrap; scalar_t__ trim_whitespace; int no_nl_expand; } ;


 char VAR_0 ;
 int FUNC_0 (char) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

void
FUNC_4(char *VAR_2)
{
    char *VAR_3 = VAR_2;
    char *VAR_4;
    char *VAR_5 = VAR_2;
    int VAR_6 = !VAR_1.no_nl_expand && (FUNC_2(VAR_2, "\\n") != 0);

    while (*VAR_5 != '\0') {
 if (*VAR_5 == VAR_0 && !VAR_1.nocollapse)
     *VAR_5 = ' ';

 if (VAR_6) {
     if (*VAR_5 == '\\' && *(VAR_5 + 1) == 'n') {
  *VAR_2++ = '\n';
  VAR_5 += 2;
  VAR_4 = VAR_5;





  while (FUNC_1(FUNC_0(*VAR_4)))
      VAR_4++;
  if (*VAR_4 == '\n')
      VAR_5 = VAR_4 + 1;
     } else if (*VAR_5 == '\n') {
  if (VAR_1.cr_wrap)
      *VAR_2++ = *VAR_5++;
  else {

      if (!FUNC_3(VAR_3, VAR_5))
   *VAR_2++ = ' ';
      VAR_5++;
  }
     } else
  *VAR_2++ = *VAR_5++;
 } else if (VAR_1.trim_whitespace) {
     if (FUNC_1(FUNC_0(*VAR_5))) {
  if (!FUNC_1(FUNC_0(*(VAR_2 - 1)))) {
      *VAR_2++ = ' ';
      VAR_5++;
  } else
      VAR_5++;
     } else if (*VAR_5 == '\n') {
  if (VAR_1.cr_wrap)
      *VAR_2++ = *VAR_5++;
  else if (!FUNC_1(FUNC_0(*(VAR_2 - 1)))) {

      *VAR_2++ = ' ';
      VAR_5++;
  } else
      VAR_5++;
     } else
  *VAR_2++ = *VAR_5++;
 } else {
     if (FUNC_1(FUNC_0(*VAR_5)) && !VAR_1.nocollapse) {
  if (!FUNC_3(VAR_3, VAR_5))
      *VAR_2++ = *VAR_5;
  VAR_5++;
     } else
  *VAR_2++ = *VAR_5++;
 }
    }

    *VAR_2 = '\0';
}
