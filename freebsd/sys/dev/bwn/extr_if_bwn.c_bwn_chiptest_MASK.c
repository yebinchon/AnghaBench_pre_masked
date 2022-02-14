
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bwn_softc {int sc_dev; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 int FUNC_0 (struct bwn_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bwn_mac*,int ) ;
 scalar_t__ FUNC_2 (struct bwn_mac*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct bwn_softc*) ;
 int FUNC_4 (struct bwn_mac*,int ,int) ;
 int FUNC_5 (struct bwn_mac*,int ,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct bwn_mac*,int ,int ) ;
 int FUNC_8 (struct bwn_mac*,int ,int ,scalar_t__) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static int
FUNC_10(struct bwn_mac *VAR_10)
{


 struct bwn_softc *VAR_11 = VAR_10->mac_sc;
 uint32_t VAR_12, VAR_13;

 FUNC_0(VAR_11);

 VAR_13 = FUNC_7(VAR_10, VAR_3, 0);

 FUNC_8(VAR_10, VAR_3, 0, 0x55aaaa55);
 if (FUNC_7(VAR_10, VAR_3, 0) != 0x55aaaa55)
  goto error;
 FUNC_8(VAR_10, VAR_3, 0, 0xaa5555aa);
 if (FUNC_7(VAR_10, VAR_3, 0) != 0xaa5555aa)
  goto error;

 FUNC_8(VAR_10, VAR_3, 0, VAR_13);

 if ((FUNC_6(VAR_11->sc_dev) >= 3) &&
     (FUNC_6(VAR_11->sc_dev) <= 10)) {
  FUNC_4(VAR_10, VAR_4, 0xaaaa);
  FUNC_5(VAR_10, VAR_4, 0xccccbbbb);
  if (FUNC_1(VAR_10, VAR_6) != 0xbbbb)
   goto error;
  if (FUNC_1(VAR_10, VAR_5) != 0xcccc)
   goto error;
 }
 FUNC_5(VAR_10, VAR_4, 0);

 VAR_12 = FUNC_2(VAR_10, VAR_0) | VAR_1;
 if (VAR_12 != (VAR_1 | VAR_2))
  goto error;

 FUNC_3(VAR_11);
 return (0);
error:
 FUNC_3(VAR_11);
 FUNC_9(VAR_11->sc_dev, "failed to validate the chipaccess\n");
 return (VAR_7);
}
