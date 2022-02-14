
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tests ;
typedef int krb5_error_code ;
typedef int krb5_context ;


 scalar_t__ FUNC_0 (int ,char const*) ;

__attribute__((used)) static int
FUNC_1(krb5_context VAR_0)
{
    int VAR_1, VAR_2 = 0;

    struct t {
 krb5_error_code ret;
 const char *orig_hostname;
 const char *new_hostname;
    } VAR_3[] = {
 { 0, "pstn1.su.se", "pstn1.su.se" },
 { 0, "pstnproxy.su.se", "pstnproxy.su.se" },
    };

    for (VAR_1 = 0; VAR_1 < sizeof(VAR_3)/sizeof(VAR_3[0]); VAR_1++) {
 VAR_2 += FUNC_0(VAR_0, VAR_3[VAR_1].orig_hostname);
    }

    return VAR_2;
}
