
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct hx509cipher {int (* evp_func ) () ;} ;
typedef TYPE_1__* hx509_crypto ;
typedef int hx509_context ;
typedef int heim_oid ;
struct TYPE_5__ {int oid; int c; struct hx509cipher const* cipher; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int const*,int *) ;
 struct hx509cipher* FUNC_2 (int const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int,char*) ;
 int FUNC_6 () ;

int
FUNC_7(hx509_context VAR_3,
    const char *VAR_4,
    const heim_oid *VAR_5,
    hx509_crypto *VAR_6)
{
    const struct hx509cipher *VAR_7;

    *VAR_6 = ((void*)0);

    VAR_7 = FUNC_2(VAR_5);
    if (VAR_7 == ((void*)0)) {
 FUNC_5(VAR_3, 0, VAR_1,
          "Algorithm not supported");
 return VAR_1;
    }

    *VAR_6 = FUNC_0(1, sizeof(**VAR_6));
    if (*VAR_6 == ((void*)0)) {
 FUNC_3(VAR_3);
 return VAR_0;
    }

    (*VAR_6)->flags = VAR_2;
    (*VAR_6)->cipher = VAR_7;
    (*VAR_6)->c = (*VAR_7->evp_func)();

    if (FUNC_1(VAR_5, &(*VAR_6)->oid)) {
 FUNC_4(*VAR_6);
 *VAR_6 = ((void*)0);
 FUNC_3(VAR_3);
 return VAR_0;
    }

    return 0;
}
