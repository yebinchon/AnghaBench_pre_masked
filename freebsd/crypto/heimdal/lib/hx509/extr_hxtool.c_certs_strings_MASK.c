
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hx509_lock ;
typedef int hx509_context ;
typedef int hx509_certs ;
struct TYPE_3__ {int num_strings; int * strings; } ;
typedef TYPE_1__ getarg_strings ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int,int,char*,char const*,int ) ;

__attribute__((used)) static void
FUNC_2(hx509_context VAR_0, const char *VAR_1, hx509_certs VAR_2,
       hx509_lock VAR_3, const getarg_strings *VAR_4)
{
    int VAR_5, VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_4->num_strings; VAR_5++) {
 VAR_6 = FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4->strings[VAR_5]);
 if (VAR_6)
     FUNC_1(VAR_0, 1, VAR_6,
        "hx509_certs_append: %s %s", VAR_1, VAR_4->strings[VAR_5]);
    }
}
