
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_6__ {TYPE_1__* param; } ;
typedef TYPE_2__ X509_STORE_CTX ;
typedef int X509 ;
struct TYPE_5__ {int flags; int check_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int *,int,int ) ;

int FUNC_4(X509_STORE_CTX *VAR_6, X509 *VAR_7, int VAR_8)
{
    time_t *VAR_9;
    int VAR_10;

    if (VAR_6->param->flags & VAR_5)
        VAR_9 = &VAR_6->param->check_time;
    else if (VAR_6->param->flags & VAR_4)
        return 1;
    else
        VAR_9 = ((void*)0);

    VAR_10 = FUNC_0(FUNC_2(VAR_7), VAR_9);
    if (VAR_10 >= 0 && VAR_8 < 0)
        return 0;
    if (VAR_10 == 0 && !FUNC_3(VAR_6, VAR_7, VAR_8,
                                  VAR_3))
        return 0;
    if (VAR_10 > 0 && !FUNC_3(VAR_6, VAR_7, VAR_8, VAR_1))
        return 0;

    VAR_10 = FUNC_0(FUNC_1(VAR_7), VAR_9);
    if (VAR_10 <= 0 && VAR_8 < 0)
        return 0;
    if (VAR_10 == 0 && !FUNC_3(VAR_6, VAR_7, VAR_8,
                                  VAR_2))
        return 0;
    if (VAR_10 < 0 && !FUNC_3(VAR_6, VAR_7, VAR_8, VAR_0))
        return 0;
    return 1;
}
