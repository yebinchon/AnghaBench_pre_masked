
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef scalar_t__ ldns_pkt_rcode ;
typedef int ldns_pkt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static void
FUNC_13(ldns_resolver *VAR_8, ldns_rdf *VAR_9, ldns_pkt *VAR_10) {
    ldns_pkt_rcode VAR_11;

    if (VAR_3) {
        FUNC_12("Using domain server:\nName: %s\nAddress: ", VAR_6);
        FUNC_8(FUNC_1(VAR_10));
        FUNC_12("#%d\nAliases: \n\n", FUNC_3(VAR_8));
        VAR_3 = 0;
    }
    VAR_11 = FUNC_2(VAR_10);
    if (VAR_11 != VAR_0) {
        FUNC_12("Host ");
        FUNC_9(VAR_9);
        FUNC_12(" not found: %d(", VAR_11);
        FUNC_7(VAR_11);
        FUNC_12(")\n");
    } else {
        if (VAR_7) {
            FUNC_6(VAR_10);
        } else {
            FUNC_5(VAR_10, VAR_4);
            if (VAR_2 == VAR_1 &&
                FUNC_4(FUNC_0(VAR_10)) == 0) {
                FUNC_9(VAR_9);
                FUNC_12(" has no ");
                FUNC_11(VAR_5);
                FUNC_12(" record\n");
            }
        }
    }
    if (VAR_7)
        FUNC_10(VAR_8, VAR_10);
}
