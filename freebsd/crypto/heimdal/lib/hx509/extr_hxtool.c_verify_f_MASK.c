
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct verify {int errors; scalar_t__ hostname; int count; int chain; int ctx; } ;
typedef int hx509_context ;
typedef int hx509_cert ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,scalar_t__,int *,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int
FUNC_5(hx509_context VAR_1, void *VAR_2, hx509_cert VAR_3)
{
    struct verify *VAR_4 = VAR_2;
    int VAR_5;

    VAR_5 = FUNC_3(VAR_1, VAR_4->ctx, VAR_3, VAR_4->chain);
    if (VAR_5) {
 char *VAR_6 = FUNC_1(VAR_1, VAR_5);
 FUNC_4("verify_path: %s: %d\n", VAR_6, VAR_5);
 FUNC_0(VAR_6);
 VAR_4->errors++;
    } else {
 VAR_4->count++;
 FUNC_4("path ok\n");
    }

    if (VAR_4->hostname) {
 VAR_5 = FUNC_2(VAR_1, VAR_3, 0, VAR_0,
        VAR_4->hostname, ((void*)0), 0);
 if (VAR_5) {
     FUNC_4("verify_hostname: %d\n", VAR_5);
     VAR_4->errors++;
 }
    }

    return 0;
}
