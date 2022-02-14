
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* strVal; } ;
struct TYPE_7__ {int* pzName; TYPE_1__ v; int valType; } ;
typedef TYPE_2__ tOptionValue ;


 TYPE_2__* FUNC_0 (size_t,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void**,TYPE_2__*) ;
 int FUNC_2 (char const**,int*) ;
 int FUNC_3 (int*,char const*,size_t) ;

__attribute__((used)) static tOptionValue *
FUNC_4(void ** VAR_3, char const * VAR_4, size_t VAR_5,
           char const * VAR_6, size_t VAR_7)
{
    tOptionValue * VAR_8;
    size_t VAR_9 = VAR_5 + VAR_7 + sizeof(*VAR_8);

    VAR_8 = FUNC_0(VAR_9, "option name/str value pair");

    if (VAR_6 == ((void*)0)) {
        VAR_8->valType = VAR_1;
        VAR_8->pzName = VAR_8->v.strVal;

    } else {
        VAR_8->valType = VAR_2;
        if (VAR_7 > 0) {
            char const * VAR_10 = VAR_6;
            char * VAR_11 = VAR_8->v.strVal;
            int VAR_12 = (int)VAR_7;
            do {
                int VAR_13 = *(VAR_10++) & 0xFF;
                if (VAR_13 == VAR_0) goto data_copy_done;
                if (VAR_13 == '&')
                    VAR_13 = FUNC_2(&VAR_10, &VAR_12);
                *(VAR_11++) = (char)VAR_13;
            } while (--VAR_12 > 0);
        data_copy_done:
            *VAR_11 = VAR_0;

        } else {
            VAR_8->v.strVal[0] = VAR_0;
        }

        VAR_8->pzName = VAR_8->v.strVal + VAR_7 + 1;
    }

    FUNC_3(VAR_8->pzName, VAR_4, VAR_5);
    VAR_8->pzName[ VAR_5 ] = VAR_0;
    FUNC_1(VAR_3, VAR_8);
    return VAR_8;
}
