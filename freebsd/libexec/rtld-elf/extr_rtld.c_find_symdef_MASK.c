
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {char* name; } ;
typedef TYPE_1__ Ver_Entry ;
struct TYPE_22__ {int st_name; int st_info; } ;
struct TYPE_21__ {unsigned long dynsymcount; char* strtab; int path; TYPE_5__* symtab; } ;
struct TYPE_20__ {TYPE_4__ const* obj; TYPE_5__ const* sym; } ;
struct TYPE_19__ {int flags; TYPE_4__ const* defobj_out; TYPE_5__* sym_out; int * lockstate; TYPE_1__* ventry; } ;
typedef TYPE_2__ SymLook ;
typedef TYPE_3__ SymCache ;
typedef int RtldLockState ;
typedef TYPE_4__ const Obj_Entry ;
typedef TYPE_5__ Elf_Sym ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,int ,...) ;
 TYPE_1__* FUNC_3 (TYPE_4__ const*,unsigned long) ;
 TYPE_4__ const* VAR_3 ;
 TYPE_4__ const VAR_4 ;
 TYPE_5__ VAR_5 ;
 int FUNC_4 (TYPE_2__*,TYPE_4__ const*) ;
 int FUNC_5 (TYPE_2__*,char const*) ;

const Elf_Sym *
FUNC_6(unsigned long VAR_6, const Obj_Entry *VAR_7,
    const Obj_Entry **VAR_8, int VAR_9, SymCache *VAR_10,
    RtldLockState *VAR_11)
{
    const Elf_Sym *VAR_12;
    const Elf_Sym *VAR_13;
    const Obj_Entry *VAR_14;
    const Ver_Entry *VAR_15;
    SymLook VAR_16;
    const char *VAR_17;
    int VAR_18;





    if (VAR_6 >= VAR_7->dynsymcount)
 return ((void*)0);
    if (VAR_10 != ((void*)0) && VAR_10[VAR_6].sym != ((void*)0)) {
 *VAR_8 = VAR_10[VAR_6].obj;
 return VAR_10[VAR_6].sym;
    }

    VAR_12 = VAR_7->symtab + VAR_6;
    VAR_17 = VAR_7->strtab + VAR_12->st_name;
    VAR_13 = ((void*)0);
    VAR_14 = ((void*)0);
    VAR_15 = ((void*)0);
    if (FUNC_0(VAR_12->st_info) != VAR_0) {
 if (FUNC_1(VAR_12->st_info) == VAR_2) {
     FUNC_2("%s: Bogus symbol table entry %lu", VAR_7->path,
  VAR_6);
 }
 FUNC_5(&VAR_16, VAR_17);
 VAR_16.flags = VAR_9;
 VAR_15 = VAR_16.ventry = FUNC_3(VAR_7, VAR_6);
 VAR_16.lockstate = VAR_11;
 VAR_18 = FUNC_4(&VAR_16, VAR_7);
 if (VAR_18 == 0) {
     VAR_13 = VAR_16.sym_out;
     VAR_14 = VAR_16.defobj_out;
 }
    } else {
 VAR_13 = VAR_12;
 VAR_14 = VAR_7;
    }





    if (VAR_13 == ((void*)0) && FUNC_0(VAR_12->st_info) == VAR_1) {
 VAR_13 = &VAR_5;
 VAR_14 = VAR_3;
    }

    if (VAR_13 != ((void*)0)) {
 *VAR_8 = VAR_14;

 if (VAR_10 != ((void*)0)) {
     VAR_10[VAR_6].sym = VAR_13;
     VAR_10[VAR_6].obj = VAR_14;
 }
    } else {
 if (VAR_7 != &VAR_4)
     FUNC_2("%s: Undefined symbol \"%s%s%s\"", VAR_7->path, VAR_17,
       VAR_15 != ((void*)0) ? "@" : "", VAR_15 != ((void*)0) ? VAR_15->name : "");
    }
    return VAR_13;
}
