
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_4__ {unsigned int version; } ;
typedef TYPE_1__ SSL ;
typedef int PACKET ;


 int FUNC_0 (int *,unsigned int*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 unsigned int VAR_6 ;

int FUNC_3(SSL *VAR_7, PACKET *VAR_8, unsigned int VAR_9,
                                      X509 *VAR_10, size_t VAR_11)
{
    unsigned int VAR_12;

    if (!FUNC_0(VAR_8, &VAR_12)
            || FUNC_1(VAR_8) != 0) {
        FUNC_2(VAR_7, VAR_0,
                 VAR_3,
                 VAR_5);
        return 0;
    }





    if (VAR_12 != VAR_6) {
        FUNC_2(VAR_7, VAR_1,
                 VAR_3,
                 VAR_4);
        return 0;
    }


    if (VAR_9 == VAR_2)
        return 1;


    VAR_7->version = VAR_12;

    return 1;
}
