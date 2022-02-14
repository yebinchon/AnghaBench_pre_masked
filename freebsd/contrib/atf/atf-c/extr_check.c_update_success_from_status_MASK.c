
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_process_status_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int ,char*,char const*,...) ;
 int VAR_1 ;

__attribute__((used)) static
void
FUNC_7(const char *VAR_2,
                           const atf_process_status_t *VAR_3, bool *VAR_4)
{
    bool VAR_5 = FUNC_2(VAR_3) &&
             FUNC_3(VAR_3) == VAR_0;

    if (FUNC_2(VAR_3)) {
        if (FUNC_3(VAR_3) == VAR_0)
            FUNC_0(VAR_5);
        else {
            FUNC_0(!VAR_5);
            FUNC_6(VAR_1, "%s failed with exit code %d\n", VAR_2,
                    FUNC_3(VAR_3));
        }
    } else if (FUNC_4(VAR_3)) {
        FUNC_0(!VAR_5);
        FUNC_6(VAR_1, "%s failed due to signal %d%s\n", VAR_2,
                FUNC_5(VAR_3),
                FUNC_1(VAR_3) ? " (core dumped)" : "");
    } else {
        FUNC_0(!VAR_5);
        FUNC_6(VAR_1, "%s failed due to unknown reason\n", VAR_2);
    }

    *VAR_4 = VAR_5;
}
