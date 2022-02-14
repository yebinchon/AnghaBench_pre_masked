
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubsec_softc {int sc_dev; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static const char*
FUNC_2(struct ubsec_softc *VAR_0)
{

 switch (FUNC_1(VAR_0->sc_dev)) {
 case 129:
  switch (FUNC_0(VAR_0->sc_dev)) {
  case 140: return "Broadcom 5801";
  case 139: return "Broadcom 5802";
  case 138: return "Broadcom 5805";
  case 137: return "Broadcom 5820";
  case 136: return "Broadcom 5821";
  case 135: return "Broadcom 5822";
  case 134: return "Broadcom 5823";
  case 133: return "Broadcom 5825";
  }
  return "Broadcom unknown-part";
 case 130:
  switch (FUNC_0(VAR_0->sc_dev)) {
  case 141: return "Bluesteel 5601";
  }
  return "Bluesteel unknown-part";
 case 128:
  switch (FUNC_0(VAR_0->sc_dev)) {
  case 132: return "Sun Crypto 5821";
  case 131: return "Sun Crypto 1K";
  }
  return "Sun unknown-part";
 }
 return "Unknown-vendor unknown-part";
}
