
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_list ;
typedef int ldns_pkt ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(ldns_pkt *VAR_0, bool VAR_1) {
    ldns_rr_list *VAR_2 = FUNC_0(VAR_0);
    size_t VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_3(VAR_2); VAR_3++) {
        if (VAR_1) {
            FUNC_6("Nameserver ");
            FUNC_4(FUNC_1(VAR_0));
            FUNC_6(":\n\t");
        }
        FUNC_5(FUNC_2(VAR_2, VAR_3));
    }
}
