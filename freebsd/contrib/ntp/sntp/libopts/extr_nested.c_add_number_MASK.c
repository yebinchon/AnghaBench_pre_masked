
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ longVal; } ;
struct TYPE_7__ {char* pzName; int valType; TYPE_1__ v; } ;
typedef TYPE_2__ tOptionValue ;


 TYPE_2__* FUNC_0 (size_t,char*) ;
 scalar_t__ FUNC_1 (char const) ;
 char VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (void**,TYPE_2__*) ;
 int FUNC_3 (char*,char const*,size_t) ;
 scalar_t__ FUNC_4 (char const*,int ,int ) ;

__attribute__((used)) static tOptionValue *
FUNC_5(void ** VAR_2, char const * VAR_3, size_t VAR_4,
           char const * VAR_5, size_t VAR_6)
{
    size_t VAR_7 = VAR_4 + sizeof(tOptionValue) + 1;
    tOptionValue * VAR_8 = FUNC_0(VAR_7, "int val");




    while (FUNC_1(*VAR_5) && (VAR_6 > 0)) {
        VAR_6--; VAR_5++;
    }
    if (VAR_6 == 0)
        VAR_8->v.longVal = 0;
    else
        VAR_8->v.longVal = FUNC_4(VAR_5, 0, 0);

    VAR_8->valType = VAR_1;
    VAR_8->pzName = (char *)(VAR_8 + 1);
    FUNC_3(VAR_8->pzName, VAR_3, VAR_4);
    VAR_8->pzName[ VAR_4 ] = VAR_0;
    FUNC_2(VAR_2, VAR_8);
    return VAR_8;
}
