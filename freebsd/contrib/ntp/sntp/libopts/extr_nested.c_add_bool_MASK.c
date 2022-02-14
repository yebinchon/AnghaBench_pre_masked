
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int boolVal; } ;
struct TYPE_7__ {char* pzName; int valType; TYPE_1__ v; } ;
typedef TYPE_2__ tOptionValue ;


 TYPE_2__* FUNC_0 (size_t,char*) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;
 char VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (void**,TYPE_2__*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,size_t) ;

__attribute__((used)) static tOptionValue *
FUNC_7(void ** VAR_2, char const * VAR_3, size_t VAR_4,
         char const * VAR_5, size_t VAR_6)
{
    size_t VAR_7 = VAR_4 + sizeof(tOptionValue) + 1;
    tOptionValue * VAR_8 = FUNC_0(VAR_7, "bool val");




    while (FUNC_3(*VAR_5) && (VAR_6 > 0)) {
        VAR_6--; VAR_5++;
    }

    if (VAR_6 == 0)
        VAR_8->v.boolVal = 0;

    else if (FUNC_1(*VAR_5))
        VAR_8->v.boolVal = (unsigned)FUNC_5(VAR_5);

    else VAR_8->v.boolVal = ! FUNC_2(*VAR_5);

    VAR_8->valType = VAR_1;
    VAR_8->pzName = (char *)(VAR_8 + 1);
    FUNC_6(VAR_8->pzName, VAR_3, VAR_4);
    VAR_8->pzName[ VAR_4 ] = VAR_0;
    FUNC_4(VAR_2, VAR_8);
    return VAR_8;
}
