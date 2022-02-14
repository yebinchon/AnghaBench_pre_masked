
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint8_t ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_4__ {scalar_t__ limit; scalar_t__ base; } ;
struct TYPE_3__ {int sec; int sub; } ;
struct pcib_softc {int domain; int bridgectl; int pribus; int flags; scalar_t__ pmemlimit; scalar_t__ pmembase; scalar_t__ memlimit; scalar_t__ membase; int iolimit; int iobase; TYPE_2__ pmem; TYPE_2__ mem; TYPE_2__ io; TYPE_1__ bus; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int ,int*,int ,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 scalar_t__ VAR_14 ;
 struct pcib_softc* FUNC_2 (int ) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,int,int) ;
 int FUNC_15 (int ,int,int,int) ;
 int FUNC_16 (struct pcib_softc*) ;
 scalar_t__ FUNC_17 (struct pcib_softc*) ;
 scalar_t__ FUNC_18 (struct pcib_softc*) ;
 scalar_t__ FUNC_19 (struct pcib_softc*) ;
 scalar_t__ FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (struct pcib_softc*) ;
 int FUNC_22 (struct pcib_softc*) ;
 int FUNC_23 (struct pcib_softc*) ;
 int FUNC_24 (int ,TYPE_1__*,int) ;
 int FUNC_25 (char*,...) ;
 int FUNC_26 (char*,char*,int) ;

void
FUNC_27(device_t VAR_15)
{
    struct pcib_softc *VAR_16;
    struct sysctl_ctx_list *VAR_17;
    struct sysctl_oid *VAR_18;
    int VAR_19;

    VAR_16 = FUNC_2(VAR_15);
    VAR_16->dev = VAR_15;




    VAR_16->domain = FUNC_11(VAR_15);

    VAR_16->bus.sec = FUNC_14(VAR_15, VAR_12, 1);
    VAR_16->bus.sub = FUNC_14(VAR_15, VAR_13, 1);

    VAR_16->bridgectl = FUNC_14(VAR_15, VAR_9, 2);
    FUNC_16(VAR_16);





    VAR_16->pribus = FUNC_9(VAR_15);
    FUNC_15(VAR_15, VAR_10, VAR_16->pribus, 1);




    VAR_17 = FUNC_3(VAR_15);
    VAR_18 = FUNC_4(VAR_15);
    FUNC_0(VAR_17, FUNC_1(VAR_18), VAR_1, "domain",
      VAR_0, &VAR_16->domain, 0, "Domain number");
    FUNC_0(VAR_17, FUNC_1(VAR_18), VAR_1, "pribus",
      VAR_0, &VAR_16->pribus, 0, "Primary bus number");
    FUNC_0(VAR_17, FUNC_1(VAR_18), VAR_1, "secbus",
      VAR_0, &VAR_16->bus.sec, 0, "Secondary bus number");
    FUNC_0(VAR_17, FUNC_1(VAR_18), VAR_1, "subbus",
      VAR_0, &VAR_16->bus.sub, 0, "Subordinate bus number");




    switch (FUNC_10(VAR_15)) {

    case 0x12258086:
 {
     uint8_t VAR_20;

     VAR_20 = FUNC_14(VAR_15, 0x41, 1);
     if (VAR_20 != 0xff) {
  VAR_16->bus.sec = VAR_20 + 1;
  VAR_16->bus.sub = VAR_20 + 1;
     }
     break;
 }
    case 0xa002177d:
    case 0x124b8086:
    case 0x060513d7:
 VAR_16->flags |= VAR_7;
 break;



    case 0x00dd10de:
 {
     char *VAR_21;

     if ((VAR_21 = FUNC_7("smbios.planar.maker")) == ((void*)0))
  break;
     if (FUNC_26(VAR_21, "Compal", 6) != 0) {
  FUNC_6(VAR_21);
  break;
     }
     FUNC_6(VAR_21);
     if ((VAR_21 = FUNC_7("smbios.planar.product")) == ((void*)0))
  break;
     if (FUNC_26(VAR_21, "08A0", 4) != 0) {
  FUNC_6(VAR_21);
  break;
     }
     FUNC_6(VAR_21);
     if (VAR_16->bus.sub < 0xa) {
  FUNC_15(VAR_15, VAR_13, 0xa, 1);
  VAR_16->bus.sub = FUNC_14(VAR_15, VAR_13, 1);
     }
     break;
 }

    }

    if (FUNC_12(VAR_15))
 VAR_16->flags |= VAR_4;

    if (FUNC_13(VAR_15))
 VAR_16->flags |= VAR_5;
    if ((FUNC_10(VAR_15) & 0xff00ffff) == 0x24008086 ||
      FUNC_14(VAR_15, VAR_11, 1) == VAR_8)
 VAR_16->flags |= VAR_7;
    if (VAR_14) {
 FUNC_5(VAR_15, "  domain            %d\n", VAR_16->domain);
 FUNC_5(VAR_15, "  secondary bus     %d\n", VAR_16->bus.sec);
 FUNC_5(VAR_15, "  subordinate bus   %d\n", VAR_16->bus.sub);
 if (FUNC_17(VAR_16))
     FUNC_5(VAR_15, "  I/O decode        0x%x-0x%x\n",
       VAR_16->iobase, VAR_16->iolimit);
 if (FUNC_18(VAR_16))
     FUNC_5(VAR_15, "  memory decode     0x%jx-0x%jx\n",
       (uintmax_t)VAR_16->membase, (uintmax_t)VAR_16->memlimit);
 if (FUNC_19(VAR_16))
     FUNC_5(VAR_15, "  prefetched decode 0x%jx-0x%jx\n",
       (uintmax_t)VAR_16->pmembase, (uintmax_t)VAR_16->pmemlimit);

 if (VAR_16->bridgectl & (VAR_2 | VAR_3) ||
     VAR_16->flags & VAR_7) {
  FUNC_5(VAR_15, "  special decode    ");
  VAR_19 = 0;
  if (VAR_16->bridgectl & VAR_2) {
   FUNC_25("ISA");
   VAR_19 = 1;
  }
  if (VAR_16->bridgectl & VAR_3) {
   FUNC_25("%sVGA", VAR_19 ? ", " : "");
   VAR_19 = 1;
  }
  if (VAR_16->flags & VAR_7)
   FUNC_25("%ssubtractive", VAR_19 ? ", " : "");
  FUNC_25("\n");
 }
    }






    FUNC_8(VAR_15);
}
