
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ip17x_softc {int miipoll; int sc_switchtype; } ;
typedef scalar_t__ phandle_t ;
typedef scalar_t__ pcell_t ;
typedef int device_t ;
typedef int cell ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (scalar_t__,char*,scalar_t__*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct ip17x_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,scalar_t__) ;
 int FUNC_10 (int ,char*) ;
 scalar_t__ FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (int ,int ,char*,int*) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_11)
{
 struct ip17x_softc *VAR_12;
 uint32_t VAR_13, VAR_14, VAR_15, VAR_16;
 VAR_12 = FUNC_7(VAR_11);


 VAR_15 = FUNC_0(FUNC_6(VAR_11), 0, VAR_9);
 VAR_16 = FUNC_0(FUNC_6(VAR_11), 0, VAR_10);

 VAR_13 = FUNC_2(VAR_15, VAR_16);
 VAR_14 = FUNC_1(VAR_16);

 if (VAR_13 != VAR_4) {
  FUNC_9(VAR_11,
      "Unsupported IC+ switch. Unknown OUI: %#x\n", VAR_13);
  return (VAR_1);
 }

 switch (VAR_14) {
 case 129:
  VAR_12->sc_switchtype = VAR_5;
  break;
 case 128:
  VAR_12->sc_switchtype = VAR_6;
  break;
 default:
  FUNC_9(VAR_11, "Unsupported IC+ switch model: %#x\n",
      VAR_14);
  return (VAR_1);
 }


 VAR_14 = FUNC_0(FUNC_6(VAR_11), VAR_2,
     VAR_3);
 if (VAR_14 == 0x175d)
  VAR_12->sc_switchtype = VAR_7;
 else {

  VAR_14 = FUNC_0(FUNC_6(VAR_11), 5, VAR_9);
  if (VAR_15 == VAR_14)
   VAR_12->sc_switchtype = VAR_8;
 }

 VAR_12->miipoll = 1;





 (void) FUNC_12(FUNC_5(VAR_11), FUNC_8(VAR_11),
     "mii-poll", &VAR_12->miipoll);

 FUNC_10(VAR_11, "IC+ IP17x switch driver");
 return (VAR_0);
}
