
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mbuf {int* m_data; int m_len; struct mbuf* m_next; } ;
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
                   struct mbuf *VAR_3,
                   uint8_t VAR_4)
{
    char VAR_5[256];
    char VAR_6[32];
    uint8_t *VAR_7;
    int VAR_8, VAR_9 = 0;

    FUNC_1(&VAR_0);

    FUNC_0(VAR_1, "++++++++++++ %s\n", VAR_2);

    while (VAR_3)
    {
        VAR_7 = VAR_3->m_data;
        FUNC_5(VAR_5, "** > ");
        FUNC_3(VAR_6, sizeof(VAR_6), "%03x", VAR_9);
        FUNC_4(VAR_5, VAR_6);
        FUNC_4(VAR_5, ": ");

        if (VAR_4)
        {
            for (VAR_8 = 0; VAR_8 < VAR_3->m_len; VAR_8++)
            {
                if ((VAR_9 != 0) && (VAR_9 % 16 == 0))
                {
                    FUNC_0(VAR_1, "%s\n", VAR_5);
                    FUNC_5(VAR_5, "**   ");
                    FUNC_3(VAR_6, sizeof(VAR_6), "%03x", VAR_9);
                    FUNC_4(VAR_5, VAR_6);
                    FUNC_4(VAR_5, ": ");
                }

                FUNC_3(VAR_6, sizeof(VAR_6), "%02x ", *VAR_7);
                FUNC_4(VAR_5, VAR_6);

                VAR_7++;
                VAR_9++;
            }
        }
        else
        {
            FUNC_3(VAR_6, sizeof(VAR_6), "%d", VAR_3->m_len);
            FUNC_4(VAR_5, VAR_6);
            VAR_9 += VAR_3->m_len;
        }

        FUNC_0(VAR_1, "%s\n", VAR_5);
        VAR_3 = VAR_3->m_next;
    }

    FUNC_0(VAR_1, "------------ %s\n", VAR_2);

    FUNC_2(&VAR_0);
}
