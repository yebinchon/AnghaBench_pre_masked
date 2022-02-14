
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum gft_profile_type { ____Placeholder_gft_profile_type } gft_profile_type ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
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
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 int FUNC_1 (int,int ,int) ;
 int VAR_41 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int) ;

void FUNC_4(struct ecore_hwfn *VAR_42,
    struct ecore_ptt *VAR_43,
    u16 VAR_44,
    bool VAR_45,
    bool VAR_46,
    bool VAR_47,
    bool VAR_48,
    enum gft_profile_type VAR_49)
{
    u32 VAR_50, VAR_51, VAR_52, VAR_53;

    if (!VAR_48 && !VAR_47)
        FUNC_0(VAR_42, 1, "gft_config: must accept at least on of - ipv4 or ipv6'\n");
    if (!VAR_45 && !VAR_46)
        FUNC_0(VAR_42, 1, "gft_config: must accept at least on of - udp or tcp\n");
    if (VAR_49 >= VAR_28)
        FUNC_0(VAR_42, 1, "gft_config: unsupported gft_profile_type\n");


    VAR_50 = VAR_41 << VAR_33;
    VAR_50 |= VAR_29 << VAR_32;
    FUNC_3(VAR_42, VAR_43, VAR_31, VAR_50);


    FUNC_3(VAR_42, VAR_43, VAR_36, 0);


    FUNC_3(VAR_42, VAR_43, VAR_38, 0);


    VAR_51 = 0;
    FUNC_1(VAR_51, VAR_9, 1);


    FUNC_1(VAR_51, VAR_4, VAR_5);
    FUNC_1(VAR_51, VAR_3, VAR_44);

    if (!(VAR_45 && VAR_46)) {
        FUNC_1(VAR_51, VAR_7, VAR_8);
        if (VAR_45)
            FUNC_1(VAR_51, VAR_6, VAR_12);
        else
            FUNC_1(VAR_51, VAR_6, VAR_18);
    }

    if (!(VAR_47 && VAR_48)) {
        FUNC_1(VAR_51, VAR_2, 1);
        if (VAR_47)
            FUNC_1(VAR_51, VAR_1, VAR_10);
        else
            FUNC_1(VAR_51, VAR_1, VAR_11);
    }


    FUNC_3(VAR_42, VAR_43, VAR_34 + VAR_0*VAR_44, VAR_51);
    VAR_51 = FUNC_2(VAR_42, VAR_43, VAR_34 + VAR_0*VAR_44);


    VAR_52 = 0;
    VAR_53 = 0;


    FUNC_1(VAR_52, VAR_25, 1);
    FUNC_1(VAR_52, VAR_27, 1);

    if (VAR_49 == VAR_13)
    {
        FUNC_1(VAR_53, VAR_19, 1);
        FUNC_1(VAR_53, VAR_23, 1);
        FUNC_1(VAR_53, VAR_22, 1);
        FUNC_1(VAR_52, VAR_21, 1);
        FUNC_1(VAR_52, VAR_24, 1);
        FUNC_1(VAR_52, VAR_20, 1);
    }
    else if (VAR_49 == VAR_16)
    {
        FUNC_1(VAR_53, VAR_22, 1);
        FUNC_1(VAR_52, VAR_21, 1);
        FUNC_1(VAR_52, VAR_20, 1);
    }
    else if (VAR_49 == VAR_14)
    {
        FUNC_1(VAR_53, VAR_19, 1);
        FUNC_1(VAR_52, VAR_21, 1);
    }
    else if (VAR_49 == VAR_15)
    {
        FUNC_1(VAR_53, VAR_23, 1);
        FUNC_1(VAR_52, VAR_21, 1);
    }
    else if (VAR_49 == VAR_17)
    {
        FUNC_1(VAR_52, VAR_26, 1);
    }

    FUNC_3(VAR_42, VAR_43, VAR_35 + VAR_39*VAR_44, VAR_52);
    FUNC_3(VAR_42, VAR_43, VAR_35 + VAR_39*VAR_44 + VAR_40, VAR_53);


    FUNC_3(VAR_42, VAR_43, VAR_35 + VAR_39*VAR_30, 0xffffffff);
    FUNC_3(VAR_42, VAR_43, VAR_35 + VAR_39*VAR_30 + VAR_40, 0x3ff);


    FUNC_3(VAR_42, VAR_43, VAR_37, 1);
}
