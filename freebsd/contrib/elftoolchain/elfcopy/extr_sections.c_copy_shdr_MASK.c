
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct section {scalar_t__ type; scalar_t__ sz; int nocopy; char const* name; int os; int * buf; int align; int off; int vma; int is; } ;
struct elfcopy {int dummy; } ;
typedef int ish ;
struct TYPE_6__ {scalar_t__ sh_type; scalar_t__ sh_size; int sh_flags; int sh_entsize; int sh_addralign; int sh_info; int sh_link; int sh_offset; int sh_addr; } ;
typedef TYPE_1__ GElf_Shdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct elfcopy*,char const*) ;
 int * FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int ) ;
 int * FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,int) ;

void
FUNC_8(struct elfcopy *VAR_13, struct section *VAR_14, const char *VAR_15, int VAR_16,
    int VAR_17)
{
 GElf_Shdr VAR_18, VAR_19;

 if (FUNC_5(VAR_14->is, &VAR_18) == ((void*)0))
  FUNC_4(VAR_0, "gelf_getshdr() failed: %s",
      FUNC_2(-1));
 if (FUNC_5(VAR_14->os, &VAR_19) == ((void*)0))
  FUNC_4(VAR_0, "gelf_getshdr() failed: %s",
      FUNC_2(-1));

 if (VAR_16)
  (void) FUNC_7(&VAR_19, &VAR_18, sizeof(VAR_18));
 else {
  VAR_19.sh_type = VAR_14->type;
  VAR_19.sh_addr = VAR_14->vma;
  VAR_19.sh_offset = VAR_14->off;
  VAR_19.sh_size = VAR_14->sz;
  VAR_19.sh_link = VAR_18.sh_link;
  VAR_19.sh_info = VAR_18.sh_info;
  VAR_19.sh_addralign = VAR_14->align;
  VAR_19.sh_entsize = VAR_18.sh_entsize;

  if (VAR_17) {
   VAR_19.sh_flags = 0;
   if (VAR_17 & VAR_1)
    VAR_19.sh_flags |= VAR_5;
   if ((VAR_17 & VAR_4) == 0)
    VAR_19.sh_flags |= VAR_8;
   if (VAR_17 & VAR_2)
    VAR_19.sh_flags |= VAR_6;
   if ((VAR_17 & VAR_3) &&
       VAR_14->type == VAR_9 && VAR_14->sz > 0) {




    VAR_19.sh_type = VAR_14->type = VAR_10;
    if ((VAR_14->buf = FUNC_1(1, VAR_14->sz)) == ((void*)0))
     FUNC_3(VAR_0, "malloc failed");
    VAR_14->nocopy = 1;
   }
  } else {
   VAR_19.sh_flags = VAR_18.sh_flags;







   if (VAR_18.sh_type == VAR_11 || VAR_18.sh_type == VAR_12)
    VAR_19.sh_flags |= VAR_7;
  }
 }

 if (VAR_15 == ((void*)0))
  FUNC_0(VAR_13, VAR_14->name);
 else
  FUNC_0(VAR_13, VAR_15);

 if (!FUNC_6(VAR_14->os, &VAR_19))
  FUNC_4(VAR_0, "elf_update_shdr failed: %s",
      FUNC_2(-1));
}
