
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xae_softc {struct ifnet* ifp; } ;
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
 int VAR_20 ;
 int FUNC_0 (struct ifnet*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct xae_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(struct xae_softc *VAR_21)
{
 struct ifnet *VAR_22;

 VAR_22 = VAR_21->ifp;

 FUNC_0(VAR_22, VAR_3, FUNC_1(VAR_21, VAR_10));
 FUNC_0(VAR_22, VAR_2, FUNC_1(VAR_21, VAR_11));
 FUNC_0(VAR_22, VAR_1,
     FUNC_1(VAR_21, VAR_9) +
     FUNC_1(VAR_21, VAR_12) +
     FUNC_1(VAR_21, VAR_8));

 FUNC_0(VAR_22, VAR_4, FUNC_1(VAR_21, VAR_13));
 FUNC_0(VAR_22, VAR_7, FUNC_1(VAR_21, VAR_15));
 FUNC_0(VAR_22, VAR_6, FUNC_1(VAR_21, VAR_16));
 FUNC_0(VAR_22, VAR_5,
     FUNC_1(VAR_21, VAR_17));

 FUNC_0(VAR_22, VAR_0,
     FUNC_1(VAR_21, VAR_20) +
     FUNC_1(VAR_21, VAR_19) +
     FUNC_1(VAR_21, VAR_18) +
     FUNC_1(VAR_21, VAR_14));
}
