
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int WPACKET ;
struct TYPE_12__ {scalar_t__ version; TYPE_4__* s3; TYPE_1__* cert; } ;
struct TYPE_10__ {TYPE_2__* new_cipher; } ;
struct TYPE_11__ {TYPE_3__ tmp; } ;
struct TYPE_9__ {int algorithm_mkey; } ;
struct TYPE_8__ {int ctype_len; scalar_t__ ctype; } ;
typedef TYPE_5__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int*,TYPE_5__*,int ) ;

int FUNC_3(SSL *VAR_16, WPACKET *VAR_17)
{
    uint32_t VAR_18, VAR_19 = 0;


    if (VAR_16->cert->ctype)
        return FUNC_0(VAR_17, VAR_16->cert->ctype, VAR_16->cert->ctype_len);

    FUNC_2(&VAR_19, VAR_16, VAR_5);

    VAR_18 = VAR_16->s3->tmp.new_cipher->algorithm_mkey;


    if (VAR_16->version >= VAR_11 && (VAR_18 & VAR_10))
            return FUNC_1(VAR_17, VAR_13)
                    && FUNC_1(VAR_17, VAR_15)
                    && FUNC_1(VAR_17, VAR_14);


    if ((VAR_16->version == VAR_4) && (VAR_18 & VAR_9)) {


        if (!FUNC_1(VAR_17, VAR_2))
            return 0;


        if (!FUNC_1(VAR_17, VAR_0))
            return 0;


    }

    if (!(VAR_19 & VAR_8) && !FUNC_1(VAR_17, VAR_3))
        return 0;


    if (!(VAR_19 & VAR_6) && !FUNC_1(VAR_17, VAR_1))
        return 0;






    if (VAR_16->version >= VAR_11
            && !(VAR_19 & VAR_7)
            && !FUNC_1(VAR_17, VAR_12))
        return 0;

    return 1;
}
