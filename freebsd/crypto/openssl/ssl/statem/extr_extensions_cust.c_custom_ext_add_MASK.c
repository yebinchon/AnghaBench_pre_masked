
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {size_t meths_count; TYPE_3__* meths; } ;
typedef TYPE_2__ custom_ext_methods ;
struct TYPE_12__ {int ext_flags; int (* add_cb ) (TYPE_4__*,int ,int,unsigned char const**,size_t*,int *,size_t,int*,int ) ;int add_arg; int ext_type; int (* free_cb ) (TYPE_4__*,int ,int,unsigned char const*,int ) ;int context; } ;
typedef TYPE_3__ custom_ext_method ;
typedef int X509 ;
typedef int WPACKET ;
struct TYPE_13__ {TYPE_1__* cert; } ;
struct TYPE_10__ {TYPE_2__ custext; } ;
typedef TYPE_4__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_4__*,int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char const*,size_t) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_4__*,int ,int,int) ;
 int FUNC_7 (TYPE_4__*,int ,int,unsigned char const**,size_t*,int *,size_t,int*,int ) ;
 int FUNC_8 (TYPE_4__*,int ,int,unsigned char const*,int ) ;

int FUNC_9(SSL *VAR_12, int VAR_13, WPACKET *VAR_14, X509 *VAR_15, size_t VAR_16,
                   int VAR_17)
{
    custom_ext_methods *VAR_18 = &VAR_12->cert->custext;
    custom_ext_method *VAR_19;
    size_t VAR_20;
    int VAR_21;

    for (VAR_20 = 0; VAR_20 < VAR_18->meths_count; VAR_20++) {
        const unsigned char *VAR_22 = ((void*)0);
        size_t VAR_23 = 0;

        VAR_19 = VAR_18->meths + VAR_20;

        if (!FUNC_6(VAR_12, VAR_19->context, VAR_13, VAR_17))
            continue;

        if ((VAR_13 & (VAR_5
                        | VAR_9
                        | VAR_7
                        | VAR_6
                        | VAR_8)) != 0) {

            if (!(VAR_19->ext_flags & VAR_3))
                continue;
        }




        if ((VAR_13 & VAR_2) == 0 && VAR_19->add_cb == ((void*)0))
            continue;

        if (VAR_19->add_cb != ((void*)0)) {
            int VAR_24 = VAR_19->add_cb(VAR_12, VAR_19->ext_type, VAR_13, &VAR_22,
                                         &VAR_23, VAR_15, VAR_16, &VAR_21,
                                         VAR_19->add_arg);

            if (VAR_24 < 0) {
                FUNC_0(VAR_12, VAR_21, VAR_10, VAR_11);
                return 0;
            }
            if (VAR_24 == 0)
                continue;
        }

        if (!FUNC_3(VAR_14, VAR_19->ext_type)
                || !FUNC_4(VAR_14)
                || (VAR_23 > 0 && !FUNC_2(VAR_14, VAR_22, VAR_23))
                || !FUNC_1(VAR_14)) {
            FUNC_0(VAR_12, VAR_1, VAR_10,
                     VAR_0);
            return 0;
        }
        if ((VAR_13 & VAR_2) != 0) {



            if (!FUNC_5((VAR_19->ext_flags & VAR_4) == 0)) {
                FUNC_0(VAR_12, VAR_1, VAR_10,
                         VAR_0);
                return 0;
            }





            VAR_19->ext_flags |= VAR_4;
        }
        if (VAR_19->free_cb != ((void*)0))
            VAR_19->free_cb(VAR_12, VAR_19->ext_type, VAR_13, VAR_22, VAR_19->add_arg);
    }
    return 1;
}
