
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {int dummy; } ;
typedef int phandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mii_softc*,int ,int,int ,char*,int,int ,char*,int,int,char*,int,int,char*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct mii_softc *VAR_4, phandle_t VAR_5)
{

 FUNC_0(VAR_4, VAR_5, 2, VAR_1,
     "txen-skew-ps", 0xf, 0, "rxdv-skew-ps", 0xf, 4,
     ((void*)0), 0, 0, ((void*)0), 0, 0);
 FUNC_0(VAR_4, VAR_5, 2, VAR_2,
     "rxd0-skew-ps", 0xf, 0, "rxd1-skew-ps", 0xf, 4,
     "rxd2-skew-ps", 0xf, 8, "rxd3-skew-ps", 0xf, 12);
 FUNC_0(VAR_4, VAR_5, 2, VAR_3,
     "txd0-skew-ps", 0xf, 0, "txd1-skew-ps", 0xf, 4,
     "txd2-skew-ps", 0xf, 8, "txd3-skew-ps", 0xf, 12);
 FUNC_0(VAR_4, VAR_5, 2, VAR_0,
     "rxc-skew-ps", 0x1f, 0, "txc-skew-ps", 0x1f, 5,
     ((void*)0), 0, 0, ((void*)0), 0, 0);
}
