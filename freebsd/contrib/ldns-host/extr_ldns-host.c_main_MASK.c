
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef scalar_t__ ldns_status ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int,char*,int ,...) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 int * FUNC_6 (int *,char*) ;
 int * FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int **) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,scalar_t__) ;
 int FUNC_15 (int *,struct timeval) ;
 int FUNC_16 (int *,scalar_t__) ;
 scalar_t__ FUNC_17 (int **,int ) ;
 scalar_t__ FUNC_18 (int **,int ) ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_20 (int,char**) ;
 int FUNC_21 (int *,scalar_t__) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int *,int ,int) ;

int
FUNC_24(int VAR_19, char *VAR_20[]) {
    ldns_rdf *VAR_21, *VAR_22;
    ldns_resolver *VAR_23;
    ldns_status VAR_24;
    struct timeval VAR_25;

    FUNC_20(VAR_19, VAR_20);

    VAR_24 = FUNC_9(&VAR_23);
    if (VAR_24 != VAR_4)
        FUNC_0(1, "error creating resolver: %s", FUNC_5(VAR_24));
    if (FUNC_8(VAR_23) == 0)
        FUNC_10(VAR_23);

    FUNC_16(VAR_23, VAR_17);
    VAR_25.tv_sec = VAR_18 > 0 ? VAR_18 :
        VAR_17 ? VAR_0 : VAR_1;
    VAR_25.tv_usec = 0;
    FUNC_15(VAR_23, VAR_25);
    FUNC_14(VAR_23, VAR_14+1);
    FUNC_13(VAR_23, VAR_10);
    FUNC_11(VAR_23, 0);
    FUNC_12(VAR_23, 0);

    if (VAR_16)
        FUNC_21(VAR_23, VAR_16);

    if (FUNC_17(&VAR_21, VAR_12) == VAR_4) {
        VAR_22 = FUNC_6(VAR_21, "in-addr.arpa");
        if (VAR_22 == ((void*)0))
            FUNC_0(1, "can't reverse '%s': %s", VAR_12,
                FUNC_5(VAR_3));
        VAR_11 = VAR_7;
        VAR_15 = VAR_2;
        return !FUNC_1(VAR_23, VAR_22);
    } else if (FUNC_18(&VAR_21, VAR_12) == VAR_4) {
        VAR_22 = FUNC_7(VAR_21, VAR_9 ? "ip6.int" : "ip6.arpa");
        if (VAR_22 == ((void*)0))
            FUNC_0(1, "can't reverse '%s': %s", VAR_12,
                FUNC_5(VAR_3));
        VAR_11 = VAR_7;
        VAR_15 = VAR_2;
        return !FUNC_1(VAR_23, VAR_22);
    }
    return !(VAR_11 == VAR_8 ? FUNC_3 :
             VAR_11 == VAR_5 ? FUNC_4 :
             VAR_11 == VAR_6 ? FUNC_4 :
             FUNC_2)
        (VAR_23, FUNC_22(VAR_12), FUNC_19(VAR_12) >= VAR_13);
}
