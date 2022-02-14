
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {int path; } ;
struct TYPE_17__ {int st_name; int st_info; int st_shndx; int st_value; } ;
struct TYPE_16__ {char* strtab; int* versyms; size_t vernum; TYPE_1__* vertab; int path; TYPE_6__* symtab; } ;
struct TYPE_15__ {int flags; char const* name; TYPE_2__* ventry; } ;
struct TYPE_14__ {TYPE_6__ const* sym_out; int vcount; TYPE_6__ const* vsymp; } ;
struct TYPE_13__ {char const* name; scalar_t__ hash; } ;
struct TYPE_12__ {scalar_t__ hash; char const* name; } ;
typedef TYPE_3__ Sym_Match_Result ;
typedef TYPE_4__ SymLook ;
typedef TYPE_5__ Obj_Entry ;
typedef size_t Elf_Versym ;
typedef TYPE_6__ Elf_Sym ;


 int const FUNC_0 (int ) ;
 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (int) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int ,char*,...) ;
 TYPE_8__ VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_5__ const*,char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;

__attribute__((used)) static bool
FUNC_5(SymLook *VAR_6, const Obj_Entry *VAR_7, Sym_Match_Result *VAR_8,
    const unsigned long VAR_9)
{
 Elf_Versym VAR_10;
 const Elf_Sym *VAR_11;
 const char *VAR_12;

 VAR_11 = VAR_7->symtab + VAR_9;
 VAR_12 = VAR_7->strtab + VAR_11->st_name;

 switch (FUNC_0(VAR_11->st_info)) {
 case 132:
 case 130:
 case 129:
 case 133:
 case 131:
  if (VAR_11->st_value == 0)
   return (0);

 case 128:
  if (VAR_11->st_shndx != VAR_0)
   break;

  else if (((VAR_6->flags & VAR_2) == 0) &&
      (FUNC_0(VAR_11->st_info) == 132))
   break;


 default:
  return (0);
 }
 if (VAR_6->name[0] != VAR_12[0] || FUNC_4(VAR_6->name, VAR_12) != 0)
  return (0);

 if (VAR_6->ventry == ((void*)0)) {
  if (VAR_7->versyms != ((void*)0)) {
   VAR_10 = FUNC_1(VAR_7->versyms[VAR_9]);
   if (VAR_10 > VAR_7->vernum) {
    FUNC_2(
        "%s: symbol %s references wrong version %d",
        VAR_7->path, VAR_7->strtab + VAR_9, VAR_10);
    return (0);
   }
   if ((VAR_6->flags & VAR_1) == 0 &&
       VAR_10 == VAR_3) {
    VAR_8->sym_out = VAR_11;
    return (1);
   }
   else if (VAR_10 >= VAR_3) {
    if ((VAR_7->versyms[VAR_9] & VAR_4)
        == 0) {
     if (VAR_8->vsymp == ((void*)0))
      VAR_8->vsymp = VAR_11;
     VAR_8->vcount++;
    }
    return (0);
   }
  }
  VAR_8->sym_out = VAR_11;
  return (1);
 }
 if (VAR_7->versyms == ((void*)0)) {
  if (FUNC_3(VAR_7, VAR_6->ventry->name)) {
   FUNC_2("%s: object %s should provide version %s "
       "for symbol %s", VAR_5.path, VAR_7->path,
       VAR_6->ventry->name, VAR_7->strtab + VAR_9);
   return (0);
  }
 } else {
  VAR_10 = FUNC_1(VAR_7->versyms[VAR_9]);
  if (VAR_10 > VAR_7->vernum) {
   FUNC_2("%s: symbol %s references wrong version %d",
       VAR_7->path, VAR_7->strtab + VAR_9, VAR_10);
   return (0);
  }
  if (VAR_7->vertab[VAR_10].hash != VAR_6->ventry->hash ||
      FUNC_4(VAR_7->vertab[VAR_10].name, VAR_6->ventry->name)) {
   if ((VAR_6->flags & VAR_1) ||
       (VAR_10 >= VAR_3) ||
       (VAR_7->versyms[VAR_9] & VAR_4))
    return (0);
  }
 }
 VAR_8->sym_out = VAR_11;
 return (1);
}
