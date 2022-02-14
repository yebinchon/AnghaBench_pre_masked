
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int find_global_pointer; int * sigcontext_register_address; int osabi; } ;
struct gdbarch_list {struct gdbarch* gdbarch; } ;
struct gdbarch_info {int osabi; } ;
struct gdbarch {int dummy; } ;
typedef int * TYPE_FLOATFORMAT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct gdbarch*,int *) ;
 int FUNC_1 (struct gdbarch*,int ) ;
 struct gdbarch* FUNC_2 (struct gdbarch_info*,struct gdbarch_tdep*) ;
 int FUNC_3 (struct gdbarch_info,struct gdbarch*) ;
 struct gdbarch_list* FUNC_4 (struct gdbarch_list*,struct gdbarch_info*) ;
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
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_5 (int ,int,int ,char*,int *) ;
 int FUNC_6 (struct gdbarch*,int *) ;
 int FUNC_7 (struct gdbarch*,int ) ;
 int FUNC_8 (struct gdbarch*,int ) ;
 int FUNC_9 (struct gdbarch*,int ) ;
 int FUNC_10 (struct gdbarch*,int ) ;
 int FUNC_11 (struct gdbarch*,int) ;
 int FUNC_12 (struct gdbarch*,int) ;
 int FUNC_13 (struct gdbarch*,int ) ;
 int FUNC_14 (struct gdbarch*,int ) ;
 int FUNC_15 (struct gdbarch*,int) ;
 int FUNC_16 (struct gdbarch*,int ) ;
 int FUNC_17 (struct gdbarch*,int ) ;
 int FUNC_18 (struct gdbarch*,int ) ;
 int FUNC_19 (struct gdbarch*,int) ;
 int FUNC_20 (struct gdbarch*,int) ;
 int FUNC_21 (struct gdbarch*,int) ;
 int FUNC_22 (struct gdbarch*,int *) ;
 int FUNC_23 (struct gdbarch*,int) ;
 int FUNC_24 (struct gdbarch*,int ) ;
 int FUNC_25 (struct gdbarch*,int ) ;
 int FUNC_26 (struct gdbarch*,scalar_t__) ;
 int FUNC_27 (struct gdbarch*,int ) ;
 int FUNC_28 (struct gdbarch*,int ) ;
 int FUNC_29 (struct gdbarch*,int ) ;
 int FUNC_30 (struct gdbarch*,int ) ;
 int FUNC_31 (struct gdbarch*,int) ;
 int FUNC_32 (struct gdbarch*,int ) ;
 int FUNC_33 (struct gdbarch*,int ) ;
 int FUNC_34 (struct gdbarch*,int ) ;
 int FUNC_35 (struct gdbarch*,int ) ;
 int FUNC_36 (struct gdbarch*,int ) ;
 int FUNC_37 (struct gdbarch*,int ) ;
 int FUNC_38 (struct gdbarch*,int ) ;
 int FUNC_39 (struct gdbarch*,int) ;
 int FUNC_40 (struct gdbarch*,int ) ;
 int FUNC_41 (struct gdbarch*,int ) ;
 int FUNC_42 (struct gdbarch*,int ) ;
 int FUNC_43 (struct gdbarch*,int ) ;
 int FUNC_44 (struct gdbarch*,int ) ;
 int FUNC_45 (struct gdbarch*,int ) ;
 int FUNC_46 (struct gdbarch*,int ) ;
 int FUNC_47 (struct gdbarch*,int ) ;
 int VAR_41 ;
 struct gdbarch_tdep* FUNC_48 (int) ;

__attribute__((used)) static struct gdbarch *
FUNC_49 (struct gdbarch_info VAR_42, struct gdbarch_list *VAR_43)
{
  struct gdbarch *VAR_44;
  struct gdbarch_tdep *VAR_45;


  VAR_43 = FUNC_4 (VAR_43, &VAR_42);
  if (VAR_43 != ((void*)0))
    return VAR_43->gdbarch;

  VAR_45 = FUNC_48 (sizeof (struct gdbarch_tdep));
  VAR_44 = FUNC_2 (&VAR_42, VAR_45);
  VAR_45->osabi = VAR_42.osabi;
  VAR_45->sigcontext_register_address = ((void*)0);
  VAR_45->find_global_pointer = VAR_18;


  VAR_5 =
    FUNC_5 (VAR_4, 128 / 8,
               0, "builtin_type_ia64_ext", ((void*)0));
  TYPE_FLOATFORMAT (VAR_46) = &VAR_8;
  FUNC_22 (VAR_44, &VAR_7);

  FUNC_39 (VAR_44, 16);
  FUNC_19 (VAR_44, 32);
  FUNC_20 (VAR_44, 64);
  FUNC_23 (VAR_44, 64);
  FUNC_15 (VAR_44, 32);
  FUNC_12 (VAR_44, 64);
  FUNC_21 (VAR_44, 128);
  FUNC_31 (VAR_44, 64);

  FUNC_27 (VAR_44, VAR_3);
  FUNC_26 (VAR_44, VAR_2 - VAR_0);
  FUNC_41 (VAR_44, VAR_41);
  FUNC_16 (VAR_44, VAR_1);

  FUNC_34 (VAR_44, VAR_28);


  FUNC_11 (VAR_44, 8);
  FUNC_37 (VAR_44, VAR_31);

  FUNC_29 (VAR_44, VAR_24);
  FUNC_30 (VAR_44, VAR_25);
  FUNC_13 (VAR_44, VAR_12);
  FUNC_35 (VAR_44, VAR_29);
  FUNC_9 (VAR_44, VAR_11);
  FUNC_36 (VAR_44, VAR_30);
  FUNC_46 (VAR_44, VAR_39);

  FUNC_40 (VAR_44, VAR_34);

  FUNC_45 (VAR_44, VAR_38);
  FUNC_14 (VAR_44, VAR_13);

  FUNC_42 (VAR_44, VAR_35);
  FUNC_10 (VAR_44, VAR_14);

  FUNC_24 (VAR_44, VAR_21);
  FUNC_25 (VAR_44, VAR_22);
  FUNC_7 (VAR_44, VAR_9);
  FUNC_33 (VAR_44, VAR_27);
  FUNC_47 (VAR_44, VAR_40);


  FUNC_32 (VAR_44, VAR_26);
  FUNC_17 (VAR_44, VAR_15);
  FUNC_43 (VAR_44, VAR_36);

  FUNC_44 (VAR_44, VAR_37);
  FUNC_1 (VAR_44, VAR_33);




  FUNC_1 (VAR_44, VAR_17);
  FUNC_0 (VAR_44, &VAR_16);


  FUNC_18 (VAR_44, VAR_6);

  FUNC_38 (
    VAR_44, VAR_32);

  FUNC_28 (VAR_44, VAR_23);
  FUNC_8 (VAR_44, VAR_10);

  FUNC_3 (VAR_42, VAR_44);

  return VAR_44;
}
