
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; int ref_lock; int ref_offset; } ;
struct TYPE_5__ {scalar_t__ itype; char* sname; TYPE_2__* funcs; } ;
typedef int CRYPTO_RWLOCK ;
typedef int CRYPTO_REF_COUNT ;
typedef int ASN1_VALUE ;
typedef TYPE_1__ ASN1_ITEM ;
typedef TYPE_2__ ASN1_AUX ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int*,int*,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int*,int*,int *) ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,TYPE_1__ const*,int,char*) ;
 void* FUNC_7 (int *,int ) ;
 int VAR_5 ;

int FUNC_8(ASN1_VALUE **VAR_6, int VAR_7, const ASN1_ITEM *VAR_8)
{
    const ASN1_AUX *VAR_9;
    CRYPTO_REF_COUNT *VAR_10;
    CRYPTO_RWLOCK **VAR_11;
    int VAR_12 = -1;

    if ((VAR_8->itype != VAR_3)
        && (VAR_8->itype != VAR_2))
        return 0;
    VAR_9 = VAR_8->funcs;
    if (!VAR_9 || !(VAR_9->flags & VAR_0))
        return 0;
    VAR_10 = FUNC_7(*VAR_6, VAR_9->ref_offset);
    VAR_11 = FUNC_7(*VAR_6, VAR_9->ref_lock);

    switch (VAR_7) {
    case 0:
        *VAR_10 = VAR_12 = 1;
        *VAR_11 = FUNC_3();
        if (*VAR_11 == ((void*)0)) {
            FUNC_0(VAR_1, VAR_4);
            return -1;
        }
        break;
    case 1:
        if (!FUNC_4(VAR_10, &VAR_12, *VAR_11))
            return -1;
        break;
    case -1:
        if (!FUNC_1(VAR_10, &VAR_12, *VAR_11))
            return -1;



        FUNC_5(VAR_12 < 0);
        if (VAR_12 == 0) {
            FUNC_2(*VAR_11);
            *VAR_11 = ((void*)0);
        }
        break;
    }

    return VAR_12;
}
