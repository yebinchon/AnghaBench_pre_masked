
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int custom_ext_methods ;
struct TYPE_10__ {int ext_flags; scalar_t__ (* parse_cb ) (TYPE_3__*,unsigned int,unsigned int,unsigned char const*,size_t,int *,size_t,int*,int ) ;int parse_arg; int context; } ;
typedef TYPE_2__ custom_ext_method ;
typedef int X509 ;
struct TYPE_11__ {scalar_t__ server; TYPE_1__* cert; } ;
struct TYPE_9__ {int custext; } ;
typedef TYPE_3__ SSL ;
typedef int ENDPOINT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_3__*,int,int ,int ) ;
 int VAR_11 ;
 TYPE_2__* FUNC_1 (int *,int ,unsigned int,int *) ;
 int FUNC_2 (TYPE_3__*,int ,unsigned int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,unsigned int,unsigned int,unsigned char const*,size_t,int *,size_t,int*,int ) ;

int FUNC_4(SSL *VAR_12, unsigned int VAR_13, unsigned int VAR_14,
                     const unsigned char *VAR_15, size_t VAR_16, X509 *VAR_17,
                     size_t VAR_18)
{
    int VAR_19;
    custom_ext_methods *VAR_20 = &VAR_12->cert->custext;
    custom_ext_method *VAR_21;
    ENDPOINT VAR_22 = VAR_0;

    if ((VAR_13 & (VAR_3 | VAR_6)) != 0)
        VAR_22 = VAR_12->server ? VAR_2 : VAR_1;

    VAR_21 = FUNC_1(VAR_20, VAR_22, VAR_14, ((void*)0));

    if (!VAR_21)
        return 1;


    if (!FUNC_2(VAR_12, VAR_21->context, VAR_13))
        return 1;

    if ((VAR_13 & (VAR_6
                    | VAR_8
                    | VAR_7)) != 0) {




        if ((VAR_21->ext_flags & VAR_5) == 0) {
            FUNC_0(VAR_12, VAR_11, VAR_9,
                     VAR_10);
            return 0;
        }
    }






    if ((VAR_13 & VAR_3) != 0)
        VAR_21->ext_flags |= VAR_4;


    if (!VAR_21->parse_cb)
        return 1;

    if (VAR_21->parse_cb(VAR_12, VAR_14, VAR_13, VAR_15, VAR_16, VAR_17, VAR_18,
                       &VAR_19, VAR_21->parse_arg) <= 0) {
        FUNC_0(VAR_12, VAR_19, VAR_9, VAR_10);
        return 0;
    }

    return 1;
}
