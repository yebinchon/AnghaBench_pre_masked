
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t used; char* text; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char) ;
 int VAR_4 ;

int
FUNC_4(void)
{



    if (VAR_2.used != 0) {
 bool VAR_5 = (VAR_3 != VAR_1 && VAR_3 != VAR_0);
 char VAR_6 = (char) (VAR_5 ? ',' : ':');
 int VAR_7;

 for (VAR_7 = (int) VAR_2.used - 1; VAR_7 > 0; --VAR_7) {
     char VAR_8 = VAR_2.text[VAR_7];
     if (VAR_8 == '\n') {
  ;
     } else if (FUNC_2(FUNC_0(VAR_8))) {
  VAR_2.used = (size_t) VAR_7;
     } else if (!VAR_5 && VAR_8 == '\\') {
  VAR_2.used = (size_t) VAR_7;
     } else if (VAR_8 == VAR_6 && (VAR_7 == 0 || VAR_2.text[VAR_7 - 1] != '\\')) {
  VAR_2.used = (size_t) (VAR_7 + 1);
     } else {
  break;
     }
 }
 VAR_2.text[VAR_2.used] = '\0';
    }
    (void) FUNC_1(VAR_2.text, VAR_4);
    FUNC_3('\n');
    return (int) VAR_2.used;
}
