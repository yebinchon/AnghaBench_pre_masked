
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* value; } ;
typedef size_t DBDIRS ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char const*,size_t) ;

__attribute__((used)) static char *
FUNC_1(const char *VAR_2, DBDIRS VAR_3)
{
    char *VAR_4 = 0;

    (void) FUNC_0(VAR_2, VAR_3);
    if (VAR_3 < VAR_0) {
 VAR_4 = VAR_1[VAR_3].value;
    }
    return VAR_4;
}
