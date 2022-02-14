
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int num_xmm_regs; int mm0_regnum; scalar_t__ gregset_reg_offset; int st0_regnum; int sizeof_fpregset; } ;
struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int FUNC_0 (struct gdbarch*,int *) ;
 int FUNC_1 (struct gdbarch*,int ) ;
 struct gdbarch_tdep* FUNC_2 (struct gdbarch*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (struct gdbarch*,int ) ;
 int FUNC_4 (struct gdbarch*,int ) ;
 int FUNC_5 (struct gdbarch*,int ) ;
 int FUNC_6 (struct gdbarch*,int ) ;
 int FUNC_7 (struct gdbarch*,int ) ;
 int FUNC_8 (struct gdbarch*,int) ;
 int FUNC_9 (struct gdbarch*,int ) ;
 int FUNC_10 (struct gdbarch*,int) ;
 int FUNC_11 (struct gdbarch*,int) ;
 int FUNC_12 (struct gdbarch*,int) ;
 int FUNC_13 (struct gdbarch*,int ) ;
 int FUNC_14 (struct gdbarch*,int ) ;
 int FUNC_15 (struct gdbarch*,int ) ;
 int FUNC_16 (struct gdbarch*,int ) ;
 int FUNC_17 (struct gdbarch*,int) ;
 int FUNC_18 (struct gdbarch*,int ) ;
 int FUNC_19 (struct gdbarch*,int ) ;
 int FUNC_20 (struct gdbarch*,int ) ;
 int FUNC_21 (struct gdbarch*,int ) ;
 int FUNC_22 (struct gdbarch*,int ) ;
 int FUNC_23 (struct gdbarch*,int ) ;
 int FUNC_24 (struct gdbarch*,int ) ;
 int FUNC_25 (struct gdbarch*,int ) ;
 int FUNC_26 (struct gdbarch*,int ) ;
 int FUNC_27 (struct gdbarch*,int ) ;
 int FUNC_28 (struct gdbarch*,int ) ;

void
FUNC_29 (struct gdbarch_info VAR_22, struct gdbarch *VAR_23)
{
  struct gdbarch_tdep *VAR_24 = FUNC_2 (VAR_23);



  VAR_24->sizeof_fpregset = VAR_5;


  VAR_24->st0_regnum = VAR_4;
  VAR_24->num_xmm_regs = 16;


  FUNC_10 (VAR_23, 64);
  FUNC_12 (VAR_23, 64);
  FUNC_17 (VAR_23, 64);




  FUNC_11 (VAR_23, 128);

  FUNC_14 (VAR_23, VAR_1);
  FUNC_19 (VAR_23, VAR_12);
  FUNC_21 (VAR_23, VAR_13);


  FUNC_25 (VAR_23, VAR_3);
  FUNC_15 (VAR_23, VAR_2);
  FUNC_16 (VAR_23, VAR_0);
  FUNC_6 (VAR_23, VAR_4);







  FUNC_26 (VAR_23, VAR_7);
  FUNC_5 (VAR_23, VAR_7);
  FUNC_4 (VAR_23, VAR_7);





  FUNC_18 (VAR_23, VAR_11);
  FUNC_7 (VAR_23, VAR_8);
  FUNC_8 (VAR_23, 128);

  FUNC_3 (VAR_23, VAR_6);
  FUNC_20 (VAR_23, VAR_19);
  FUNC_28 (VAR_23, VAR_20);

  FUNC_23 (VAR_23, VAR_15);

  FUNC_24 (VAR_23, VAR_17);


  FUNC_13 (VAR_23, 0);
  VAR_24->mm0_regnum = -1;

  FUNC_27 (VAR_23, VAR_18);




  FUNC_9 (VAR_23, VAR_21);

  FUNC_1 (VAR_23, VAR_16);
  FUNC_1 (VAR_23, VAR_10);
  FUNC_0 (VAR_23, &VAR_9);


  if (VAR_24->gregset_reg_offset)
    FUNC_22 (VAR_23,
       VAR_14);
}
