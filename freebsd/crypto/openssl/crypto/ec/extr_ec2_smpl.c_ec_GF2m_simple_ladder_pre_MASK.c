
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* meth; int b; int field; } ;
struct TYPE_16__ {scalar_t__ Z_is_one; int Y; int X; int Z; } ;
struct TYPE_15__ {int (* field_mul ) (TYPE_3__ const*,int ,int ,int ,int *) ;int (* field_sqr ) (TYPE_3__ const*,int ,int ,int *) ;int (* field_encode ) (TYPE_3__ const*,int ,int ,int *) ;} ;
typedef TYPE_2__ EC_POINT ;
typedef TYPE_3__ EC_GROUP ;
typedef int BN_CTX ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_3__ const*,int ,int ,int *) ;
 int FUNC_6 (TYPE_3__ const*,int ,int ,int ,int *) ;
 int FUNC_7 (TYPE_3__ const*,int ,int ,int *) ;
 int FUNC_8 (TYPE_3__ const*,int ,int ,int *) ;
 int FUNC_9 (TYPE_3__ const*,int ,int ,int *) ;
 int FUNC_10 (TYPE_3__ const*,int ,int ,int ,int *) ;
 int FUNC_11 (TYPE_3__ const*,int ,int ,int ,int *) ;

__attribute__((used)) static
int FUNC_12(const EC_GROUP *VAR_4,
                              EC_POINT *VAR_5, EC_POINT *VAR_6,
                              EC_POINT *VAR_7, BN_CTX *VAR_8)
{

    if (VAR_7->Z_is_one == 0)
        return 0;


    do {
        if (!FUNC_3(VAR_6->Z, FUNC_2(VAR_4->field) - 1,
                          VAR_1, VAR_0)) {
            FUNC_4(VAR_2, VAR_3);
            return 0;
        }
    } while (FUNC_1(VAR_6->Z));


    if ((VAR_4->meth->field_encode != ((void*)0)
         && !VAR_4->meth->field_encode(VAR_4, VAR_6->Z, VAR_6->Z, VAR_8))
        || !VAR_4->meth->field_mul(VAR_4, VAR_6->X, VAR_7->X, VAR_6->Z, VAR_8))
        return 0;


    do {
        if (!FUNC_3(VAR_5->Y, FUNC_2(VAR_4->field) - 1,
                          VAR_1, VAR_0)) {
            FUNC_4(VAR_2, VAR_3);
            return 0;
        }
    } while (FUNC_1(VAR_5->Y));

    if ((VAR_4->meth->field_encode != ((void*)0)
         && !VAR_4->meth->field_encode(VAR_4, VAR_5->Y, VAR_5->Y, VAR_8))
        || !VAR_4->meth->field_sqr(VAR_4, VAR_5->Z, VAR_7->X, VAR_8)
        || !VAR_4->meth->field_sqr(VAR_4, VAR_5->X, VAR_5->Z, VAR_8)
        || !FUNC_0(VAR_5->X, VAR_5->X, VAR_4->b)
        || !VAR_4->meth->field_mul(VAR_4, VAR_5->Z, VAR_5->Z, VAR_5->Y, VAR_8)
        || !VAR_4->meth->field_mul(VAR_4, VAR_5->X, VAR_5->X, VAR_5->Y, VAR_8))
        return 0;

    VAR_6->Z_is_one = 0;
    VAR_5->Z_is_one = 0;

    return 1;
}
