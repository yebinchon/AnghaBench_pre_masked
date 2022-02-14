
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fa_magic; int * fa_chann; int fa_cache; } ;
typedef TYPE_1__ fileargs_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

void
FUNC_5(fileargs_t *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return;

 FUNC_0(VAR_1->fa_magic == VAR_0);

 FUNC_4(VAR_1->fa_cache);
 if (VAR_1->fa_chann != ((void*)0)) {
  FUNC_1(VAR_1->fa_chann);
 }
 FUNC_2(&VAR_1->fa_magic, sizeof(VAR_1->fa_magic));
 FUNC_3(VAR_1);
}
