
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int buffer ;
typedef int atf_error_t ;
typedef int atf_dynstr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,char const*) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,char*) ;

__attribute__((used)) static void
FUNC_5(atf_dynstr_t *VAR_1, const pid_t VAR_2, const char *VAR_3,
                  const bool VAR_4)
{
    atf_error_t VAR_5;

    VAR_5 = FUNC_0(VAR_1, "atf_utils_fork_%d_%s.txt",
                                (int)VAR_2, VAR_3);
    if (FUNC_2(VAR_5)) {
        char VAR_6[1024];
        FUNC_1(VAR_5, VAR_6, sizeof(VAR_6));
        if (VAR_4) {
            FUNC_3("Failed to create output file: %s", VAR_6);
        } else {
            FUNC_4(VAR_0, "Failed to create output file: %s", VAR_6);
        }
    }
}
