
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_5__ {size_t npn_len; int npn; } ;
struct TYPE_6__ {TYPE_1__ ext; } ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (int *,size_t,unsigned char**) ;
 int FUNC_2 (int *,int ,size_t) ;
 int FUNC_3 (unsigned char*,int ,size_t) ;

int FUNC_4(SSL *VAR_3, WPACKET *VAR_4)
{
    size_t VAR_5, VAR_6;
    unsigned char *VAR_7 = ((void*)0);

    VAR_5 = VAR_3->ext.npn_len;
    VAR_6 = 32 - ((VAR_5 + 2) % 32);

    if (!FUNC_2(VAR_4, VAR_3->ext.npn, VAR_5)
            || !FUNC_1(VAR_4, VAR_6, &VAR_7)) {
        FUNC_0(VAR_3, VAR_1, VAR_2,
                 VAR_0);
        return 0;
    }

    FUNC_3(VAR_7, 0, VAR_6);

    return 1;
}
