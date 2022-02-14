
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int max_token; int mctx; scalar_t__ magic; struct TYPE_6__* data; int sources; } ;
typedef TYPE_1__ isc_lex_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_1__*,int) ;

void
FUNC_6(isc_lex_t **VAR_1) {
 isc_lex_t *VAR_2;





 FUNC_1(VAR_1 != ((void*)0));
 VAR_2 = *VAR_1;
 FUNC_1(FUNC_3(VAR_2));

 while (!FUNC_0(VAR_2->sources))
  FUNC_2(FUNC_4(VAR_2) == VAR_0);
 if (VAR_2->data != ((void*)0))
  FUNC_5(VAR_2->mctx, VAR_2->data, VAR_2->max_token + 1);
 VAR_2->magic = 0;
 FUNC_5(VAR_2->mctx, VAR_2, sizeof(*VAR_2));

 *VAR_1 = ((void*)0);
}
