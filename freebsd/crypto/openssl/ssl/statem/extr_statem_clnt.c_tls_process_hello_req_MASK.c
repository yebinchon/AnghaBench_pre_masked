
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int options; } ;
typedef TYPE_1__ SSL ;
typedef int PACKET ;
typedef int MSG_PROCESS_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;

MSG_PROCESS_RETURN FUNC_6(SSL *VAR_8, PACKET *VAR_9)
{
    if (FUNC_0(VAR_9) > 0) {

        FUNC_4(VAR_8, VAR_3, VAR_5,
                 VAR_7);
        return VAR_0;
    }

    if ((VAR_8->options & VAR_6)) {
        FUNC_5(VAR_8, VAR_2, VAR_4);
        return VAR_1;
    }
    if (FUNC_1(VAR_8))
        FUNC_2(VAR_8);
    else
        FUNC_3(VAR_8);

    return VAR_1;
}
