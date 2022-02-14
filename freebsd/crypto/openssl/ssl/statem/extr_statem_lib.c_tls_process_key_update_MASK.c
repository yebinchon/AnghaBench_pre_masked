
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int key_update; int rlayer; } ;
typedef TYPE_1__ SSL ;
typedef int PACKET ;
typedef int MSG_PROCESS_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned int*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

MSG_PROCESS_RETURN FUNC_5(SSL *VAR_10, PACKET *VAR_11)
{
    unsigned int VAR_12;





    if (FUNC_2(&VAR_10->rlayer)) {
        FUNC_3(VAR_10, VAR_4, VAR_5,
                 VAR_9);
        return VAR_0;
    }

    if (!FUNC_0(VAR_11, &VAR_12)
            || FUNC_1(VAR_11) != 0) {
        FUNC_3(VAR_10, VAR_2, VAR_5,
                 VAR_8);
        return VAR_0;
    }





    if (VAR_12 != VAR_6
            && VAR_12 != VAR_7) {
        FUNC_3(VAR_10, VAR_3, VAR_5,
                 VAR_8);
        return VAR_0;
    }






    if (VAR_12 == VAR_7)
        VAR_10->key_update = VAR_6;

    if (!FUNC_4(VAR_10, 0)) {

        return VAR_0;
    }

    return VAR_1;
}
