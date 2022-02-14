
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct require_eq_test {char* v1; char* v2; scalar_t__ ok; int msg; int body; int * head; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (char*,char*,char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static
void
FUNC_6(const struct require_eq_test *VAR_0)
{
    const struct require_eq_test *VAR_1;

    for (VAR_1 = &VAR_0[0]; VAR_1->head != ((void*)0); VAR_1++) {
        FUNC_4("Checking with %s, %s and expecting %s\n", VAR_1->v1, VAR_1->v2,
               VAR_1->ok ? "true" : "false");

        FUNC_3("h_require", VAR_1->head, VAR_1->body);

        FUNC_0(FUNC_2("before"));
        if (VAR_1->ok) {
            FUNC_0(FUNC_1("^passed", "result"));
            FUNC_0(FUNC_2("after"));
        } else {
            FUNC_0(FUNC_1("^failed: .*macros_test.c"
                ":[0-9]+: %s$", "result", VAR_1->msg));
            FUNC_0(!FUNC_2("after"));
        }

        FUNC_0(FUNC_5("before") != -1);
        if (VAR_1->ok)
            FUNC_0(FUNC_5("after") != -1);
    }
}
