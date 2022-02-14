
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int Ver_Entry ;
struct TYPE_18__ {int flags; int * file; int * name; int hash; } ;
struct TYPE_17__ {int vda_name; } ;
struct TYPE_16__ {scalar_t__ vd_version; scalar_t__ vd_next; int vd_flags; int vd_aux; int vd_hash; int vd_ndx; } ;
struct TYPE_15__ {int vna_other; scalar_t__ vna_next; int vna_name; int vna_hash; } ;
struct TYPE_14__ {scalar_t__ vn_version; int vn_aux; scalar_t__ vn_next; int vn_file; } ;
struct TYPE_13__ {int ver_checked; int vernum; TYPE_6__* vertab; int * strtab; TYPE_2__* verneed; TYPE_4__* verdef; int path; } ;
typedef TYPE_1__ Obj_Entry ;
typedef TYPE_2__ Elf_Verneed ;
typedef TYPE_3__ Elf_Vernaux ;
typedef TYPE_4__ Elf_Verdef ;
typedef TYPE_5__ Elf_Verdaux ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_1__ const*,TYPE_3__ const*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int *) ;
 TYPE_6__* FUNC_6 (int,int) ;

__attribute__((used)) static int
FUNC_7(Obj_Entry *VAR_5)
{
    const Elf_Verneed *VAR_6;
    const Elf_Verdef *VAR_7;
    const Elf_Verdaux *VAR_8;
    const Elf_Vernaux *VAR_9;
    const Obj_Entry *VAR_10;
    int VAR_11, VAR_12;

    if (VAR_5->ver_checked)
 return (0);
    VAR_5->ver_checked = 1;

    VAR_11 = 0;





    VAR_6 = VAR_5->verneed;
    while (VAR_6 != ((void*)0)) {
 if (VAR_6->vn_version != VAR_3) {
     FUNC_2("%s: Unsupported version %d of Elf_Verneed entry",
  VAR_5->path, VAR_6->vn_version);
     return (-1);
 }
 VAR_9 = (const Elf_Vernaux *)((const char *)VAR_6 + VAR_6->vn_aux);
 for (;;) {
     VAR_12 = FUNC_1(VAR_9->vna_other);
     if (VAR_12 > VAR_11)
  VAR_11 = VAR_12;
     if (VAR_9->vna_next == 0)
   break;
     VAR_9 = (const Elf_Vernaux *)((const char *)VAR_9 + VAR_9->vna_next);
 }
 if (VAR_6->vn_next == 0)
     break;
 VAR_6 = (const Elf_Verneed *)((const char *)VAR_6 + VAR_6->vn_next);
    }

    VAR_7 = VAR_5->verdef;
    while (VAR_7 != ((void*)0)) {
 if (VAR_7->vd_version != VAR_0) {
     FUNC_2("%s: Unsupported version %d of Elf_Verdef entry",
  VAR_5->path, VAR_7->vd_version);
     return (-1);
 }
 VAR_12 = FUNC_0(VAR_7->vd_ndx);
 if (VAR_12 > VAR_11)
  VAR_11 = VAR_12;
 if (VAR_7->vd_next == 0)
     break;
 VAR_7 = (const Elf_Verdef *)((const char *)VAR_7 + VAR_7->vd_next);
    }

    if (VAR_11 == 0)
 return (0);






    VAR_5->vernum = VAR_11 + 1;
    VAR_5->vertab = FUNC_6(VAR_5->vernum, sizeof(Ver_Entry));

    VAR_7 = VAR_5->verdef;
    while (VAR_7 != ((void*)0)) {
 if ((VAR_7->vd_flags & VAR_1) == 0) {
     VAR_12 = FUNC_0(VAR_7->vd_ndx);
     FUNC_3(VAR_12 <= VAR_11);
     VAR_8 = (const Elf_Verdaux *)((const char *)VAR_7 + VAR_7->vd_aux);
     VAR_5->vertab[VAR_12].hash = VAR_7->vd_hash;
     VAR_5->vertab[VAR_12].name = VAR_5->strtab + VAR_8->vda_name;
     VAR_5->vertab[VAR_12].file = ((void*)0);
     VAR_5->vertab[VAR_12].flags = 0;
 }
 if (VAR_7->vd_next == 0)
     break;
 VAR_7 = (const Elf_Verdef *)((const char *)VAR_7 + VAR_7->vd_next);
    }

    VAR_6 = VAR_5->verneed;
    while (VAR_6 != ((void*)0)) {
 VAR_10 = FUNC_5(VAR_5, VAR_5->strtab + VAR_6->vn_file);
 if (VAR_10 == ((void*)0))
     return (-1);
 VAR_9 = (const Elf_Vernaux *)((const char *)VAR_6 + VAR_6->vn_aux);
 for (;;) {
     if (FUNC_4(VAR_5, VAR_10, VAR_9))
  return (-1);
     VAR_12 = FUNC_1(VAR_9->vna_other);
     FUNC_3(VAR_12 <= VAR_11);
     VAR_5->vertab[VAR_12].hash = VAR_9->vna_hash;
     VAR_5->vertab[VAR_12].name = VAR_5->strtab + VAR_9->vna_name;
     VAR_5->vertab[VAR_12].file = VAR_5->strtab + VAR_6->vn_file;
     VAR_5->vertab[VAR_12].flags = (VAR_9->vna_other & VAR_4) ?
  VAR_2 : 0;
     if (VAR_9->vna_next == 0)
   break;
     VAR_9 = (const Elf_Vernaux *)((const char *)VAR_9 + VAR_9->vna_next);
 }
 if (VAR_6->vn_next == 0)
     break;
 VAR_6 = (const Elf_Verneed *)((const char *)VAR_6 + VAR_6->vn_next);
    }
    return 0;
}
