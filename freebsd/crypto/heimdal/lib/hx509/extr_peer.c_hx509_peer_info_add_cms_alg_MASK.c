
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* hx509_peer_info ;
typedef int hx509_context ;
struct TYPE_3__ {int len; int * val; } ;
typedef int AlgorithmIdentifier ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *) ;
 int FUNC_1 (int ,int ,int,char*) ;
 void* FUNC_2 (int *,int) ;

int
FUNC_3(hx509_context VAR_1,
       hx509_peer_info VAR_2,
       const AlgorithmIdentifier *VAR_3)
{
    void *VAR_4;
    int VAR_5;

    VAR_4 = FUNC_2(VAR_2->val, sizeof(VAR_2->val[0]) * (VAR_2->len + 1));
    if (VAR_4 == ((void*)0)) {
 FUNC_1(VAR_1, 0, VAR_0, "out of memory");
 return VAR_0;
    }
    VAR_2->val = VAR_4;
    VAR_5 = FUNC_0(VAR_3, &VAR_2->val[VAR_2->len]);
    if (VAR_5 == 0)
 VAR_2->len += 1;
    else
 FUNC_1(VAR_1, 0, VAR_5, "out of memory");
    return VAR_5;
}
