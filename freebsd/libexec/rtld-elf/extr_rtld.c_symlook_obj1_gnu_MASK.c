
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {unsigned int* bloom_gnu; size_t maskwords_bm_gnu; size_t shift2_gnu; size_t* buckets_gnu; size_t nbuckets_gnu; size_t* chain_zero_gnu; } ;
struct TYPE_10__ {size_t hash_gnu; TYPE_3__ const* defobj_out; int * sym_out; } ;
struct TYPE_9__ {int vcount; int * vsymp; int * sym_out; } ;
typedef TYPE_1__ Sym_Match_Result ;
typedef TYPE_2__ SymLook ;
typedef TYPE_3__ Obj_Entry ;
typedef unsigned int Elf_Addr ;
typedef size_t Elf32_Word ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_3__ const*,TYPE_1__*,unsigned long) ;

__attribute__((used)) static int
FUNC_1(SymLook *VAR_2, const Obj_Entry *VAR_3)
{
 Elf_Addr VAR_4;
 const Elf32_Word *VAR_5;
 Elf32_Word VAR_6;
 Sym_Match_Result VAR_7;
 unsigned int VAR_8, VAR_9;
 unsigned long VAR_10;

 VAR_7.sym_out = ((void*)0);
 VAR_7.vsymp = ((void*)0);
 VAR_7.vcount = 0;


 VAR_4 = VAR_3->bloom_gnu[(VAR_2->hash_gnu / VAR_1) &
     VAR_3->maskwords_bm_gnu];


 VAR_8 = VAR_2->hash_gnu & (VAR_1 - 1);
 VAR_9 = ((VAR_2->hash_gnu >> VAR_3->shift2_gnu) & (VAR_1 - 1));


 if (((VAR_4 >> VAR_8) & (VAR_4 >> VAR_9) & 1) == 0)
  return (VAR_0);


 VAR_6 = VAR_3->buckets_gnu[VAR_2->hash_gnu % VAR_3->nbuckets_gnu];
 if (VAR_6 == 0)
  return (VAR_0);
 VAR_5 = &VAR_3->chain_zero_gnu[VAR_6];
 do {
  if (((*VAR_5 ^ VAR_2->hash_gnu) >> 1) == 0) {
   VAR_10 = VAR_5 - VAR_3->chain_zero_gnu;
   if (FUNC_0(VAR_2, VAR_3, &VAR_7, VAR_10)) {
    VAR_2->sym_out = VAR_7.sym_out;
    VAR_2->defobj_out = VAR_3;
    return (0);
   }
  }
 } while ((*VAR_5++ & 1) == 0);
 if (VAR_7.vcount == 1) {
  VAR_2->sym_out = VAR_7.vsymp;
  VAR_2->defobj_out = VAR_3;
  return (0);
 }
 return (VAR_0);
}
