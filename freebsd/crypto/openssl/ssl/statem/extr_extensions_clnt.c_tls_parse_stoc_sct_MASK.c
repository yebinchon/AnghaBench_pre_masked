
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int X509 ;
struct TYPE_7__ {int * scts; scalar_t__ scts_len; } ;
struct TYPE_9__ {TYPE_2__* cert; TYPE_1__ ext; int * ct_validation_callback; } ;
struct TYPE_8__ {int custext; } ;
typedef TYPE_3__ SSL ;
typedef int PACKET ;
typedef int ENDPOINT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_3__*,int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_6 (int *,int ,int ,int *) ;
 int FUNC_7 (TYPE_3__*,unsigned int,int ,int ,size_t,int *,size_t) ;

int FUNC_8(SSL *VAR_10, PACKET *VAR_11, unsigned int VAR_12, X509 *VAR_13,
                       size_t VAR_14)
{
    if (VAR_12 == VAR_5) {


        return 1;
    }






    if (VAR_10->ct_validation_callback != ((void*)0)) {
        size_t VAR_15 = FUNC_4(VAR_11);


        FUNC_0(VAR_10->ext.scts);
        VAR_10->ext.scts = ((void*)0);

        VAR_10->ext.scts_len = (uint16_t)VAR_15;
        if (VAR_15 > 0) {
            VAR_10->ext.scts = FUNC_1(VAR_15);
            if (VAR_10->ext.scts == ((void*)0)
                    || !FUNC_2(VAR_11, VAR_10->ext.scts, VAR_15)) {
                FUNC_5(VAR_10, VAR_3, VAR_6,
                         VAR_2);
                return 0;
            }
        }
    } else {
        ENDPOINT VAR_16 = (VAR_12 & VAR_4) != 0
                        ? VAR_1 : VAR_0;





        if (FUNC_6(&VAR_10->cert->custext, VAR_16,
                            VAR_9,
                            ((void*)0)) == ((void*)0)) {
            FUNC_5(VAR_10, VAR_8, VAR_6,
                     VAR_7);
            return 0;
        }

        if (!FUNC_7(VAR_10, VAR_12,
                             VAR_9,
                             FUNC_3(VAR_11), FUNC_4(VAR_11),
                             VAR_13, VAR_14)) {

            return 0;
        }
    }

    return 1;
}
