
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {scalar_t__ hw_tso; int dev; struct ifnet* ifp; } ;
struct ifnet {int dummy; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 struct ifnet* FUNC_3 (int ) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*,int ,int ) ;
 int FUNC_7 (struct ifnet*,int ) ;
 int FUNC_8 (struct ifnet*,int,int ) ;
 int FUNC_9 (struct ifnet*,int ) ;
 int FUNC_10 (struct ifnet*,int) ;
 int FUNC_11 (struct ifnet*,int ) ;
 int FUNC_12 (struct ifnet*,int,int ) ;
 int FUNC_13 (struct ifnet*,int ) ;
 int FUNC_14 (struct ifnet*,int ) ;
 int FUNC_15 (struct ifnet*,int ) ;
 int FUNC_16 (struct ifnet*,int ) ;
 int FUNC_17 (struct ifnet*,int ) ;
 int FUNC_18 (struct ifnet*,int ) ;
 int FUNC_19 (struct ifnet*,int ) ;
 int FUNC_20 (struct ifnet*,struct nicvf*) ;
 int FUNC_21 (struct ifnet*,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static int
FUNC_22(struct nicvf *VAR_25)
{
 struct ifnet *VAR_26;

 VAR_26 = FUNC_3(VAR_16);
 if (VAR_26 == ((void*)0)) {
  FUNC_2(VAR_25->dev, "Could not allocate ifnet structure\n");
  return (VAR_5);
 }

 VAR_25->ifp = VAR_26;

 FUNC_20(VAR_26, VAR_25);
 FUNC_6(VAR_26, FUNC_0(VAR_25->dev), FUNC_1(VAR_25->dev));
 FUNC_10(VAR_26, VAR_13 | VAR_15 | VAR_14);

 FUNC_21(VAR_26, VAR_24);
 FUNC_19(VAR_26, VAR_23);
 FUNC_17(VAR_26, VAR_22);
 FUNC_16(VAR_26, VAR_21);
 FUNC_11(VAR_26, VAR_20);

 FUNC_18(VAR_26, VAR_6);


 FUNC_7(VAR_26, 0);


 FUNC_8(VAR_26, VAR_12 | VAR_9, 0);
 FUNC_8(VAR_26, VAR_10, 0);
 if (VAR_25->hw_tso) {

  FUNC_8(VAR_26, VAR_11, 0);

  FUNC_13(VAR_26, VAR_18);
  FUNC_14(VAR_26, VAR_19);
  FUNC_15(VAR_26, VAR_17);
 }

 FUNC_8(VAR_26, VAR_7, 0);
 FUNC_8(VAR_26, VAR_8, 0);



 FUNC_4(VAR_26);
 FUNC_12(VAR_26, (VAR_0 | VAR_2 | VAR_4 | VAR_1), 0);
 if (VAR_25->hw_tso)
  FUNC_12(VAR_26, (VAR_3), 0);
 FUNC_9(VAR_26, FUNC_5(VAR_26));

 return (0);
}
