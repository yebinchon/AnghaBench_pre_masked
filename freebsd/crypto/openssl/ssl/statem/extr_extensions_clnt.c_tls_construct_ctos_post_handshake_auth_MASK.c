
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509 ;
typedef int WPACKET ;
struct TYPE_4__ {int post_handshake_auth; int pha_enabled; } ;
typedef TYPE_1__ SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

EXT_RETURN FUNC_4(SSL *VAR_8, WPACKET *VAR_9,
                                                  unsigned int VAR_10,
                                                  X509 *VAR_11, size_t VAR_12)
{

    if (!VAR_8->pha_enabled)
        return VAR_2;


    if (!FUNC_2(VAR_9, VAR_7)
            || !FUNC_3(VAR_9)
            || !FUNC_1(VAR_9)) {
        FUNC_0(VAR_8, VAR_4,
                 VAR_5,
                 VAR_0);
        return VAR_1;
    }

    VAR_8->post_handshake_auth = VAR_6;

    return VAR_3;



}
