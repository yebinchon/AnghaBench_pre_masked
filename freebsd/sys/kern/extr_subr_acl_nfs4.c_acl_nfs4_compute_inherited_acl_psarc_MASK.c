
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acl {scalar_t__ acl_cnt; } ;
typedef int mode_t ;
typedef int acl_perm_t ;


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
 int FUNC_0 (int,char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (struct acl*,int ,int,int ) ;
 int FUNC_2 (struct acl const*,struct acl*,int,int,int) ;

__attribute__((used)) static void
FUNC_3(const struct acl *VAR_26,
    struct acl *VAR_27, mode_t VAR_28, int VAR_29, int VAR_30)
{
 acl_perm_t VAR_31 = 0, VAR_32 = 0, VAR_33 = 0;
 acl_perm_t VAR_34, VAR_35, VAR_36;

 FUNC_0(VAR_27->acl_cnt == 0, ("aclp->acl_cnt == 0"));

 VAR_34 = VAR_35 = VAR_36 = VAR_6 |
     VAR_7 | VAR_9 | VAR_10;
 VAR_34 |= VAR_12 | VAR_16 | VAR_13 |
     VAR_15;

 if (VAR_28 & VAR_19)
  VAR_34 |= VAR_8;
 if (VAR_28 & VAR_22)
  VAR_34 |= (VAR_14 | VAR_0);
 if (VAR_28 & VAR_25)
  VAR_34 |= VAR_4;

 if (VAR_28 & VAR_17)
  VAR_35 |= VAR_8;
 if (VAR_28 & VAR_20)
  VAR_35 |= (VAR_14 | VAR_0);
 if (VAR_28 & VAR_23)
  VAR_35 |= VAR_4;

 if (VAR_28 & VAR_18)
  VAR_36 |= VAR_8;
 if (VAR_28 & VAR_21)
  VAR_36 |= (VAR_14 | VAR_0);
 if (VAR_28 & VAR_24)
  VAR_36 |= VAR_4;

 VAR_32 = ((VAR_35 | VAR_36) & ~VAR_34);
 VAR_33 = VAR_36 & ~VAR_35;
 VAR_31 = VAR_33 & ~VAR_32;

 if (VAR_31 != 0)
  FUNC_1(VAR_27, VAR_11, VAR_31,
      VAR_1);
 if (VAR_32 != 0)
  FUNC_1(VAR_27, VAR_11, VAR_32,
      VAR_2);
 if (VAR_33 != 0)
  FUNC_1(VAR_27, VAR_5, VAR_33,
      VAR_2);

 if (VAR_26 != ((void*)0))
  FUNC_2(VAR_26, VAR_27, VAR_28,
      VAR_29, VAR_30);

 FUNC_1(VAR_27, VAR_11, VAR_34, VAR_1);
 FUNC_1(VAR_27, VAR_5, VAR_35, VAR_1);
 FUNC_1(VAR_27, VAR_3, VAR_36, VAR_1);
}
