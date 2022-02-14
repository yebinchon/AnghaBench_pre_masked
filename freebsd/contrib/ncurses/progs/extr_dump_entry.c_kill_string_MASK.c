
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char** Strings; } ;
typedef TYPE_1__ TERMTYPE ;


 char* VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static bool
FUNC_1(TERMTYPE *VAR_3, char *VAR_4)
{
    unsigned VAR_5;
    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); ++VAR_5) {
 if (VAR_4 == VAR_3->Strings[VAR_5]) {
     VAR_3->Strings[VAR_5] = VAR_0;
     return VAR_2;
 }
    }
    return VAR_1;
}
