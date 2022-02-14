
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* meth; } ;
struct TYPE_8__ {int (* point_set_compressed_coordinates ) (TYPE_2__ const*,int *,int const*,int,int *) ;int flags; scalar_t__ field_type; } ;
typedef int EC_POINT ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_2__ const*,int *,int const*,int,int *) ;
 int FUNC_2 (TYPE_2__ const*,int *,int const*,int,int *) ;
 int FUNC_3 (int *,TYPE_2__ const*) ;
 int FUNC_4 (TYPE_2__ const*,int *,int const*,int,int *) ;

int FUNC_5(const EC_GROUP *VAR_6, EC_POINT *VAR_7,
                                        const BIGNUM *VAR_8, int VAR_9, BN_CTX *VAR_10)
{
    if (VAR_6->meth->point_set_compressed_coordinates == ((void*)0)
        && !(VAR_6->meth->flags & VAR_0)) {
        FUNC_0(VAR_1,
              VAR_4);
        return 0;
    }
    if (!FUNC_3(VAR_7, VAR_6)) {
        FUNC_0(VAR_1,
              VAR_3);
        return 0;
    }
    if (VAR_6->meth->flags & VAR_0) {
        if (VAR_6->meth->field_type == VAR_5)
            return FUNC_2(VAR_6, VAR_7, VAR_8,
                                                            VAR_9, VAR_10);
        else







            return FUNC_1(VAR_6, VAR_7, VAR_8,
                                                             VAR_9, VAR_10);

    }
    return VAR_6->meth->point_set_compressed_coordinates(VAR_6, VAR_7, VAR_8,
                                                         VAR_9, VAR_10);
}
