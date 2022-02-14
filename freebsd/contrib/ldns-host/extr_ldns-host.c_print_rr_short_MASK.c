
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ldns_rr_type ;
typedef int ldns_rr ;
struct TYPE_3__ {scalar_t__ type; char* text; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,...) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_9(ldns_rr *VAR_1) {
    ldns_rr_type VAR_2 = FUNC_1(VAR_1);
    size_t VAR_3, VAR_4 = FUNC_3(VAR_1);

    FUNC_6(FUNC_2(VAR_1));
    FUNC_8(" ");
    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
        if (VAR_0[VAR_3].type == VAR_2) {
            FUNC_8("%s", VAR_0[VAR_3].text);
            goto found;
        }
    }

    FUNC_8("has ");
    FUNC_7(VAR_2);
    FUNC_8(" record");

found:
    for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
        FUNC_8(" ");
        FUNC_5(FUNC_4(VAR_1, VAR_3));
    }
    FUNC_8("\n");
}
