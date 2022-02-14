
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int options; scalar_t__ renegotiate; int server; } ;
typedef TYPE_1__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(SSL *VAR_5, unsigned int VAR_6, int VAR_7)
{
    if (!VAR_5->server) {




        if (!(VAR_5->options & VAR_3)
                && !(VAR_5->options & VAR_2)
                && !VAR_7) {
            FUNC_0(VAR_5, VAR_0, VAR_1,
                     VAR_4);
            return 0;
        }

        return 1;
    }


    if (VAR_5->renegotiate
            && !(VAR_5->options & VAR_2)
            && !VAR_7) {
        FUNC_0(VAR_5, VAR_0, VAR_1,
                 VAR_4);
        return 0;
    }


    return 1;
}
