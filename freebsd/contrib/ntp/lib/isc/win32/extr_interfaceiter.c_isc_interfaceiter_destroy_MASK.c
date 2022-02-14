
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ipaasize; int buf4size; int buf6size; int mctx; scalar_t__ magic; struct TYPE_5__* buf6; struct TYPE_5__* buf4; struct TYPE_5__* ipaa; } ;
typedef TYPE_1__ isc_interfaceiter_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void
FUNC_3(isc_interfaceiter_t **VAR_2) {
 isc_interfaceiter_t *VAR_3;

 FUNC_0(VAR_2 != ((void*)0));
 VAR_3 = *VAR_2;
 FUNC_0(FUNC_1(VAR_3));
 FUNC_0(VAR_1);

 if (VAR_0) {
  FUNC_0(((void*)0) == VAR_3->buf4);
  FUNC_0(((void*)0) == VAR_3->buf4);
  if (VAR_3->ipaa != ((void*)0))
   FUNC_2(VAR_3->mctx, VAR_3->ipaa, VAR_3->ipaasize);
 } else {
  FUNC_0(((void*)0) == VAR_3->ipaa);
  if (VAR_3->buf4 != ((void*)0))
   FUNC_2(VAR_3->mctx, VAR_3->buf4, VAR_3->buf4size);
  if (VAR_3->buf6 != ((void*)0))
   FUNC_2(VAR_3->mctx, VAR_3->buf6, VAR_3->buf6size);
 }

 VAR_3->magic = 0;
 FUNC_2(VAR_3->mctx, VAR_3, sizeof(*VAR_3));
 *VAR_2 = ((void*)0);
}
