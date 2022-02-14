
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* session; TYPE_1__* s3; scalar_t__ hit; int server; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_3__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(SSL *VAR_5, unsigned int VAR_6, int VAR_7)
{
    if (!VAR_5->server && VAR_5->hit) {




        if (!(VAR_5->s3->flags & VAR_4) !=
            !(VAR_5->session->flags & VAR_3)) {
            FUNC_0(VAR_5, VAR_0, VAR_1,
                     VAR_2);
            return 0;
        }
    }

    return 1;
}
