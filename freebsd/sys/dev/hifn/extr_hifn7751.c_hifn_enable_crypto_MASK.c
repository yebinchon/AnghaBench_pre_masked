
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct hifn_softc {int sc_dev; } ;
struct TYPE_3__ {scalar_t__ pci_vendor; scalar_t__ pci_prod; char* card_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;



 int VAR_9 ;
 int VAR_10 ;
 size_t FUNC_1 (struct hifn_softc*,int ) ;
 size_t FUNC_2 (struct hifn_softc*,int ) ;
 int FUNC_3 (struct hifn_softc*,int ,size_t) ;
 int FUNC_4 (struct hifn_softc*,int ,size_t) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ VAR_11 ;
 size_t FUNC_6 (size_t,char) ;
 size_t FUNC_7 (TYPE_1__*) ;
 TYPE_1__* VAR_12 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct hifn_softc *VAR_13)
{
 u_int32_t VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 char *VAR_19 = ((void*)0);

 for (VAR_18 = 0; VAR_18 < FUNC_7(VAR_12); VAR_18++) {
  if (VAR_12[VAR_18].pci_vendor == FUNC_9(VAR_13->sc_dev) &&
      VAR_12[VAR_18].pci_prod == FUNC_8(VAR_13->sc_dev)) {
   VAR_19 = VAR_12[VAR_18].card_id;
   break;
  }
 }
 if (VAR_19 == ((void*)0)) {
  FUNC_5(VAR_13->sc_dev, "Unknown card!\n");
  return (1);
 }

 VAR_15 = FUNC_1(VAR_13, VAR_0);
 VAR_14 = FUNC_2(VAR_13, VAR_2);





 FUNC_3(VAR_13, VAR_0, VAR_15 | VAR_7);

 VAR_16 = FUNC_1(VAR_13, VAR_1) & VAR_8;





 if (VAR_16 == 129 || VAR_16 == 128) {





  goto report;
 }

 if (VAR_16 != 0 && VAR_16 != 130) {





  return 1;
 }

 FUNC_4(VAR_13, VAR_2, VAR_6 |
     VAR_5 | VAR_3 | VAR_4);
 FUNC_0(1000);
 VAR_17 = FUNC_2(VAR_13, VAR_9);
 FUNC_0(1000);
 FUNC_4(VAR_13, VAR_10, 0);
 FUNC_0(1000);

 for (VAR_18 = 0; VAR_18 <= 12; VAR_18++) {
  VAR_17 = FUNC_6(VAR_17, VAR_19[VAR_18] + 0x101);
  FUNC_4(VAR_13, VAR_10, VAR_17);

  FUNC_0(1000);
 }

 FUNC_3(VAR_13, VAR_0, VAR_15 | VAR_7);
 VAR_16 = FUNC_1(VAR_13, VAR_1) & VAR_8;
report:
 FUNC_3(VAR_13, VAR_0, VAR_15);
 FUNC_4(VAR_13, VAR_2, VAR_14);

 switch (VAR_16) {
 case 129:
 case 128:
  break;
 case 130:
 default:
  FUNC_5(VAR_13->sc_dev, "disabled");
  break;
 }

 return 0;
}
