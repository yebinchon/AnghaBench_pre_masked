
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int sc_pc_offset; int sc_regs_offset; int sc_fpregs_offset; int jb_pc; int * sigcontext_addr; int * dynamic_sigtramp_offset; scalar_t__ vm_min_address; } ;
struct gdbarch_list {struct gdbarch* gdbarch; } ;
struct gdbarch_info {scalar_t__ osabi; int * abfd; } ;
struct gdbarch {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_1 (struct gdbarch*,int *) ;
 int FUNC_2 (struct gdbarch*,int ) ;
 struct gdbarch* FUNC_3 (struct gdbarch_info*,struct gdbarch_tdep*) ;
 int FUNC_4 (struct gdbarch_info,struct gdbarch*) ;
 struct gdbarch_list* FUNC_5 (struct gdbarch_list*,struct gdbarch_info*) ;
 int VAR_33 ;
 int FUNC_6 (struct gdbarch*,int ) ;
 int FUNC_7 (struct gdbarch*,int ) ;
 int FUNC_8 (struct gdbarch*,int ) ;
 int FUNC_9 (struct gdbarch*,int ) ;
 int FUNC_10 (struct gdbarch*,int) ;
 int FUNC_11 (struct gdbarch*,int ) ;
 int FUNC_12 (struct gdbarch*,int ) ;
 int FUNC_13 (struct gdbarch*,int ) ;
 int FUNC_14 (struct gdbarch*,int ) ;
 int FUNC_15 (struct gdbarch*,int) ;
 int FUNC_16 (struct gdbarch*,int ) ;
 int FUNC_17 (struct gdbarch*,int) ;
 int FUNC_18 (struct gdbarch*,int ) ;
 int FUNC_19 (struct gdbarch*,int ) ;
 int FUNC_20 (struct gdbarch*,int ) ;
 int FUNC_21 (struct gdbarch*,int) ;
 int FUNC_22 (struct gdbarch*,int) ;
 int FUNC_23 (struct gdbarch*,int) ;
 int FUNC_24 (struct gdbarch*,int) ;
 int FUNC_25 (struct gdbarch*,int ) ;
 int FUNC_26 (struct gdbarch*,int ) ;
 int FUNC_27 (struct gdbarch*,int ) ;
 int FUNC_28 (struct gdbarch*,int) ;
 int FUNC_29 (struct gdbarch*,int ) ;
 int FUNC_30 (struct gdbarch*,int ) ;
 int FUNC_31 (struct gdbarch*,int ) ;
 int FUNC_32 (struct gdbarch*,int ) ;
 int FUNC_33 (struct gdbarch*,int ) ;
 int FUNC_34 (struct gdbarch*,int) ;
 int FUNC_35 (struct gdbarch*,int ) ;
 int FUNC_36 (struct gdbarch*,int ) ;
 int FUNC_37 (struct gdbarch*,int ) ;
 int FUNC_38 (struct gdbarch*,int ) ;
 int FUNC_39 (struct gdbarch*,int ) ;
 int FUNC_40 (struct gdbarch*,int ) ;
 int FUNC_41 (struct gdbarch*,int ) ;
 int FUNC_42 (struct gdbarch*,int ) ;
 struct gdbarch_tdep* FUNC_43 (int) ;

__attribute__((used)) static struct gdbarch *
FUNC_44 (struct gdbarch_info VAR_34, struct gdbarch_list *VAR_35)
{
  struct gdbarch_tdep *VAR_36;
  struct gdbarch *VAR_37;


  if (VAR_34.abfd != ((void*)0) && VAR_34.osabi == VAR_5)
    {

      if (FUNC_0 (VAR_34.abfd) == VAR_30)
 VAR_34.osabi = VAR_4;
    }


  VAR_35 = FUNC_5 (VAR_35, &VAR_34);
  if (VAR_35 != ((void*)0))
    return VAR_35->gdbarch;

  VAR_36 = FUNC_43 (sizeof (struct gdbarch_tdep));
  VAR_37 = FUNC_3 (&VAR_34, VAR_36);



  VAR_36->vm_min_address = (CORE_ADDR) 0x120000000;

  VAR_36->dynamic_sigtramp_offset = ((void*)0);
  VAR_36->sigcontext_addr = ((void*)0);
  VAR_36->sc_pc_offset = 2 * 8;
  VAR_36->sc_regs_offset = 4 * 8;
  VAR_36->sc_fpregs_offset = VAR_36->sc_regs_offset + 32 * 8 + 8;

  VAR_36->jb_pc = -1;


  FUNC_34 (VAR_37, 16);
  FUNC_21 (VAR_37, 32);
  FUNC_22 (VAR_37, 64);
  FUNC_24 (VAR_37, 64);
  FUNC_17 (VAR_37, 32);
  FUNC_15 (VAR_37, 64);
  FUNC_23 (VAR_37, 64);
  FUNC_28 (VAR_37, 64);


  FUNC_25 (VAR_37, VAR_1);
  FUNC_37 (VAR_37, VAR_3);
  FUNC_26 (VAR_37, VAR_2);
  FUNC_18 (VAR_37, VAR_0);

  FUNC_30 (VAR_37, VAR_17);
  FUNC_12 (VAR_37, VAR_16);
  FUNC_13 (VAR_37, VAR_18);
  FUNC_14 (VAR_37, VAR_22);
  FUNC_33 (VAR_37, VAR_21);

  FUNC_7 (VAR_37, VAR_7);
  FUNC_8 (VAR_37, VAR_8);

  FUNC_9 (VAR_37, VAR_9);
  FUNC_32 (VAR_37, VAR_20);
  FUNC_42 (VAR_37, VAR_28);

  FUNC_31 (VAR_37, VAR_19);


  FUNC_35 (VAR_37, VAR_24);


  FUNC_27 (VAR_37, VAR_33);



  FUNC_41 (VAR_37, VAR_29);
  FUNC_16 (VAR_37, VAR_10);
  FUNC_38 (VAR_37, VAR_25);
  FUNC_11 (VAR_37, VAR_11);


  FUNC_29 (VAR_37, VAR_15);


  FUNC_39 (VAR_37, VAR_26);


  FUNC_40 (VAR_37, VAR_27);

  FUNC_20 (VAR_37, VAR_31);
  FUNC_36 (VAR_37, VAR_32);

  FUNC_6 (VAR_37, VAR_6);
  FUNC_10 (VAR_37, 4);


  FUNC_4 (VAR_34, VAR_37);




  if (VAR_36->jb_pc >= 0)
    FUNC_19 (VAR_37, VAR_12);

  FUNC_2 (VAR_37, VAR_23);
  FUNC_2 (VAR_37, VAR_14);

  FUNC_1 (VAR_37, &VAR_13);

  return VAR_37;
}
