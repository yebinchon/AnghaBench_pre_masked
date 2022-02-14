
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocsp_verify_options {int * ocsp_file_string; } ;
typedef int hx509_lock ;
typedef int hx509_certs ;
typedef int heim_octet_string ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int,char*,char*,int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int ,int *,int *) ;
 int FUNC_7 (int ,int ,int ,int *) ;
 int FUNC_8 (int ,int,int,char*,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int VAR_1 ;

int
FUNC_11(struct ocsp_verify_options *VAR_2, int VAR_3, char **VAR_4)
{
    hx509_lock VAR_5;
    hx509_certs VAR_6;
    int VAR_7, VAR_8;
    heim_octet_string VAR_9;

    FUNC_10(VAR_0, &VAR_5);

    if (VAR_2->ocsp_file_string == ((void*)0))
 FUNC_3(1, "no ocsp file given");

    VAR_7 = FUNC_0(VAR_2->ocsp_file_string, &VAR_9);
    if (VAR_7)
 FUNC_2(1, "map_file: %s: %d", VAR_4[0], VAR_7);

    VAR_7 = FUNC_6(VAR_0, "MEMORY:test-certs", 0, ((void*)0), &VAR_6);
    if (VAR_7) FUNC_8(VAR_0, 1, VAR_7, "hx509_certs_init: MEMORY");

    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
 VAR_7 = FUNC_4(VAR_0, VAR_6, VAR_5, VAR_4[VAR_8]);
 if (VAR_7)
     FUNC_8(VAR_0, 1, VAR_7, "hx509_certs_append: %s", VAR_4[VAR_8]);
    }

    VAR_7 = FUNC_7(VAR_0, VAR_6, VAR_1, &VAR_9);

    FUNC_5(&VAR_6);
    FUNC_1(&VAR_9);
    FUNC_9(VAR_5);

    return VAR_7;
}
