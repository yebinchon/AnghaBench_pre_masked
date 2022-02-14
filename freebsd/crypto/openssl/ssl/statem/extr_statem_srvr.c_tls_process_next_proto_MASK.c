
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char npn_len; int npn; } ;
struct TYPE_6__ {TYPE_1__ ext; } ;
typedef TYPE_2__ SSL ;
typedef int PACKET ;
typedef int MSG_PROCESS_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,size_t*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;

MSG_PROCESS_RETURN FUNC_4(SSL *VAR_7, PACKET *VAR_8)
{
    PACKET VAR_9, VAR_10;
    size_t VAR_11;
    if (!FUNC_0(VAR_8, &VAR_9)
        || !FUNC_0(VAR_8, &VAR_10)
        || FUNC_2(VAR_8) > 0) {
        FUNC_3(VAR_7, VAR_3, VAR_5,
                 VAR_6);
        return VAR_2;
    }

    if (!FUNC_1(&VAR_9, &VAR_7->ext.npn, &VAR_11)) {
        VAR_7->ext.npn_len = 0;
        FUNC_3(VAR_7, VAR_4, VAR_5,
                 VAR_0);
        return VAR_2;
    }

    VAR_7->ext.npn_len = (unsigned char)VAR_11;

    return VAR_1;
}
