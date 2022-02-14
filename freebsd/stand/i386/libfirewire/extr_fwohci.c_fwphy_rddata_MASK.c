
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct TYPE_2__ {int dev; } ;
struct fwohci_softc {TYPE_1__ fc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct fwohci_softc*,int ) ;
 int FUNC_2 (struct fwohci_softc*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static uint32_t
FUNC_4(struct fwohci_softc *VAR_10, u_int VAR_11)
{
 uint32_t VAR_12, VAR_13;
 u_int VAR_14, VAR_15 = 0;

 VAR_11 &= 0xf;

again:
 FUNC_2(VAR_10, VAR_1, VAR_3);
 VAR_12 = VAR_5 | (VAR_11 << VAR_8);
 FUNC_2(VAR_10, VAR_4, VAR_12);
 for ( VAR_14 = 0 ; VAR_14 < 100 ; VAR_14 ++ ){
  VAR_12 = FUNC_1(VAR_10, VAR_4);
  if ((VAR_12 & VAR_5) == 0 && (VAR_12 & VAR_7) != 0)
   break;
  FUNC_0(100);
 }
 if(VAR_14 >= 100) {
  if (VAR_9)
   FUNC_3(VAR_10->fc.dev, "phy read failed(1).\n");
  if (++VAR_15 < 100) {
   FUNC_0(100);
   goto again;
  }
 }

 VAR_13 = FUNC_1(VAR_10, VAR_0);
 if ((VAR_13 & VAR_3) != 0 ||
   ((VAR_12 >> VAR_8) & 0xf) != VAR_11) {
  if (VAR_9)
   FUNC_3(VAR_10->fc.dev, "phy read failed(2).\n");
  if (++VAR_15 < 100) {
   FUNC_0(100);
   goto again;
  }
 }
 if (VAR_9 || VAR_15 >= 100)
  FUNC_3(VAR_10->fc.dev,
      "fwphy_rddata: 0x%x loop=%d, retry=%d\n", VAR_11, VAR_14, VAR_15);

 return((VAR_12 >> VAR_6 )& 0xff);
}
