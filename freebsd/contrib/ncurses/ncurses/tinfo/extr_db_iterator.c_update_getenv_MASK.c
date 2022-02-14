
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; char* value; } ;
typedef size_t DBDIRS ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static bool
FUNC_5(const char *VAR_4, DBDIRS VAR_5)
{
    bool VAR_6 = VAR_0;

    if (VAR_5 < VAR_2) {
 char *VAR_7;

 if ((VAR_7 = FUNC_2(VAR_4)) == 0 || (VAR_7 = FUNC_4(VAR_7)) == 0) {
     ;
 } else if (VAR_3[VAR_5].name == 0 || FUNC_3(VAR_3[VAR_5].name, VAR_4)) {
     FUNC_0(VAR_3[VAR_5].value);
     VAR_3[VAR_5].name = VAR_4;
     VAR_3[VAR_5].value = VAR_7;
     VAR_6 = VAR_1;
 } else if ((VAR_3[VAR_5].value != 0) ^ (VAR_7 != 0)) {
     FUNC_0(VAR_3[VAR_5].value);
     VAR_3[VAR_5].value = VAR_7;
     VAR_6 = VAR_1;
 } else if (VAR_7 != 0 && FUNC_3(VAR_7, VAR_3[VAR_5].value)) {
     FUNC_0(VAR_3[VAR_5].value);
     VAR_3[VAR_5].value = VAR_7;
     VAR_6 = VAR_1;
 } else {
     FUNC_1(VAR_7);
 }
    }
    return VAR_6;
}
