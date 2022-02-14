
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int ipmi_io_type; int ipmi_io_spacing; scalar_t__ ipmi_irq_rid; void* ipmi_irq_res; int ** ipmi_io_res; scalar_t__ ipmi_io_rid; int ipmi_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (int ,int,scalar_t__*,int) ;
 struct ipmi_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ipmi_softc*) ;
 int FUNC_7 (struct ipmi_softc*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ipmi_softc*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_7)
{
 struct ipmi_softc *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_8 = FUNC_3(VAR_7);
 VAR_8->ipmi_dev = VAR_7;


 switch (FUNC_10(VAR_7)) {
 case 129:
  VAR_10 = 128;
  break;
 case 130:
  VAR_10 = 132;
  break;
 case 131:
  VAR_10 = VAR_0;
  FUNC_4(VAR_7, "BT interface unsupported\n");
  return (VAR_1);
 default:
  FUNC_4(VAR_7, "Unsupported interface: %d\n",
      FUNC_10(VAR_7));
  return (VAR_1);
 }


 VAR_8->ipmi_io_rid = FUNC_0(0);
 if (FUNC_1(FUNC_11(VAR_7, FUNC_0(0), 4)))
  VAR_11 = VAR_4;
 else
  VAR_11 = VAR_6;
 VAR_8->ipmi_io_type = VAR_11;
 VAR_8->ipmi_io_spacing = 1;
 VAR_8->ipmi_io_res[0] = FUNC_2(VAR_7, VAR_11,
     &VAR_8->ipmi_io_rid, VAR_2);
 if (VAR_8->ipmi_io_res[0] == ((void*)0)) {
  FUNC_4(VAR_7, "couldn't map ports/memory\n");
  return (VAR_1);
 }

 VAR_8->ipmi_irq_rid = 0;
 VAR_8->ipmi_irq_res = FUNC_2(VAR_7, VAR_5,
     &VAR_8->ipmi_irq_rid, VAR_3 | VAR_2);

 switch (VAR_10) {
 case 132:
  FUNC_4(VAR_7, "using KSC interface\n");





  if (!FUNC_7(VAR_8)) {
   FUNC_4(VAR_7, "Unable to determine alignment\n");
   VAR_9 = VAR_1;
   goto bad;
  }

  VAR_9 = FUNC_6(VAR_8);
  if (VAR_9)
   goto bad;
  break;
 case 128:
  FUNC_4(VAR_7, "using SMIC interface\n");

  VAR_9 = FUNC_9(VAR_8);
  if (VAR_9)
   goto bad;
  break;
 }
 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9)
  goto bad;

 return (0);
bad:
 FUNC_8(VAR_7);
 return (VAR_9);
}
