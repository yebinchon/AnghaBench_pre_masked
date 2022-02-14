
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int in_init; scalar_t__ state; scalar_t__ enc_write_state; } ;
struct TYPE_6__ {TYPE_1__ statem; } ;
typedef TYPE_2__ SSL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,char const*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

void FUNC_2(SSL *VAR_5, int VAR_6, int VAR_7, int VAR_8, const char *VAR_9,
                       int VAR_10)
{
    FUNC_0(VAR_1, VAR_7, VAR_8, VAR_9, VAR_10);

    if (VAR_5->statem.in_init && VAR_5->statem.state == VAR_2)
      return;
    VAR_5->statem.in_init = 1;
    VAR_5->statem.state = VAR_2;
    if (VAR_6 != VAR_4
            && VAR_5->statem.enc_write_state != VAR_0)
        FUNC_1(VAR_5, VAR_3, VAR_6);
}
