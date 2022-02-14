
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lockstate; int * sym_out; int * defobj_out; int flags; int ventry; int hash_gnu; int hash; int name; } ;
typedef TYPE_1__ SymLook ;



__attribute__((used)) static void
FUNC_0(SymLook *VAR_0, const SymLook *VAR_1)
{

 VAR_0->name = VAR_1->name;
 VAR_0->hash = VAR_1->hash;
 VAR_0->hash_gnu = VAR_1->hash_gnu;
 VAR_0->ventry = VAR_1->ventry;
 VAR_0->flags = VAR_1->flags;
 VAR_0->defobj_out = ((void*)0);
 VAR_0->sym_out = ((void*)0);
 VAR_0->lockstate = VAR_1->lockstate;
}
