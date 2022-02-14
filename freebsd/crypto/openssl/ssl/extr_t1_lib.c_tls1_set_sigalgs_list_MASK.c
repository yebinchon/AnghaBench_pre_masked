
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sigalgcnt; int sigalgs; } ;
typedef TYPE_1__ sig_cb_st ;
typedef int CERT ;


 int FUNC_0 (char const*,char,int,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,scalar_t__,int) ;

int FUNC_2(CERT *VAR_1, const char *VAR_2, int VAR_3)
{
    sig_cb_st VAR_4;
    VAR_4.sigalgcnt = 0;
    if (!FUNC_0(VAR_2, ':', 1, VAR_0, &VAR_4))
        return 0;
    if (VAR_1 == ((void*)0))
        return 1;
    return FUNC_1(VAR_1, VAR_4.sigalgs, VAR_4.sigalgcnt, VAR_3);
}
