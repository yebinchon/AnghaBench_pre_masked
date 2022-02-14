
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* name; int hash_gnu; int hash; } ;
typedef TYPE_1__ SymLook ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;

void
FUNC_3(SymLook *VAR_0, const char *VAR_1)
{

 FUNC_0(VAR_0, sizeof(*VAR_0));
 VAR_0->name = VAR_1;
 VAR_0->hash = FUNC_1(VAR_1);
 VAR_0->hash_gnu = FUNC_2(VAR_1);
}
