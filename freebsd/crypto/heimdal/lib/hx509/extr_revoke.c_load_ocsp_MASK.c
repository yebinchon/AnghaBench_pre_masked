
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_mtime; } ;
struct TYPE_6__ {TYPE_1__* certs; } ;
struct revoke_ocsp {int * signer; int * certs; TYPE_2__ ocsp; int last_modfied; int path; } ;
typedef int hx509_context ;
typedef int * hx509_certs ;
typedef int * hx509_cert ;
struct TYPE_5__ {size_t len; int * val; } ;
typedef TYPE_2__ OCSPBasicOCSPResponse ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int **) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int ,char*,int ,int *,int **) ;
 int FUNC_6 (int ,int ,int,char*) ;
 int FUNC_7 (void*,size_t,TYPE_2__*) ;
 int FUNC_8 (int ,void**,size_t*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (int ,struct stat*) ;

__attribute__((used)) static int
FUNC_11(hx509_context VAR_1, struct revoke_ocsp *VAR_2)
{
    OCSPBasicOCSPResponse VAR_3;
    hx509_certs VAR_4 = ((void*)0);
    size_t VAR_5;
    struct stat VAR_6;
    void *VAR_7;
    int VAR_8;

    VAR_8 = FUNC_8(VAR_2->path, &VAR_7, &VAR_5);
    if (VAR_8)
 return VAR_8;

    VAR_8 = FUNC_10(VAR_2->path, &VAR_6);
    if (VAR_8)
 return VAR_0;

    VAR_8 = FUNC_7(VAR_7, VAR_5, &VAR_3);
    FUNC_9(VAR_7);
    if (VAR_8) {
 FUNC_6(VAR_1, 0, VAR_8,
          "Failed to parse OCSP response");
 return VAR_8;
    }

    if (VAR_3.certs) {
 size_t VAR_9;

 VAR_8 = FUNC_5(VAR_1, "MEMORY:ocsp-certs", 0,
          ((void*)0), &VAR_4);
 if (VAR_8) {
     FUNC_0(&VAR_3);
     return VAR_8;
 }

 for (VAR_9 = 0; VAR_9 < VAR_3.certs->len; VAR_9++) {
     hx509_cert VAR_10;

     VAR_8 = FUNC_2(VAR_1, &VAR_3.certs->val[VAR_9], &VAR_10);
     if (VAR_8)
  continue;

     VAR_8 = FUNC_3(VAR_1, VAR_4, VAR_10);
     FUNC_1(VAR_10);
     if (VAR_8)
  continue;
 }
    }

    VAR_2->last_modfied = VAR_6.st_mtime;

    FUNC_0(&VAR_2->ocsp);
    FUNC_4(&VAR_2->certs);
    FUNC_1(VAR_2->signer);

    VAR_2->ocsp = VAR_3;
    VAR_2->certs = VAR_4;
    VAR_2->signer = ((void*)0);

    return 0;
}
