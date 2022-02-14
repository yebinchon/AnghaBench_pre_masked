
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_softc {struct ifnet* ti_ifp; } ;
struct ti_cmd_desc {int dummy; } ;
struct ifnet {int if_flags; } ;


 int FUNC_0 (struct ti_softc*,int ) ;
 int FUNC_1 (struct ti_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct ti_softc*) ;
 int VAR_4 ;
 int FUNC_4 (struct ifnet*,int ,struct ti_softc*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_5(struct ti_softc *VAR_7)
{
 struct ifnet *VAR_8;
 struct ti_cmd_desc VAR_9;
 uint32_t VAR_10;

 FUNC_3(VAR_7);

 VAR_8 = VAR_7->ti_ifp;

 if (VAR_8->if_flags & VAR_0) {
  FUNC_2(VAR_3, VAR_2, 0);
  return;
 } else {
  FUNC_2(VAR_3, VAR_1, 0);
 }


 VAR_10 = FUNC_0(VAR_7, VAR_4);
 FUNC_1(VAR_7, VAR_4, 1);


 FUNC_4(VAR_8, VAR_6, VAR_7);


 FUNC_4(VAR_8, VAR_5, VAR_7);


 FUNC_1(VAR_7, VAR_4, VAR_10);
}
