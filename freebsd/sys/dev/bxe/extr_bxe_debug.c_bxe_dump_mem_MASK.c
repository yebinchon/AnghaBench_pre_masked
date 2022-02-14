
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;
typedef int c ;


 int FUNC_0 (struct bxe_softc*,char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;

void
FUNC_6(struct bxe_softc *VAR_1,
             char *VAR_2,
             uint8_t *VAR_3,
             uint32_t VAR_4)
{
    char VAR_5[256];
    char VAR_6[32];
    int VAR_7;

    FUNC_1(&VAR_0);

    FUNC_0(VAR_1, "++++++++++++ %s\n", VAR_2);
    FUNC_5(VAR_5, "** 000: ");

    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
    {
        if ((VAR_7 != 0) && (VAR_7 % 16 == 0))
        {
            FUNC_0(VAR_1, "%s\n", VAR_5);
            FUNC_5(VAR_5, "** ");
            FUNC_3(VAR_6, sizeof(VAR_6), "%03x", VAR_7);
            FUNC_4(VAR_5, VAR_6);
            FUNC_4(VAR_5, ": ");
        }

        FUNC_3(VAR_6, sizeof(VAR_6), "%02x ", *VAR_3);
        FUNC_4(VAR_5, VAR_6);

        VAR_3++;
    }

    FUNC_0(VAR_1, "%s\n", VAR_5);
    FUNC_0(VAR_1, "------------ %s\n", VAR_2);

    FUNC_2(&VAR_0);
}
