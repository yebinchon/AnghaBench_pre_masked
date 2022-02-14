
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dids_list; } ;
typedef TYPE_1__ dt_idstack_t ;
typedef int dt_idhash_t ;
typedef int dt_ident_t ;


 int * FUNC_0 (int *,char const*) ;
 int * FUNC_1 (int *) ;

dt_ident_t *
FUNC_2(dt_idstack_t *VAR_0, const char *VAR_1)
{
 dt_idhash_t *VAR_2;
 dt_ident_t *VAR_3;

 for (VAR_2 = FUNC_1(&VAR_0->dids_list);
     VAR_2 != ((void*)0); VAR_2 = FUNC_1(VAR_2)) {
  if ((VAR_3 = FUNC_0(VAR_2, VAR_1)) != ((void*)0))
   return (VAR_3);
 }

 return (((void*)0));
}
