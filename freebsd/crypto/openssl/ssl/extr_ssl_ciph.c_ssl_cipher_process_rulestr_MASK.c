
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int sec_level; } ;
struct TYPE_5__ {char* name; int algorithm_mkey; int algorithm_auth; int algorithm_enc; int algorithm_mac; int algo_strength; int id; int min_tls; scalar_t__ valid; } ;
typedef TYPE_1__ SSL_CIPHER ;
typedef int CIPHER_ORDER ;
typedef TYPE_2__ CERT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (int,int,int,int,int,int,int,int,int,int **,int **) ;
 int FUNC_4 (int **,int **) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_6(const char *VAR_9,
                                      CIPHER_ORDER **VAR_10,
                                      CIPHER_ORDER **VAR_11,
                                      const SSL_CIPHER **VAR_12, CERT *VAR_13)
{
    uint32_t VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    int VAR_19;
    const char *VAR_20, *VAR_21;
    int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
    uint32_t VAR_29 = 0;
    char VAR_30;

    VAR_26 = 1;
    VAR_20 = VAR_9;
    for ( ; ; ) {
        VAR_30 = *VAR_20;

        if (VAR_30 == '\0')
            break;
        if (VAR_30 == '-') {
            VAR_25 = VAR_1;
            VAR_20++;
        } else if (VAR_30 == '+') {
            VAR_25 = VAR_3;
            VAR_20++;
        } else if (VAR_30 == '!') {
            VAR_25 = VAR_2;
            VAR_20++;
        } else if (VAR_30 == '@') {
            VAR_25 = VAR_4;
            VAR_20++;
        } else {
            VAR_25 = VAR_0;
        }

        if (FUNC_0(VAR_30)) {
            VAR_20++;
            continue;
        }

        VAR_14 = 0;
        VAR_15 = 0;
        VAR_16 = 0;
        VAR_17 = 0;
        VAR_19 = 0;
        VAR_18 = 0;

        for (;;) {
            VAR_30 = *VAR_20;
            VAR_21 = VAR_20;
            VAR_28 = 0;

            while (((VAR_30 >= 'A') && (VAR_30 <= 'Z')) ||
                   ((VAR_30 >= '0') && (VAR_30 <= '9')) ||
                   ((VAR_30 >= 'a') && (VAR_30 <= 'z')) ||
                   (VAR_30 == '-') || (VAR_30 == '.') || (VAR_30 == '='))




            {
                VAR_30 = *(++VAR_20);
                VAR_28++;
            }

            if (VAR_28 == 0) {





                FUNC_1(VAR_6, VAR_7);
                VAR_26 = VAR_24 = 0;
                VAR_20++;
                break;
            }

            if (VAR_25 == VAR_4) {
                VAR_24 = 0;
                break;
            }


            if (VAR_30 == '+') {
                VAR_23 = 1;
                VAR_20++;
            } else {
                VAR_23 = 0;
            }
            VAR_22 = VAR_24 = 0;
            VAR_29 = 0;
            while (VAR_12[VAR_22]) {
                if (FUNC_5(VAR_21, VAR_12[VAR_22]->name, VAR_28) == 0
                    && (VAR_12[VAR_22]->name[VAR_28] == '\0')) {
                    VAR_24 = 1;
                    break;
                } else
                    VAR_22++;
            }

            if (!VAR_24)
                break;

            if (VAR_12[VAR_22]->algorithm_mkey) {
                if (VAR_14) {
                    VAR_14 &= VAR_12[VAR_22]->algorithm_mkey;
                    if (!VAR_14) {
                        VAR_24 = 0;
                        break;
                    }
                } else {
                    VAR_14 = VAR_12[VAR_22]->algorithm_mkey;
                }
            }

            if (VAR_12[VAR_22]->algorithm_auth) {
                if (VAR_15) {
                    VAR_15 &= VAR_12[VAR_22]->algorithm_auth;
                    if (!VAR_15) {
                        VAR_24 = 0;
                        break;
                    }
                } else {
                    VAR_15 = VAR_12[VAR_22]->algorithm_auth;
                }
            }

            if (VAR_12[VAR_22]->algorithm_enc) {
                if (VAR_16) {
                    VAR_16 &= VAR_12[VAR_22]->algorithm_enc;
                    if (!VAR_16) {
                        VAR_24 = 0;
                        break;
                    }
                } else {
                    VAR_16 = VAR_12[VAR_22]->algorithm_enc;
                }
            }

            if (VAR_12[VAR_22]->algorithm_mac) {
                if (VAR_17) {
                    VAR_17 &= VAR_12[VAR_22]->algorithm_mac;
                    if (!VAR_17) {
                        VAR_24 = 0;
                        break;
                    }
                } else {
                    VAR_17 = VAR_12[VAR_22]->algorithm_mac;
                }
            }

            if (VAR_12[VAR_22]->algo_strength & VAR_8) {
                if (VAR_18 & VAR_8) {
                    VAR_18 &=
                        (VAR_12[VAR_22]->algo_strength & VAR_8) |
                        ~VAR_8;
                    if (!(VAR_18 & VAR_8)) {
                        VAR_24 = 0;
                        break;
                    }
                } else {
                    VAR_18 = VAR_12[VAR_22]->algo_strength & VAR_8;
                }
            }

            if (VAR_12[VAR_22]->algo_strength & VAR_5) {
                if (VAR_18 & VAR_5) {
                    VAR_18 &=
                        (VAR_12[VAR_22]->algo_strength & VAR_5) |
                        ~VAR_5;
                    if (!(VAR_18 & VAR_5)) {
                        VAR_24 = 0;
                        break;
                    }
                } else {
                    VAR_18 |=
                        VAR_12[VAR_22]->algo_strength & VAR_5;
                }
            }

            if (VAR_12[VAR_22]->valid) {





                VAR_29 = VAR_12[VAR_22]->id;
            } else {





                if (VAR_12[VAR_22]->min_tls) {
                    if (VAR_19 != 0 && VAR_19 != VAR_12[VAR_22]->min_tls) {
                        VAR_24 = 0;
                        break;
                    } else {
                        VAR_19 = VAR_12[VAR_22]->min_tls;
                    }
                }
            }

            if (!VAR_23)
                break;
        }




        if (VAR_25 == VAR_4) {
            VAR_27 = 0;
            if ((VAR_28 == 8) && FUNC_5(VAR_21, "STRENGTH", 8) == 0) {
                VAR_27 = FUNC_4(VAR_10, VAR_11);
            } else if (VAR_28 == 10 && FUNC_5(VAR_21, "SECLEVEL=", 9) == 0) {
                int VAR_31 = VAR_21[9] - '0';
                if (VAR_31 < 0 || VAR_31 > 5) {
                    FUNC_1(VAR_6,
                           VAR_7);
                } else {
                    VAR_13->sec_level = VAR_31;
                    VAR_27 = 1;
                }
            } else {
                FUNC_1(VAR_6, VAR_7);
            }
            if (VAR_27 == 0)
                VAR_26 = 0;






            while ((*VAR_20 != '\0') && !FUNC_0(*VAR_20))
                VAR_20++;
        } else if (VAR_24) {
            FUNC_3(VAR_29,
                                  VAR_14, VAR_15, VAR_16, VAR_17,
                                  VAR_19, VAR_18, VAR_25, -1, VAR_10,
                                  VAR_11);
        } else {
            while ((*VAR_20 != '\0') && !FUNC_0(*VAR_20))
                VAR_20++;
        }
        if (*VAR_20 == '\0')
            break;
    }

    return VAR_26;
}
