
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bufsize; int mctx; scalar_t__ magic; struct TYPE_6__* buf; } ;
typedef TYPE_1__ isc_interfaceiter_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*,int) ;

void
FUNC_4(isc_interfaceiter_t **VAR_0)
{
 isc_interfaceiter_t *VAR_1;
 FUNC_0(VAR_0 != ((void*)0));
 VAR_1 = *VAR_0;
 FUNC_0(FUNC_1(VAR_1));

 FUNC_2(VAR_1);
 if (VAR_1->buf != ((void*)0))
  FUNC_3(VAR_1->mctx, VAR_1->buf, VAR_1->bufsize);

 VAR_1->magic = 0;
 FUNC_3(VAR_1->mctx, VAR_1, sizeof(*VAR_1));
 *VAR_0 = ((void*)0);
}
