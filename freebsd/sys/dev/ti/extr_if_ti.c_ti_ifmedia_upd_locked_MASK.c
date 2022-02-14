
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifmedia {int ifm_media; } ;
struct ti_softc {int ti_hwrev; struct ifmedia ifmedia; } ;
struct ti_cmd_desc {int dummy; } ;


 int FUNC_0 (struct ti_softc*,int ,int) ;
 int VAR_0 ;







 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_4 (struct ti_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct ti_softc *VAR_27)
{
 struct ifmedia *VAR_28;
 struct ti_cmd_desc VAR_29;
 uint32_t VAR_30;

 VAR_28 = &VAR_27->ifmedia;

 if (FUNC_2(VAR_28->ifm_media) != VAR_1)
  return (VAR_0);

 VAR_30 = 0;

 switch (FUNC_1(VAR_28->ifm_media)) {
 case 128:



  VAR_30 = VAR_15;
  FUNC_0(VAR_27, VAR_8, VAR_14|VAR_10|
      VAR_13| VAR_30 |
      VAR_11|VAR_12);

  VAR_30 = VAR_25;





  FUNC_0(VAR_27, VAR_9, VAR_18|VAR_19|
      VAR_22|VAR_23| VAR_30 |
      VAR_20|VAR_21);
  FUNC_3(VAR_7,
      VAR_5, 0);
  break;
 case 134:
 case 133:
  VAR_30 = VAR_15;





  FUNC_0(VAR_27, VAR_8, VAR_14|VAR_10|
      VAR_30 |VAR_12);
  FUNC_0(VAR_27, VAR_9, 0);
  if ((VAR_28->ifm_media & VAR_3) == VAR_2) {
   FUNC_4(VAR_27, VAR_8, VAR_13);
  }
  FUNC_3(VAR_7,
      VAR_6, 0);
  break;
 case 132:
 case 130:
 case 131:
 case 129:
  VAR_30 = VAR_25;





  FUNC_0(VAR_27, VAR_8, 0);
  FUNC_0(VAR_27, VAR_9, VAR_21|VAR_24|VAR_30);
  if (FUNC_1(VAR_28->ifm_media) == 132 ||
      FUNC_1(VAR_28->ifm_media) == 131) {
   FUNC_4(VAR_27, VAR_9, VAR_18);
  } else {
   FUNC_4(VAR_27, VAR_9, VAR_19);
  }
  if ((VAR_28->ifm_media & VAR_3) == VAR_2) {
   FUNC_4(VAR_27, VAR_9, VAR_22);
  } else {
   FUNC_4(VAR_27, VAR_9, VAR_23);
  }
  FUNC_3(VAR_7,
      VAR_4, 0);
  break;
 }

 return (0);
}
