
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int optCt; TYPE_2__* pOptDesc; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_7__ {char const* pz_Name; scalar_t__* pz_DisableName; } ;
typedef TYPE_2__ tOptDesc ;
typedef int name_bf ;


 char const VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char*,char const*,unsigned int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 char* VAR_1 ;
 char* VAR_2 ;

__attribute__((used)) static void
FUNC_6(char const * VAR_3, tOptDesc * VAR_4, tOptions * VAR_5)
{
    char VAR_6[32];
    unsigned int VAR_7 = 2;
    unsigned int VAR_8 = FUNC_4(VAR_3) - 1;

    if (VAR_8 >= sizeof(VAR_6) - 1)
        goto leave;

    {
        tOptDesc * VAR_9 = VAR_5->pOptDesc;
        int VAR_10 = VAR_5->optCt;

        for (; VAR_10-- > 0; VAR_9++) {
            unsigned int VAR_11 = 0;




            if ((VAR_9 == VAR_4) || FUNC_0(VAR_9))
                continue;






            while (FUNC_1(VAR_9->pz_Name[VAR_11]) == FUNC_1(VAR_3[VAR_11]))
                VAR_11++;

            if (VAR_11 > VAR_7)
                VAR_7 = VAR_11;




            if (VAR_9->pz_DisableName == ((void*)0))
                continue;

            VAR_11 = 0;
            while ( FUNC_5((unsigned char)VAR_9->pz_DisableName[VAR_11])
                  == FUNC_5((unsigned char)VAR_3[VAR_11]))
                VAR_11++;
            if (VAR_11 > VAR_7)
                VAR_7 = VAR_11;
        }
    }





    if (VAR_7 < VAR_8) {
        char * VAR_12 = VAR_6 + VAR_7;
        int VAR_13 = VAR_7;

        FUNC_2(VAR_6, VAR_3, VAR_7);

        for (;;) {
            *VAR_12 = VAR_0;
            FUNC_3(VAR_2, VAR_6);
            *VAR_12++ = VAR_3[VAR_13++];
            if (VAR_3[VAR_13] == VAR_0) {
                *VAR_12 = VAR_0;
                break;
            }
        }
    }

leave:
    FUNC_3(VAR_1, VAR_3);
}
