
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {unsigned long* buckets; size_t nbuckets; unsigned long* chains; unsigned long nchains; } ;
struct TYPE_10__ {size_t hash; TYPE_3__ const* defobj_out; int * sym_out; } ;
struct TYPE_9__ {int vcount; int * vsymp; int * sym_out; } ;
typedef TYPE_1__ Sym_Match_Result ;
typedef TYPE_2__ SymLook ;
typedef TYPE_3__ Obj_Entry ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_3__ const*,TYPE_1__*,unsigned long) ;

__attribute__((used)) static int
FUNC_1(SymLook *VAR_2, const Obj_Entry *VAR_3)
{
 unsigned long VAR_4;
 Sym_Match_Result VAR_5;

 VAR_5.sym_out = ((void*)0);
 VAR_5.vsymp = ((void*)0);
 VAR_5.vcount = 0;

 for (VAR_4 = VAR_3->buckets[VAR_2->hash % VAR_3->nbuckets];
     VAR_4 != VAR_1; VAR_4 = VAR_3->chains[VAR_4]) {
  if (VAR_4 >= VAR_3->nchains)
   return (VAR_0);

  if (FUNC_0(VAR_2, VAR_3, &VAR_5, VAR_4)) {
   VAR_2->sym_out = VAR_5.sym_out;
   VAR_2->defobj_out = VAR_3;
   return (0);
  }
 }
 if (VAR_5.vcount == 1) {
  VAR_2->sym_out = VAR_5.vsymp;
  VAR_2->defobj_out = VAR_3;
  return (0);
 }
 return (VAR_0);
}
