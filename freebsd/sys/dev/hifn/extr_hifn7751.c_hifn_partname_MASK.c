
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hifn_softc {int sc_dev; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static const char*
FUNC_2(struct hifn_softc *VAR_0)
{

 switch (FUNC_1(VAR_0->sc_dev)) {
 case 130:
  switch (FUNC_0(VAR_0->sc_dev)) {
  case 138: return "Hifn 6500";
  case 137: return "Hifn 7751";
  case 136: return "Hifn 7811";
  case 135: return "Hifn 7951";
  case 134: return "Hifn 7955";
  case 133: return "Hifn 7956";
  }
  return "Hifn unknown-part";
 case 129:
  switch (FUNC_0(VAR_0->sc_dev)) {
  case 132: return "Invertex AEON";
  }
  return "Invertex unknown-part";
 case 128:
  switch (FUNC_0(VAR_0->sc_dev)) {
  case 131: return "NetSec 7751";
  }
  return "NetSec unknown-part";
 }
 return "Unknown-vendor unknown-part";
}
