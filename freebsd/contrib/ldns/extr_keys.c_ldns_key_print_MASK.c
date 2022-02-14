
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_key ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,...) ;
 char* FUNC_2 (int const*) ;

void
FUNC_3(FILE *VAR_0, const ldns_key *VAR_1)
{
 char *VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
                FUNC_1(VAR_0, "%s", VAR_2);
        } else {
                FUNC_1(VAR_0, "Unable to convert private key to string\n");
        }
        FUNC_0(VAR_2);
}
