
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fa_flags; } ;
typedef TYPE_1__ fileargs_t ;
typedef int cap_channel_t ;


 int * FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline cap_channel_t *
FUNC_2(fileargs_t *VAR_0, int *VAR_1)
{

 if (VAR_1 != ((void*)0)) {
  *VAR_1 = VAR_0->fa_flags;
 }
 FUNC_1(VAR_0);
 return (FUNC_0());
}
