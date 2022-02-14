
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ocsp_fetch_options {char* url_path_string; int pool_strings; int nonce_flag; int pass_strings; } ;
typedef int nonce ;
typedef int hx509_lock ;
typedef int hx509_certs ;
struct TYPE_6__ {scalar_t__ length; int data; } ;
typedef TYPE_1__ heim_octet_string ;
typedef int FILE ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,char*,char const*,unsigned long) ;
 int FUNC_7 (int ,scalar_t__,int,int *) ;
 int FUNC_8 (int ,int ,int ,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,int ,int *,int *) ;
 int FUNC_11 (int ,int,int,char*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int ,int ,int *,int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (TYPE_1__**,int ,int) ;

int
FUNC_16(struct ocsp_fetch_options *VAR_1, int VAR_2, char **VAR_3)
{
    hx509_certs VAR_4, VAR_5;
    heim_octet_string VAR_6, VAR_7, *VAR_8 = &VAR_7;
    hx509_lock VAR_9;
    int VAR_10, VAR_11;
    char *VAR_12;
    const char *VAR_13 = "/";

    FUNC_15(&VAR_8, 0, sizeof(VAR_8));

    FUNC_12(VAR_0, &VAR_9);
    FUNC_14(VAR_9, &VAR_1->pass_strings);


    if (!VAR_1->nonce_flag)
 VAR_8 = ((void*)0);

    if (VAR_1->url_path_string)
 VAR_13 = VAR_1->url_path_string;

    VAR_11 = FUNC_10(VAR_0, "MEMORY:ocsp-pool", 0, ((void*)0), &VAR_5);
    if (VAR_11) FUNC_11(VAR_0, 1, VAR_11, "hx509_certs_init: MEMORY");

    FUNC_1(VAR_0, "ocsp-pool", VAR_5, VAR_9, &VAR_1->pool_strings);

    VAR_12 = VAR_3[0];

    VAR_11 = FUNC_10(VAR_0, "MEMORY:ocsp-req", 0, ((void*)0), &VAR_4);
    if (VAR_11) FUNC_11(VAR_0, 1, VAR_11, "hx509_certs_init: MEMORY");

    for (VAR_10 = 1; VAR_10 < VAR_2; VAR_10++) {
 VAR_11 = FUNC_8(VAR_0, VAR_4, VAR_9, VAR_3[VAR_10]);
 if (VAR_11)
     FUNC_3(1, "hx509_certs_append: req: %s: %d", VAR_3[VAR_10], VAR_11);
    }

    VAR_11 = FUNC_13(VAR_0, VAR_4, VAR_5, ((void*)0), ((void*)0), &VAR_6, VAR_8);
    if (VAR_11)
 FUNC_3(1, "hx509_ocsp_request: req: %d", VAR_11);

    {
 FILE *VAR_14;

 VAR_14 = FUNC_5(VAR_12, "w");
 if (VAR_14 == ((void*)0))
     FUNC_0();

 FUNC_6(VAR_14,
  "POST %s HTTP/1.0\r\n"
  "Content-Type: application/ocsp-request\r\n"
  "Content-Length: %ld\r\n"
  "\r\n",
  VAR_13,
  (unsigned long)VAR_6.length);
 FUNC_7(VAR_6.data, VAR_6.length, 1, VAR_14);
 FUNC_4(VAR_14);
    }

    if (VAR_8)
 FUNC_2(VAR_8);

    FUNC_9(&VAR_4);
    FUNC_9(&VAR_5);

    return 0;
}
