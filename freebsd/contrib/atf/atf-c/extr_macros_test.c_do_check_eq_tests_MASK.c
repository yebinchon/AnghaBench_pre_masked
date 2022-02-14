
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct check_eq_test {char* v1; char* v2; int msg; scalar_t__ ok; int body; int * head; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int *,int ) ;
 int FUNC_5 (char*,char*,char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static
void
FUNC_7(const struct check_eq_test *VAR_0)
{
    const struct check_eq_test *VAR_1;

    for (VAR_1 = &VAR_0[0]; VAR_1->head != ((void*)0); VAR_1++) {
        FUNC_5("Checking with %s, %s and expecting %s\n", VAR_1->v1, VAR_1->v2,
               VAR_1->ok ? "true" : "false");

        FUNC_4("h_check", VAR_1->head, VAR_1->body);

        FUNC_0(FUNC_3("before"));
        FUNC_0(FUNC_3("after"));

        if (VAR_1->ok) {
            FUNC_1(FUNC_2("^passed", "result"));
        } else {
            FUNC_1(FUNC_2("^failed", "result"));
            FUNC_0(FUNC_2("Check failed: .*"
                "macros_test.c:[0-9]+: %s$", "error", VAR_1->msg));
        }

        FUNC_0(FUNC_6("before") != -1);
        FUNC_0(FUNC_6("after") != -1);
    }
}
