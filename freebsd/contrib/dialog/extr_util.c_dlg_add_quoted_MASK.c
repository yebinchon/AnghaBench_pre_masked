
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ strchr ;
struct TYPE_2__ {scalar_t__ single_quoted; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 () ;

void
FUNC_3(char *VAR_3)
{
    char VAR_4[2];
    const char *VAR_5 = FUNC_2();
    const char *VAR_6 = (VAR_2.single_quoted
       ? VAR_1
       : VAR_0);

    if (FUNC_1(VAR_3)) {
 VAR_4[1] = '\0';
 FUNC_0(VAR_5);
 while (*VAR_3 != '\0') {
     VAR_4[0] = *VAR_3++;
     if ((strchr) (VAR_5, *VAR_4) || (strchr) (VAR_6, *VAR_4))
  FUNC_0("\\");
     FUNC_0(VAR_4);
 }
 FUNC_0(VAR_5);
    } else {
 FUNC_0(VAR_3);
    }
}
