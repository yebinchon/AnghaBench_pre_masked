
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* hx509_request ;
typedef int hx509_context ;
struct TYPE_3__ {scalar_t__ name; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,char**) ;
 int FUNC_3 (int ,int ,int,char*) ;

int
FUNC_4(hx509_context VAR_0, hx509_request VAR_1, FILE *VAR_2)
{
    int VAR_3;

    if (VAR_1->name) {
 char *VAR_4;
 VAR_3 = FUNC_2(VAR_1->name, &VAR_4);
 if (VAR_3) {
     FUNC_3(VAR_0, 0, VAR_3, "Failed to print name");
     return VAR_3;
 }
        FUNC_0(VAR_2, "name: %s\n", VAR_4);
 FUNC_1(VAR_4);
    }

    return 0;
}
