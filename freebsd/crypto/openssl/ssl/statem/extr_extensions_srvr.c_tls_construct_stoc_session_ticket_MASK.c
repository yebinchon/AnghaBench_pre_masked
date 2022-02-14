
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509 ;
typedef int WPACKET ;
struct TYPE_6__ {scalar_t__ ticket_expected; } ;
struct TYPE_7__ {TYPE_1__ ext; } ;
typedef TYPE_2__ SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;

EXT_RETURN FUNC_3(SSL *VAR_7, WPACKET *VAR_8,
                                             unsigned int VAR_9, X509 *VAR_10,
                                             size_t VAR_11)
{
    if (!VAR_7->ext.ticket_expected || !FUNC_2(VAR_7)) {
        VAR_7->ext.ticket_expected = 0;
        return VAR_2;
    }

    if (!FUNC_1(VAR_8, VAR_6)
            || !FUNC_1(VAR_8, 0)) {
        FUNC_0(VAR_7, VAR_4,
                 VAR_5, VAR_0);
        return VAR_1;
    }

    return VAR_3;
}
