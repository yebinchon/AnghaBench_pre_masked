
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puc_softc {struct puc_cfg const* sc_cfg; int sc_dev; } ;
struct puc_cfg {scalar_t__ ports; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct puc_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (struct puc_softc*,int ,int ,intptr_t*) ;

int
FUNC_3(device_t VAR_6, const struct puc_cfg *VAR_7)
{
 struct puc_softc *VAR_8;
 intptr_t VAR_9;
 int VAR_10;

 VAR_8 = FUNC_0(VAR_6);
 VAR_8->sc_dev = VAR_6;
 VAR_8->sc_cfg = VAR_7;


 if (VAR_7->ports == VAR_5 || VAR_7->ports == VAR_4)
  return (VAR_1);
 VAR_10 = FUNC_2(VAR_8, VAR_3, 0, &VAR_9);
 if (VAR_10)
  return (VAR_10);
 VAR_10 = FUNC_2(VAR_8, VAR_2, 0, &VAR_9);
 if (VAR_10)
  return (VAR_10);
 if (VAR_9 != 0)
  FUNC_1(VAR_6, (const char *)VAR_9);
 return (VAR_0);
}
