
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_driver_capa {int flags; int rrm_flags; } ;
struct wiphy_info_data {struct wpa_driver_capa* capa; } ;
struct nlattr {int dummy; } ;


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
 scalar_t__ FUNC_0 (int *,int,int ) ;
 int * FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;

__attribute__((used)) static void FUNC_3(struct wiphy_info_data *VAR_40,
      struct nlattr *VAR_41)
{
 struct wpa_driver_capa *VAR_42 = VAR_40->capa;
 u8 *VAR_43;
 int VAR_44;

 if (VAR_41 == ((void*)0))
  return;

 VAR_43 = FUNC_1(VAR_41);
 VAR_44 = FUNC_2(VAR_41);

 if (FUNC_0(VAR_43, VAR_44, VAR_21))
  VAR_42->flags |= VAR_39;

 if (FUNC_0(VAR_43, VAR_44, VAR_17))
  VAR_42->rrm_flags |= VAR_37;

 if (FUNC_0(VAR_43, VAR_44, VAR_11))
  VAR_42->flags |= VAR_36;

 if (FUNC_0(VAR_43, VAR_44,
         VAR_4))
  VAR_42->flags |= VAR_25;

 if (FUNC_0(VAR_43, VAR_44,
         VAR_3))
  VAR_42->flags |= VAR_24;

 if (FUNC_0(VAR_43, VAR_44,
         VAR_5))
  VAR_42->flags |= VAR_26;

 if (FUNC_0(VAR_43, VAR_44,
         VAR_20))
  VAR_42->rrm_flags |= VAR_38;

 if (FUNC_0(VAR_43, VAR_44,
         VAR_18) &&
     FUNC_0(VAR_43, VAR_44,
         VAR_6) &&
     FUNC_0(VAR_43, VAR_44,
         VAR_20))
  VAR_42->rrm_flags |= VAR_35;
 if (FUNC_0(VAR_43, VAR_44,
         VAR_13))
  VAR_42->flags |= VAR_31;
 if (FUNC_0(VAR_43, VAR_44,
         VAR_14))
  VAR_42->flags |= VAR_32;
 if (FUNC_0(VAR_43, VAR_44,
         VAR_19))
  VAR_42->flags |= VAR_34;
 if (FUNC_0(VAR_43, VAR_44,
         VAR_10))
  VAR_42->flags |= VAR_28;

 if (FUNC_0(VAR_43, VAR_44,
         VAR_1))
  VAR_42->flags |= VAR_23;
 if (FUNC_0(VAR_43, VAR_44,
         VAR_0))
  VAR_42->flags |= VAR_22;

 if (FUNC_0(VAR_43, VAR_44,
         VAR_12))
  VAR_42->flags |= VAR_30;

 if (FUNC_0(VAR_43, VAR_44,
         VAR_7))
  VAR_42->flags |= VAR_27;
 if (FUNC_0(VAR_43, VAR_44,
         VAR_8))
  VAR_42->flags |= VAR_29;
}
