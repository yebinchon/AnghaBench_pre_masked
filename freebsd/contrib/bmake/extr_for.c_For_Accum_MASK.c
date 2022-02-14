
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf; } ;


 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

int
FUNC_7(char *VAR_4)
{
    char *VAR_5 = VAR_4;

    if (*VAR_5 == '.') {

 for (VAR_5++; *VAR_5 && FUNC_4((unsigned char) *VAR_5); VAR_5++)
     continue;

 if (FUNC_6(VAR_5, "endfor", 6) == 0 &&
  (FUNC_4((unsigned char) VAR_5[6]) || !VAR_5[6])) {
     if (FUNC_2(VAR_0))
  (void)FUNC_3(VAR_2, "For: end for %d\n", VAR_3);
     if (--VAR_3 <= 0)
  return 0;
 } else if (FUNC_6(VAR_5, "for", 3) == 0 &&
   FUNC_4((unsigned char) VAR_5[3])) {
     VAR_3++;
     if (FUNC_2(VAR_0))
  (void)FUNC_3(VAR_2, "For: new loop %d\n", VAR_3);
 }
    }

    FUNC_1(&VAR_1->buf, FUNC_5(VAR_4), VAR_4);
    FUNC_0(&VAR_1->buf, '\n');
    return 1;
}
