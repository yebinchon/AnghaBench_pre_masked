
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fa_magic; int fa_fdflags; int fa_cache; int * fa_chann; } ;
typedef TYPE_1__ fileargs_t ;
typedef int cap_channel_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

cap_channel_t *
FUNC_4(fileargs_t *VAR_1, int *VAR_2)
{
 cap_channel_t *VAR_3;

 if (VAR_1 == ((void*)0))
  return (((void*)0));

 FUNC_0(VAR_1->fa_magic == VAR_0);

 VAR_3 = VAR_1->fa_chann;
 if (VAR_2 != ((void*)0)) {
  *VAR_2 = VAR_1->fa_fdflags;
 }

 FUNC_3(VAR_1->fa_cache);
 FUNC_1(&VAR_1->fa_magic, sizeof(VAR_1->fa_magic));
 FUNC_2(VAR_1);

 return (VAR_3);
}
