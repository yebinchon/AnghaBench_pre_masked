
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_12__ {int active; struct TYPE_12__* prev; struct TYPE_12__* next; TYPE_1__* cipher; } ;
struct TYPE_11__ {int strength_bits; char* name; int algorithm_mkey; int algorithm_auth; int algorithm_enc; int algorithm_mac; int min_tls; int algo_strength; int id; } ;
typedef TYPE_1__ SSL_CIPHER ;
typedef TYPE_2__ CIPHER_ORDER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_2__**,TYPE_2__*,TYPE_2__**) ;
 int FUNC_2 (TYPE_2__**,TYPE_2__*,TYPE_2__**) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_3(uint32_t VAR_8, uint32_t VAR_9,
                                  uint32_t VAR_10, uint32_t VAR_11,
                                  uint32_t VAR_12, int VAR_13,
                                  uint32_t VAR_14, int VAR_15,
                                  int32_t VAR_16, CIPHER_ORDER **VAR_17,
                                  CIPHER_ORDER **VAR_18)
{
    CIPHER_ORDER *VAR_19, *VAR_20, *VAR_21, *VAR_22, *VAR_23;
    const SSL_CIPHER *VAR_24;
    int VAR_25 = 0;
    if (VAR_15 == VAR_2 || VAR_15 == VAR_1)
        VAR_25 = 1;


    VAR_19 = *VAR_17;
    VAR_20 = *VAR_18;

    if (VAR_25) {
        VAR_22 = VAR_20;
        VAR_23 = VAR_19;
    } else {
        VAR_22 = VAR_19;
        VAR_23 = VAR_20;
    }

    VAR_21 = ((void*)0);
    for (;;) {
        if (VAR_21 == VAR_23)
            break;

        VAR_21 = VAR_22;

        if (VAR_21 == ((void*)0))
            break;

        VAR_22 = VAR_25 ? VAR_21->prev : VAR_21->next;

        VAR_24 = VAR_21->cipher;





        if (VAR_16 >= 0) {
            if (VAR_16 != VAR_24->strength_bits)
                continue;
        } else {







            if (VAR_8 != 0 && (VAR_8 != VAR_24->id))
                continue;
            if (VAR_9 && !(VAR_9 & VAR_24->algorithm_mkey))
                continue;
            if (VAR_10 && !(VAR_10 & VAR_24->algorithm_auth))
                continue;
            if (VAR_11 && !(VAR_11 & VAR_24->algorithm_enc))
                continue;
            if (VAR_12 && !(VAR_12 & VAR_24->algorithm_mac))
                continue;
            if (VAR_13 && (VAR_13 != VAR_24->min_tls))
                continue;
            if ((VAR_14 & VAR_6)
                && !(VAR_14 & VAR_6 & VAR_24->algo_strength))
                continue;
            if ((VAR_14 & VAR_5)
                && !(VAR_14 & VAR_5 & VAR_24->algo_strength))
                continue;
        }






        if (VAR_15 == VAR_0) {

            if (!VAR_21->active) {
                FUNC_2(&VAR_19, VAR_21, &VAR_20);
                VAR_21->active = 1;
            }
        }

        else if (VAR_15 == VAR_4) {

            if (VAR_21->active) {
                FUNC_2(&VAR_19, VAR_21, &VAR_20);
            }
        } else if (VAR_15 == VAR_2) {

            if (VAR_21->active) {





                FUNC_1(&VAR_19, VAR_21, &VAR_20);
                VAR_21->active = 0;
            }
        } else if (VAR_15 == VAR_1) {
            if (VAR_21->active)
                FUNC_1(&VAR_19, VAR_21, &VAR_20);
        } else if (VAR_15 == VAR_3) {

            if (VAR_19 == VAR_21)
                VAR_19 = VAR_21->next;
            else
                VAR_21->prev->next = VAR_21->next;
            if (VAR_20 == VAR_21)
                VAR_20 = VAR_21->prev;
            VAR_21->active = 0;
            if (VAR_21->next != ((void*)0))
                VAR_21->next->prev = VAR_21->prev;
            if (VAR_21->prev != ((void*)0))
                VAR_21->prev->next = VAR_21->next;
            VAR_21->next = ((void*)0);
            VAR_21->prev = ((void*)0);
        }
    }

    *VAR_17 = VAR_19;
    *VAR_18 = VAR_20;
}
