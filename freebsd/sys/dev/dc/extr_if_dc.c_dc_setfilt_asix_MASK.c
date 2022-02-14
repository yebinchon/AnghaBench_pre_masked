
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int if_flags; } ;
struct dc_softc {struct ifnet* dc_ifp; } ;


 int FUNC_0 (struct dc_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct dc_softc*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct dc_softc*,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (int ,int *,int ) ;
 int VAR_14 ;
 int FUNC_5 (struct ifnet*,int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct dc_softc *VAR_15)
{
 uint32_t VAR_16[(VAR_10+3)/4];
 struct ifnet *VAR_17;
 uint32_t VAR_18[2] = { 0, 0 };

 VAR_17 = VAR_15->dc_ifp;


 FUNC_4(FUNC_3(VAR_15->dc_ifp), VAR_16, VAR_10);
 FUNC_0(VAR_15, VAR_1, VAR_4);
 FUNC_0(VAR_15, VAR_0, VAR_16[0]);
 FUNC_0(VAR_15, VAR_1, VAR_5);
 FUNC_0(VAR_15, VAR_0, VAR_16[1]);


 if (VAR_17->if_flags & VAR_13)
  FUNC_2(VAR_15, VAR_7, VAR_9);
 else
  FUNC_1(VAR_15, VAR_7, VAR_9);

 if (VAR_17->if_flags & VAR_11)
  FUNC_2(VAR_15, VAR_7, VAR_8);
 else
  FUNC_1(VAR_15, VAR_7, VAR_8);





 if (VAR_17->if_flags & VAR_12)
  FUNC_2(VAR_15, VAR_7, VAR_6);
 else
  FUNC_1(VAR_15, VAR_7, VAR_6);


 FUNC_0(VAR_15, VAR_1, VAR_2);
 FUNC_0(VAR_15, VAR_0, 0);
 FUNC_0(VAR_15, VAR_1, VAR_3);
 FUNC_0(VAR_15, VAR_0, 0);





 if (VAR_17->if_flags & (VAR_13 | VAR_11))
  return;


 FUNC_5(VAR_17, VAR_14, VAR_18);

 FUNC_0(VAR_15, VAR_1, VAR_2);
 FUNC_0(VAR_15, VAR_0, VAR_18[0]);
 FUNC_0(VAR_15, VAR_1, VAR_3);
 FUNC_0(VAR_15, VAR_0, VAR_18[1]);
}
