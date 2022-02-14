
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct section {int off; } ;
struct elfcopy {int flags; scalar_t__ iec; scalar_t__ oec; scalar_t__ oed; int abi; scalar_t__ strip; scalar_t__ ophnum; scalar_t__ change_addr; scalar_t__ change_start; int eout; int set_start; int v_symop; int * prefix_sym; int * secndx; int ein; } ;
struct TYPE_4__ {scalar_t__* e_ident; scalar_t__ e_type; scalar_t__ e_phoff; int e_entry; int e_shoff; int e_version; int e_machine; int e_flags; } ;
typedef TYPE_1__ GElf_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (struct elfcopy*) ;
 int * FUNC_2 (size_t,int) ;
 int FUNC_3 (struct elfcopy*) ;
 int FUNC_4 (struct elfcopy*) ;
 int FUNC_5 (struct elfcopy*) ;
 int FUNC_6 (struct elfcopy*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,size_t*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (struct elfcopy*) ;
 scalar_t__ FUNC_13 (int ,int ,int,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int * FUNC_15 (int ,TYPE_1__*) ;
 int * FUNC_16 (int ,scalar_t__) ;
 scalar_t__ FUNC_17 (int ,TYPE_1__*) ;
 struct section* FUNC_18 (struct elfcopy*,int) ;
 int FUNC_19 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_20 (struct elfcopy*) ;
 int FUNC_21 (struct elfcopy*) ;
 int FUNC_22 (struct elfcopy*,int) ;

void
FUNC_23(struct elfcopy *VAR_25)
{
 struct section *VAR_26;
 GElf_Ehdr VAR_27;
 GElf_Ehdr VAR_28;
 size_t VAR_29;

 VAR_25->flags |= VAR_23;
 VAR_25->flags &= ~VAR_22;


 if (FUNC_15(VAR_25->ein, &VAR_27) == ((void*)0))
  FUNC_11(VAR_16, "gelf_getehdr() failed: %s",
      FUNC_7(-1));
 if ((VAR_25->iec = FUNC_14(VAR_25->ein)) == VAR_6)
  FUNC_11(VAR_16, "getclass() failed: %s",
      FUNC_7(-1));

 if (VAR_25->oec == VAR_6)
  VAR_25->oec = VAR_25->iec;
 if (VAR_25->oed == VAR_7)
  VAR_25->oed = VAR_27.e_ident[VAR_4];

 if (FUNC_16(VAR_25->eout, VAR_25->oec) == ((void*)0))
  FUNC_11(VAR_16, "gelf_newehdr failed: %s",
      FUNC_7(-1));
 if (FUNC_15(VAR_25->eout, &VAR_28) == ((void*)0))
  FUNC_11(VAR_16, "gelf_getehdr() failed: %s",
      FUNC_7(-1));

 FUNC_19(VAR_28.e_ident, VAR_27.e_ident, sizeof(VAR_27.e_ident));
 VAR_28.e_ident[VAR_3] = VAR_25->oec;
 VAR_28.e_ident[VAR_4] = VAR_25->oed;
 if (VAR_25->abi != -1)
  VAR_28.e_ident[VAR_5] = VAR_25->abi;
 VAR_28.e_flags = VAR_27.e_flags;
 VAR_28.e_machine = VAR_27.e_machine;
 VAR_28.e_type = VAR_27.e_type;
 VAR_28.e_entry = VAR_27.e_entry;
 VAR_28.e_version = VAR_27.e_version;

 VAR_25->flags &= ~(VAR_15 | VAR_2 | VAR_18);
 if (VAR_27.e_type == VAR_12)
  VAR_25->flags |= VAR_15;
 else if (VAR_27.e_type == VAR_11)
  VAR_25->flags |= VAR_2;
 else if (VAR_27.e_type == VAR_13)
  VAR_25->flags |= VAR_18;
 else
  FUNC_11(VAR_16, "unsupported e_type");

 if (!FUNC_8(VAR_25->ein, &VAR_29))
  FUNC_11(VAR_16, "elf_getshnum failed: %s",
      FUNC_7(-1));
 if (VAR_29 > 0 && (VAR_25->secndx = FUNC_2(VAR_29,
     sizeof(*VAR_25->secndx))) == ((void*)0))
  FUNC_10(VAR_16, "calloc failed");


 FUNC_21(VAR_25);







 FUNC_5(VAR_25);


 FUNC_1(VAR_25);





 if (VAR_25->strip == VAR_20 ||
     VAR_25->strip == VAR_21 ||
     VAR_25->flags & VAR_24 ||
     VAR_25->flags & VAR_17 ||
     VAR_25->flags & VAR_1 ||
     VAR_25->flags & VAR_0 ||
     VAR_25->prefix_sym != ((void*)0) ||
     !FUNC_0(&VAR_25->v_symop))
  VAR_25->flags &= ~VAR_23;






 if ((VAR_25->flags & VAR_22) != 0)
  FUNC_6(VAR_25);





 if (FUNC_17(VAR_25->eout, &VAR_28) == 0)
  FUNC_11(VAR_16, "gelf_update_ehdr() failed: %s",
      FUNC_7(-1));
 FUNC_3(VAR_25);






 FUNC_22(VAR_25, 1);


 if (FUNC_15(VAR_25->eout, &VAR_28) == ((void*)0))
  FUNC_11(VAR_16, "gelf_getehdr() failed: %s",
      FUNC_7(-1));
 if (VAR_28.e_ident[VAR_5] == VAR_8)
  VAR_26 = FUNC_18(VAR_25, 1);
 else
  VAR_26 = FUNC_18(VAR_25, 0);






 FUNC_20(VAR_25);


 VAR_28.e_shoff = VAR_26->off;


 if (VAR_25->ophnum > 0) {
  VAR_28.e_phoff = FUNC_13(VAR_25->eout, VAR_10, 1, VAR_14);
  if (VAR_28.e_phoff == 0)
   FUNC_11(VAR_16, "gelf_fsize() failed: %s",
       FUNC_7(-1));
 }




 if (VAR_25->change_addr != 0)
  VAR_28.e_entry += VAR_25->change_addr;
 if (VAR_25->flags & VAR_19)
  VAR_28.e_entry = VAR_25->set_start;
 if (VAR_25->change_start != 0)
  VAR_28.e_entry += VAR_25->change_start;





 if (FUNC_17(VAR_25->eout, &VAR_28) == 0)
  FUNC_11(VAR_16, "gelf_update_ehdr() failed: %s",
      FUNC_7(-1));

 if (VAR_25->ophnum > 0)
  FUNC_4(VAR_25);


 if (FUNC_9(VAR_25->eout, VAR_9) < 0)
  FUNC_11(VAR_16, "elf_update() failed: %s",
      FUNC_7(-1));


 FUNC_12(VAR_25);
}
