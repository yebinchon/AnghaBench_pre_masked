
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rrec; TYPE_1__* s; } ;
struct TYPE_5__ {int rlayer; } ;
typedef TYPE_1__ SSL ;
typedef TYPE_2__ RECORD_LAYER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

void FUNC_2(RECORD_LAYER *VAR_1, SSL *VAR_2)
{
    VAR_1->s = VAR_2;
    FUNC_0(&VAR_2->rlayer);
    FUNC_1(VAR_1->rrec, VAR_0);
}
