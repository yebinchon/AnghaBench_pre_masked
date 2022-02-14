
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pl310_softc {int sc_dev; } ;


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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct pl310_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(struct pl310_softc *VAR_16)
{
 uint32_t VAR_17, VAR_18;
 const char *VAR_19 = "disabled";
 const char *VAR_20 = "enabled";

 VAR_17 = FUNC_1(VAR_16, VAR_6);
 VAR_18 = FUNC_1(VAR_16, VAR_7);

 FUNC_0(VAR_16->sc_dev, "Early BRESP response: %s\n",
  (VAR_17 & VAR_1) ? VAR_20 : VAR_19);
 FUNC_0(VAR_16->sc_dev, "Instruction prefetch: %s\n",
  (VAR_17 & VAR_2) ? VAR_20 : VAR_19);
 FUNC_0(VAR_16->sc_dev, "Data prefetch: %s\n",
  (VAR_17 & VAR_0) ? VAR_20 : VAR_19);
 FUNC_0(VAR_16->sc_dev, "Non-secure interrupt control: %s\n",
  (VAR_17 & VAR_3) ? VAR_20 : VAR_19);
 FUNC_0(VAR_16->sc_dev, "Non-secure lockdown: %s\n",
  (VAR_17 & VAR_4) ? VAR_20 : VAR_19);
 FUNC_0(VAR_16->sc_dev, "Share override: %s\n",
  (VAR_17 & VAR_5) ? VAR_20 : VAR_19);

 FUNC_0(VAR_16->sc_dev, "Double linefill: %s\n",
  (VAR_18 & VAR_9) ? VAR_20 : VAR_19);
 FUNC_0(VAR_16->sc_dev, "Instruction prefetch: %s\n",
  (VAR_18 & VAR_12) ? VAR_20 : VAR_19);
 FUNC_0(VAR_16->sc_dev, "Data prefetch: %s\n",
  (VAR_18 & VAR_8) ? VAR_20 : VAR_19);
 FUNC_0(VAR_16->sc_dev, "Double linefill on WRAP request: %s\n",
  (VAR_18 & VAR_10) ? VAR_20 : VAR_19);
 FUNC_0(VAR_16->sc_dev, "Prefetch drop: %s\n",
  (VAR_18 & VAR_15) ? VAR_20 : VAR_19);
 FUNC_0(VAR_16->sc_dev, "Incr double Linefill: %s\n",
  (VAR_18 & VAR_11) ? VAR_20 : VAR_19);
 FUNC_0(VAR_16->sc_dev, "Not same ID on exclusive sequence: %s\n",
  (VAR_18 & VAR_13) ? VAR_20 : VAR_19);
 FUNC_0(VAR_16->sc_dev, "Prefetch offset: %d\n",
  (VAR_18 & VAR_14));
}
