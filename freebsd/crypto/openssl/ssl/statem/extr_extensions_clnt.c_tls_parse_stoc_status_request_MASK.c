
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_7__ {scalar_t__ status_type; int status_expected; } ;
struct TYPE_8__ {TYPE_1__ ext; } ;
typedef TYPE_2__ SSL ;
typedef int PACKET ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_2__*,int *) ;

int FUNC_4(SSL *VAR_6, PACKET *VAR_7, unsigned int VAR_8,
                                  X509 *VAR_9, size_t VAR_10)
{
    if (VAR_8 == VAR_2) {


        return 1;
    }





    if (VAR_6->ext.status_type != VAR_5) {
        FUNC_2(VAR_6, VAR_1,
                 VAR_3, VAR_4);
        return 0;
    }
    if (!FUNC_1(VAR_6) && FUNC_0(VAR_7) > 0) {
        FUNC_2(VAR_6, VAR_0,
                 VAR_3, VAR_4);
        return 0;
    }

    if (FUNC_1(VAR_6)) {



        if (VAR_10 != 0)
            return 1;


        return FUNC_3(VAR_6, VAR_7);
    }


    VAR_6->ext.status_expected = 1;

    return 1;
}
