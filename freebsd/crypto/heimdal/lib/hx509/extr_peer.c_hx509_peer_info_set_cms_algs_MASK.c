
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* hx509_peer_info ;
typedef int hx509_context ;
struct TYPE_4__ {size_t len; int * val; } ;
typedef int AlgorithmIdentifier ;


 int VAR_0 ;
 int * FUNC_0 (size_t,int) ;
 int FUNC_1 (int const*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,char*) ;

int
FUNC_5(hx509_context VAR_1,
        hx509_peer_info VAR_2,
        const AlgorithmIdentifier *VAR_3,
        size_t VAR_4)
{
    size_t VAR_5;

    FUNC_2(VAR_2);

    VAR_2->val = FUNC_0(VAR_4, sizeof(*VAR_2->val));
    if (VAR_2->val == ((void*)0)) {
 VAR_2->len = 0;
 FUNC_4(VAR_1, 0, VAR_0, "out of memory");
 return VAR_0;
    }
    VAR_2->len = VAR_4;
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
 int VAR_6;
 VAR_6 = FUNC_1(&VAR_3[VAR_5], &VAR_2->val[VAR_5]);
 if (VAR_6) {
     FUNC_3(VAR_1);
     FUNC_2(VAR_2);
     return VAR_6;
 }
    }
    return 0;
}
