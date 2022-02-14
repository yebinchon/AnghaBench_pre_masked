
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int speed; scalar_t__ string; } ;
typedef TYPE_1__ SPEEDS ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_2(char *VAR_3)
{
    const SPEEDS *VAR_4;
    int VAR_5 = VAR_0;


    if (*VAR_3 == 'B')
 ++VAR_3;

    for (VAR_4 = VAR_2; VAR_4->string; ++VAR_4) {
 if (!FUNC_0(VAR_3, VAR_4->string)) {
     VAR_5 = VAR_1;
     break;
 }
    }
    if (!VAR_5)
 FUNC_1("unknown baud rate %s", VAR_3);
    return (VAR_4->speed);
}
