
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* d1; } ;
struct TYPE_5__ {size_t cookie_len; int cookie; } ;
typedef TYPE_2__ SSL ;
typedef int PACKET ;
typedef int MSG_PROCESS_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *) ;
 size_t FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ) ;

MSG_PROCESS_RETURN FUNC_5(SSL *VAR_7, PACKET *VAR_8)
{
    size_t VAR_9;
    PACKET VAR_10;

    if (!FUNC_1(VAR_8, 2)
        || !FUNC_2(VAR_8, &VAR_10)) {
        FUNC_4(VAR_7, VAR_2, VAR_4,
                 VAR_5);
        return VAR_0;
    }

    VAR_9 = FUNC_3(&VAR_10);
    if (VAR_9 > sizeof(VAR_7->d1->cookie)) {
        FUNC_4(VAR_7, VAR_3, VAR_4,
                 VAR_6);
        return VAR_0;
    }

    if (!FUNC_0(&VAR_10, VAR_7->d1->cookie, VAR_9)) {
        FUNC_4(VAR_7, VAR_2, VAR_4,
                 VAR_5);
        return VAR_0;
    }
    VAR_7->d1->cookie_len = VAR_9;

    return VAR_1;
}
