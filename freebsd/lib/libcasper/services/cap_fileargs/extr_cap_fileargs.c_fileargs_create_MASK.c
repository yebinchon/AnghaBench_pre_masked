
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fa_fdflags; int fa_magic; int * fa_chann; int * fa_cache; } ;
typedef TYPE_1__ fileargs_t ;
typedef int cap_channel_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static fileargs_t *
FUNC_1(cap_channel_t *VAR_1, int VAR_2)
{
 fileargs_t *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3));
 if (VAR_3 != ((void*)0)) {
  VAR_3->fa_cache = ((void*)0);
  VAR_3->fa_chann = VAR_1;
  VAR_3->fa_fdflags = VAR_2;
  VAR_3->fa_magic = VAR_0;
 }

 return (VAR_3);
}
