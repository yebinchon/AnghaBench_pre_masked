
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int X509 ;
typedef int WPACKET ;
struct TYPE_9__ {TYPE_1__* s3; } ;
struct TYPE_8__ {scalar_t__ group_id; } ;
typedef TYPE_2__ SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,scalar_t__ const**,size_t*) ;
 int FUNC_6 (TYPE_2__*,scalar_t__ const,int ) ;

EXT_RETURN FUNC_7(SSL *VAR_9, WPACKET *VAR_10,
                                        unsigned int VAR_11, X509 *VAR_12,
                                        size_t VAR_13)
{

    size_t VAR_14, VAR_15 = 0;
    const uint16_t *VAR_16 = ((void*)0);
    uint16_t VAR_17 = 0;


    if (!FUNC_2(VAR_10, VAR_8)

            || !FUNC_3(VAR_10)

            || !FUNC_3(VAR_10)) {
        FUNC_0(VAR_9, VAR_4, VAR_5,
                 VAR_0);
        return VAR_1;
    }

    FUNC_5(VAR_9, &VAR_16, &VAR_15);





    if (VAR_9->s3->group_id != 0) {
        VAR_17 = VAR_9->s3->group_id;
    } else {
        for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {

            if (!FUNC_6(VAR_9, VAR_16[VAR_14], VAR_7))
                continue;

            VAR_17 = VAR_16[VAR_14];
            break;
        }
    }

    if (VAR_17 == 0) {
        FUNC_0(VAR_9, VAR_4, VAR_5,
                 VAR_6);
        return VAR_1;
    }

    if (!FUNC_4(VAR_9, VAR_10, VAR_17)) {

        return VAR_1;
    }

    if (!FUNC_1(VAR_10) || !FUNC_1(VAR_10)) {
        FUNC_0(VAR_9, VAR_4, VAR_5,
                 VAR_0);
        return VAR_1;
    }
    return VAR_3;



}
