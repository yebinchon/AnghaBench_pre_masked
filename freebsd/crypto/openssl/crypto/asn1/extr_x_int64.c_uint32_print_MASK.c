
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_3__ {int size; } ;
typedef int BIO ;
typedef int ASN1_VALUE ;
typedef int ASN1_PCTX ;
typedef TYPE_1__ ASN1_ITEM ;


 int FUNC_0 (int *,char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(BIO *VAR_1, ASN1_VALUE **VAR_2, const ASN1_ITEM *VAR_3,
                        int VAR_4, const ASN1_PCTX *VAR_5)
{
    if ((VAR_3->size & VAR_0) == VAR_0)
        return FUNC_0(VAR_1, "%d\n", **(int32_t **)VAR_2);
    return FUNC_0(VAR_1, "%u\n", **(uint32_t **)VAR_2);
}
