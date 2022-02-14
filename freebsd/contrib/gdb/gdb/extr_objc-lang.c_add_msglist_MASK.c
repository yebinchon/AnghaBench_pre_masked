
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stoken {char* ptr; int length; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;

void
FUNC_5(struct stoken *VAR_2, int VAR_3)
{
  char *VAR_4, *VAR_5;
  int VAR_6, VAR_7;

  if (VAR_2 == 0) {
    if (VAR_3 == 0) {
      VAR_0++;
      return;
    }
    VAR_5 = "";
    VAR_7 = 0;
  } else {
    VAR_5 = VAR_2->ptr;
    VAR_7 = VAR_2->length;
  }
  VAR_6 = VAR_7 + FUNC_1(VAR_1) + 2;
  VAR_4 = (char *)FUNC_4(VAR_6);
  FUNC_0(VAR_4, VAR_1);
  FUNC_2(VAR_4, VAR_5, VAR_7);
  FUNC_3(VAR_1);
  VAR_1 = VAR_4;
  if (VAR_3) {
    VAR_4[VAR_6-2] = ':';
    VAR_4[VAR_6-1] = 0;
    VAR_0++;
  } else
    VAR_4[VAR_6-2] = '\0';
}
