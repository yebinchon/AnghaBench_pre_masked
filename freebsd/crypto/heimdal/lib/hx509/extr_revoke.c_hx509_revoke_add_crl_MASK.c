
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* hx509_revoke_ctx ;
typedef int hx509_context ;
struct TYPE_8__ {int * path; int crl; int last_modfied; } ;
struct TYPE_6__ {size_t len; TYPE_3__* val; } ;
struct TYPE_7__ {TYPE_1__ crls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,char*,char const*) ;
 int FUNC_3 (char const*,int *,int *) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 void* FUNC_5 (TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (int *,char const*) ;
 int * FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;

int
FUNC_9(hx509_context VAR_2,
       hx509_revoke_ctx VAR_3,
       const char *VAR_4)
{
    void *VAR_5;
    size_t VAR_6;
    int VAR_7;

    if (FUNC_8(VAR_4, "FILE:", 5) != 0) {
 FUNC_2(VAR_2, 0, VAR_1,
          "unsupport type in %s", VAR_4);
 return VAR_1;
    }


    VAR_4 += 5;

    for (VAR_6 = 0; VAR_6 < VAR_3->crls.len; VAR_6++) {
 if (FUNC_6(VAR_3->crls.val[0].path, VAR_4) == 0)
     return 0;
    }

    VAR_5 = FUNC_5(VAR_3->crls.val,
     (VAR_3->crls.len + 1) * sizeof(VAR_3->crls.val[0]));
    if (VAR_5 == ((void*)0)) {
 FUNC_1(VAR_2);
 return VAR_0;
    }
    VAR_3->crls.val = VAR_5;

    FUNC_4(&VAR_3->crls.val[VAR_3->crls.len], 0, sizeof(VAR_3->crls.val[0]));

    VAR_3->crls.val[VAR_3->crls.len].path = FUNC_7(VAR_4);
    if (VAR_3->crls.val[VAR_3->crls.len].path == ((void*)0)) {
 FUNC_1(VAR_2);
 return VAR_0;
    }

    VAR_7 = FUNC_3(VAR_4,
     &VAR_3->crls.val[VAR_3->crls.len].last_modfied,
     &VAR_3->crls.val[VAR_3->crls.len].crl);
    if (VAR_7) {
 FUNC_0(VAR_3->crls.val[VAR_3->crls.len].path);
 return VAR_7;
    }

    VAR_3->crls.len++;

    return VAR_7;
}
