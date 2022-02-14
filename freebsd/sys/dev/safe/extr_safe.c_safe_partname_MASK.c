
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safe_softc {int sc_dev; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static const char*
FUNC_2(struct safe_softc *VAR_0)
{

 switch (FUNC_1(VAR_0->sc_dev)) {
 case 128:
  switch (FUNC_0(VAR_0->sc_dev)) {
  case 129: return "SafeNet SafeXcel-1141";
  }
  return "SafeNet unknown-part";
 }
 return "Unknown-vendor unknown-part";
}
