
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct opt_tab {int flag; scalar_t__ opt; } ;


 scalar_t__ FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 (char*,char) ;

int
FUNC_3(char *VAR_1, struct opt_tab *VAR_2, u_int *VAR_3)
{
  char *VAR_4 = VAR_1;
  int VAR_5 = 0;

  while (VAR_4 && *VAR_4) {
    int VAR_6;
    char *VAR_7;
    struct opt_tab *VAR_8, *VAR_9 = ((void*)0);

    VAR_1 = VAR_4;
    VAR_4 = FUNC_2(VAR_4, ',');
    if (VAR_4)
      *VAR_4 = '\0';


    if (VAR_1[0] == 'n' && VAR_1[1] == 'o') {
      VAR_7 = VAR_1 + 2;
      VAR_6 = 1;
    } else {
      VAR_7 = VAR_1;
      VAR_6 = 0;
    }







    for (VAR_8 = VAR_2; VAR_8->opt; VAR_8++) {
      if (FUNC_0(VAR_7, VAR_8->opt))
 break;
      if (VAR_7 != VAR_1 && !VAR_9 && FUNC_0(VAR_1, VAR_8->opt))
 VAR_9 = VAR_8;
    }

    if (VAR_8->opt || VAR_9) {
      if (!VAR_8->opt) {
 VAR_8 = VAR_9;
 VAR_6 = !VAR_6;
      }
      if (VAR_6)
 *VAR_3 &= ~VAR_8->flag;
      else
 *VAR_3 |= VAR_8->flag;
    } else {




      FUNC_1(VAR_0, "option \"%s\" not recognized", VAR_1);
      VAR_5++;
    }




    if (VAR_4)
      *VAR_4++ = ',';
  }

  return VAR_5;
}
