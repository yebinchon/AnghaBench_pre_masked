
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct section {scalar_t__ type; scalar_t__ sz; scalar_t__ addr; int entsize; int link; int scn; } ;
struct TYPE_10__ {scalar_t__ r_offset; int r_info; } ;
struct TYPE_8__ {TYPE_4__ rel; int rela; } ;
struct rel_entry {scalar_t__ type; TYPE_1__ u_r; int symn; } ;
struct elfdump {size_t shnum; struct section* sl; } ;
struct TYPE_9__ {scalar_t__ d_size; } ;
typedef TYPE_2__ Elf_Data ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 TYPE_2__* FUNC_4 (int ,int *) ;
 TYPE_4__* FUNC_5 (TYPE_2__*,int,TYPE_4__*) ;
 int * FUNC_6 (TYPE_2__*,int,int *) ;
 int FUNC_7 (struct section*,int*) ;
 int FUNC_8 (struct elfdump*,int ,int ) ;
 int FUNC_9 (struct rel_entry*,struct rel_entry*,int) ;
 int FUNC_10 (struct rel_entry*,int ,int) ;
 int FUNC_11 (char*,int ) ;

__attribute__((used)) static void
FUNC_12(struct elfdump *VAR_2, struct section *VAR_3, struct rel_entry *VAR_4)
{
 struct section *VAR_5;
 struct rel_entry VAR_6;
 Elf_Data *VAR_7;
 size_t VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 for(VAR_8 = 0; VAR_8 < VAR_2->shnum; VAR_8++) {
  VAR_5 = &VAR_2->sl[VAR_8];
  if (VAR_5->type != VAR_0 && VAR_5->type != VAR_1)
   continue;
  (void) FUNC_3();
  if ((VAR_7 = FUNC_4(VAR_5->scn, ((void*)0))) == ((void*)0)) {
   VAR_9 = FUNC_3();
   if (VAR_9 != 0)
    FUNC_11("elf_getdata failed: %s",
        FUNC_2(VAR_9));
   return;
  }
  FUNC_10(&VAR_6, 0, sizeof(struct rel_entry));
  VAR_6.type = VAR_5->type;
  FUNC_1(VAR_7->d_size == VAR_5->sz);
  if (!FUNC_7(VAR_5, &VAR_12))
   return;
  for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
   if (VAR_5->type == VAR_0) {
    if (FUNC_5(VAR_7, VAR_10, &VAR_6.u_r.rel) !=
        &VAR_6.u_r.rel) {
     FUNC_11("gelf_getrel failed: %s",
         FUNC_2(-1));
     continue;
    }
   } else {
    if (FUNC_6(VAR_7, VAR_10, &VAR_6.u_r.rela) !=
        &VAR_6.u_r.rela) {
     FUNC_11("gelf_getrel failed: %s",
         FUNC_2(-1));
     continue;
    }
   }
   if (VAR_6.u_r.rel.r_offset >= VAR_3->addr &&
       VAR_6.u_r.rel.r_offset < VAR_3->addr + VAR_3->sz) {
    VAR_6.symn = FUNC_8(VAR_2, VAR_5->link,
        FUNC_0(VAR_6.u_r.rel.r_info));
    VAR_11 = (VAR_6.u_r.rel.r_offset - VAR_3->addr) /
        VAR_3->entsize;
    FUNC_9(&VAR_4[VAR_11], &VAR_6, sizeof(struct rel_entry));
   }
  }
 }
}
