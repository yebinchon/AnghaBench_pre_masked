
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int WPACKET ;
struct TYPE_7__ {TYPE_1__* session; } ;
struct TYPE_6__ {int session_id_length; int session_id; } ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int *,int ,unsigned char*) ;

__attribute__((used)) static int FUNC_4(SSL *VAR_3, WPACKET *VAR_4, uint32_t VAR_5,
                                     unsigned char *VAR_6)
{
    if (!FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6)) {

        return 0;
    }

    if (!FUNC_2(VAR_4, VAR_3->session->session_id,
                        VAR_3->session->session_id_length)
            || !FUNC_1(VAR_4)) {
        FUNC_0(VAR_3, VAR_1, VAR_2,
                 VAR_0);
        return 0;
    }

    return 1;
}
