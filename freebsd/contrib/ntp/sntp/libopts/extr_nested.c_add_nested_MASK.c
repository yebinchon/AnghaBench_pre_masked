
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * nestVal; } ;
struct TYPE_8__ {char* pzName; int valType; TYPE_1__ v; } ;
typedef TYPE_2__ tOptionValue ;


 TYPE_2__* FUNC_0 (size_t,char*) ;
 char VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void**,TYPE_2__*) ;
 int FUNC_2 (char*,char const*,size_t) ;
 TYPE_2__* FUNC_3 (char*,char const*,size_t) ;

__attribute__((used)) static tOptionValue *
FUNC_4(void ** VAR_2, char const * VAR_3, size_t VAR_4,
           char * VAR_5, size_t VAR_6)
{
    tOptionValue * VAR_7;

    if (VAR_6 == 0) {
        size_t VAR_8 = VAR_4 + sizeof(*VAR_7) + 1;
        VAR_7 = FUNC_0(VAR_8, "empty nest");
        VAR_7->v.nestVal = ((void*)0);
        VAR_7->valType = VAR_1;
        VAR_7->pzName = (char *)(VAR_7 + 1);
        FUNC_2(VAR_7->pzName, VAR_3, VAR_4);
        VAR_7->pzName[ VAR_4 ] = VAR_0;

    } else {
        VAR_7 = FUNC_3(VAR_5, VAR_3, VAR_4);
    }

    if (VAR_7 != ((void*)0))
        FUNC_1(VAR_2, VAR_7);

    return VAR_7;
}
