
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_6__ {int * tag; TYPE_1__* lctx; } ;
typedef TYPE_2__ isc_logconfig_t ;
struct TYPE_5__ {int mctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ,char const*) ;

isc_result_t
FUNC_4(isc_logconfig_t *VAR_2, const char *VAR_3) {
 FUNC_0(FUNC_1(VAR_2));

 if (VAR_3 != ((void*)0) && *VAR_3 != '\0') {
  if (VAR_2->tag != ((void*)0))
   FUNC_2(VAR_2->lctx->mctx, VAR_2->tag);
  VAR_2->tag = FUNC_3(VAR_2->lctx->mctx, VAR_3);
  if (VAR_2->tag == ((void*)0))
   return (VAR_0);

 } else {
  if (VAR_2->tag != ((void*)0))
   FUNC_2(VAR_2->lctx->mctx, VAR_2->tag);
  VAR_2->tag = ((void*)0);
 }

 return (VAR_1);
}
