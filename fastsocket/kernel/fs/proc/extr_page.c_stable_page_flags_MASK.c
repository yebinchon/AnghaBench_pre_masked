
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int flags; } ;


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
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (int,int ,int ) ;
 scalar_t__ FUNC_7 (struct page*) ;

u64 FUNC_8(struct page *VAR_53)
{
 u64 VAR_54;
 u64 VAR_55;





 if (!VAR_53)
  return 1 << VAR_16;

 VAR_54 = VAR_53->flags;
 VAR_55 = 0;







 if (!FUNC_4(VAR_53) && FUNC_7(VAR_53))
  VAR_55 |= 1 << VAR_15;
 if (FUNC_0(VAR_53))
  VAR_55 |= 1 << VAR_1;
 if (FUNC_3(VAR_53))
  VAR_55 |= 1 << VAR_10;





 if (FUNC_1(VAR_53))
  VAR_55 |= 1 << VAR_4;
 if (FUNC_5(VAR_53))
  VAR_55 |= 1 << VAR_5;
 if (FUNC_2(VAR_53))
  VAR_55 |= 1 << VAR_8;

 VAR_55 |= FUNC_6(VAR_54, VAR_11, VAR_36);






 VAR_55 |= FUNC_6(VAR_54, VAR_23, VAR_46);
 VAR_55 |= FUNC_6(VAR_54, VAR_3, VAR_32);

 VAR_55 |= FUNC_6(VAR_54, VAR_7, VAR_34);
 VAR_55 |= FUNC_6(VAR_54, VAR_6, VAR_33);
 VAR_55 |= FUNC_6(VAR_54, VAR_28, VAR_51);
 VAR_55 |= FUNC_6(VAR_54, VAR_29, VAR_52);

 VAR_55 |= FUNC_6(VAR_54, VAR_12, VAR_37);
 VAR_55 |= FUNC_6(VAR_54, VAR_21, VAR_44);
 VAR_55 |= FUNC_6(VAR_54, VAR_0, VAR_30);
 VAR_55 |= FUNC_6(VAR_54, VAR_20, VAR_43);

 VAR_55 |= FUNC_6(VAR_54, VAR_25, VAR_48);
 VAR_55 |= FUNC_6(VAR_54, VAR_24, VAR_47);

 VAR_55 |= FUNC_6(VAR_54, VAR_27, VAR_50);
 VAR_55 |= FUNC_6(VAR_54, VAR_14, VAR_39);
 VAR_55 |= FUNC_6(VAR_54, VAR_22, VAR_45);
 VAR_55 |= FUNC_6(VAR_54, VAR_13, VAR_38);
 VAR_55 |= FUNC_6(VAR_54, VAR_18, VAR_41);
 VAR_55 |= FUNC_6(VAR_54, VAR_19, VAR_42);
 VAR_55 |= FUNC_6(VAR_54, VAR_17, VAR_40);
 VAR_55 |= FUNC_6(VAR_54, VAR_2, VAR_31);

 return VAR_55;
}
