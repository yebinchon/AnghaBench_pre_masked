
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_resolver ;
typedef int ldns_pkt ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(ldns_resolver *VAR_0, ldns_pkt *VAR_1) {
    char *VAR_2 = FUNC_4(FUNC_1(VAR_1));

    FUNC_6("Received %zu bytes from %s#%d in %d ms\n",
            FUNC_3(VAR_1), VAR_2, FUNC_5(VAR_0),
            FUNC_2(VAR_1));
    FUNC_0(VAR_2);
}
