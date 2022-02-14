
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct store_ctx {int * f; int format; } ;
struct ks_file {int certs; int format; int fn; } ;
typedef int hx509_lock ;
typedef int hx509_context ;
typedef int hx509_certs ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ,struct store_ctx*) ;
 int FUNC_3 (int ,int ,int,char*) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(hx509_context VAR_2,
    hx509_certs VAR_3, void *VAR_4, int VAR_5, hx509_lock VAR_6)
{
    struct ks_file *VAR_7 = VAR_4;
    struct store_ctx VAR_8;
    int VAR_9;

    VAR_8.f = FUNC_1(VAR_7->fn, "w");
    if (VAR_8.f == ((void*)0)) {
 FUNC_3(VAR_2, 0, VAR_0,
          "Failed to open file %s for writing");
 return VAR_0;
    }
    FUNC_4(VAR_8.f);
    VAR_8.format = VAR_7->format;

    VAR_9 = FUNC_2(VAR_2, VAR_7->certs, VAR_1, &VAR_8);
    FUNC_0(VAR_8.f);
    return VAR_9;
}
