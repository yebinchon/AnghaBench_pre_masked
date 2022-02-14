
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshmac {scalar_t__ type; int * umac_ctx; int * hmac_ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct sshmac *VAR_2)
{
 if (VAR_2->type == VAR_0) {
  if (VAR_2->umac_ctx != ((void*)0))
   FUNC_2(VAR_2->umac_ctx);
 } else if (VAR_2->type == VAR_1) {
  if (VAR_2->umac_ctx != ((void*)0))
   FUNC_1(VAR_2->umac_ctx);
 } else if (VAR_2->hmac_ctx != ((void*)0))
  FUNC_0(VAR_2->hmac_ctx);
 VAR_2->hmac_ctx = ((void*)0);
 VAR_2->umac_ctx = ((void*)0);
}
