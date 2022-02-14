
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct twl_clks_softc {int sc_dev; int sc_pdev; int sc_sx; } ;
struct twl_clk_entry {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct twl_clks_softc*) ;
 int VAR_7 ;
 int FUNC_1 (struct twl_clks_softc*) ;
 int FUNC_2 (struct twl_clks_softc*) ;
 int VAR_8 ;
 int FUNC_3 (int ,char*,int ,char*) ;
 int FUNC_4 (int *) ;
 int VAR_9 ;
 int FUNC_5 (struct twl_clks_softc*,struct twl_clk_entry*,int ,int*) ;
 int FUNC_6 (struct twl_clks_softc*,struct twl_clk_entry*,int ,int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct twl_clks_softc *VAR_10, struct twl_clk_entry *VAR_11,
 int VAR_12)
{
 int VAR_13;
 int VAR_14;
 uint8_t VAR_15;

 FUNC_0(VAR_10);


 VAR_13 = FUNC_4(&VAR_10->sc_sx);
 if (!VAR_13)
  FUNC_2(VAR_10);

 VAR_14 = FUNC_5(VAR_10, VAR_11, VAR_7, &VAR_15);
 if (VAR_14)
  goto done;

 if (FUNC_7(VAR_10->sc_pdev)) {




  if (VAR_12)
   VAR_15 |= VAR_1;
  else
   VAR_15 &= ~(VAR_1 | VAR_2 | VAR_3);

  VAR_14 = FUNC_6(VAR_10, VAR_11, VAR_7, VAR_15);

 } else if (FUNC_9(VAR_10->sc_pdev) || FUNC_8(VAR_10->sc_pdev)) {


  if (FUNC_9(VAR_10->sc_pdev) && !(VAR_15 & VAR_4)) {
   VAR_15 |= VAR_4;
   VAR_14 = FUNC_6(VAR_10, VAR_11, VAR_7, VAR_15);
   if (VAR_14)
    goto done;
  }


  if (FUNC_9(VAR_10->sc_pdev))
   VAR_15 = VAR_4 | VAR_5 | VAR_6;
  else
   VAR_15 = 0x00;


  if (VAR_12)
   VAR_14 = FUNC_6(VAR_10, VAR_11, VAR_8, (VAR_15 << 5) | 0x01);
  else
   VAR_14 = FUNC_6(VAR_10, VAR_11, VAR_8, (VAR_15 << 5));

 } else {

  VAR_14 = VAR_0;
 }

done:
 if (!VAR_13)
  FUNC_1(VAR_10);

 if ((VAR_9 > 1) && !VAR_14)
  FUNC_3(VAR_10->sc_dev, "%s : %sabled\n", VAR_11->name,
   VAR_12 ? "en" : "dis");

 return (VAR_14);
}
