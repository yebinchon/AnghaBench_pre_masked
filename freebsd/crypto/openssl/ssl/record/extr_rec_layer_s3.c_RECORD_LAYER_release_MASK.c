
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ numwpipes; int rrec; int s; int rbuf; } ;
typedef TYPE_1__ RECORD_LAYER ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(RECORD_LAYER *VAR_1)
{
    if (FUNC_0(&VAR_1->rbuf))
        FUNC_2(VAR_1->s);
    if (VAR_1->numwpipes > 0)
        FUNC_3(VAR_1->s);
    FUNC_1(VAR_1->rrec, VAR_0);
}
