
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* tree ;
struct TYPE_3__ {void* (* type_for_mode ) (int ,int) ;} ;
struct TYPE_4__ {TYPE_1__ types; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ,void*) ;
 void* FUNC_3 (int ,int ,int ,int ) ;
 void* FUNC_4 (int ,int ,int ,int ,void*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* FUNC_7 (int ,char*,void*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* FUNC_10 (int ,int) ;
 void* VAR_20 ;
 int VAR_21 ;

void
FUNC_11 (void)
{
  static bool VAR_22 = 0;
  tree VAR_23;
  tree VAR_24;
  tree VAR_25;
  tree VAR_26;
  tree VAR_27;
  tree VAR_28;

  if (VAR_22)
    return;
  VAR_22 = 1;

  VAR_15 = VAR_5.types.type_for_mode (VAR_17,
                                                                  1);
  VAR_23
    = FUNC_5 (FUNC_6
                          (VAR_3, VAR_1));

  VAR_9 = FUNC_8 (VAR_15);
  VAR_10 = FUNC_5 (VAR_9);
  VAR_24 = FUNC_0 (VAR_9, 0);
  VAR_25 =
    FUNC_4 (VAR_21, VAR_18, VAR_19,
                           VAR_4, VAR_23);
  VAR_26 =
    FUNC_3 (VAR_21, VAR_18, VAR_19,
                           VAR_4);
  VAR_27 =
    FUNC_1 (VAR_21);
  VAR_28 =
    FUNC_2 (VAR_4, VAR_23);

  VAR_6 = FUNC_7 (VAR_2, "__mf_lookup_cache",
                                         VAR_24);
  VAR_8 = FUNC_7 (VAR_2, "__mf_lc_shift",
                                         VAR_20);
  VAR_7 = FUNC_7 (VAR_2, "__mf_lc_mask",
                                        VAR_15);


  FUNC_9 (VAR_6);
  FUNC_9 (VAR_8);
  FUNC_9 (VAR_7);
  VAR_11 = FUNC_7 (VAR_0, "__mf_check",
                                     VAR_25);
  VAR_13 = FUNC_7 (VAR_0, "__mf_register",
                                        VAR_25);
  VAR_16 = FUNC_7 (VAR_0, "__mf_unregister",
                                          VAR_26);
  VAR_12 = FUNC_7 (VAR_0, "__mf_init",
                                    VAR_27);
  VAR_14 = FUNC_7 (VAR_0, "__mf_set_options",
                                           VAR_28);
}
