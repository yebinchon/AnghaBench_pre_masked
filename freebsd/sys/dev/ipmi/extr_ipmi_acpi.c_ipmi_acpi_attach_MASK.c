
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct ipmi_softc {int ipmi_io_rid; int ipmi_io_type; int ipmi_io_spacing; int ipmi_irq_rid; void* ipmi_irq_res; int ipmi_dev; int ** ipmi_io_res; } ;
struct ipmi_get_info {int address; } ;
typedef int device_t ;
typedef int ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int *,int *) ;

 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,char*,int*) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ,int,int*,int) ;
 scalar_t__ FUNC_6 (int ,int,int ,int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct ipmi_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct ipmi_softc*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct ipmi_softc*) ;
 scalar_t__ FUNC_15 (int *) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_7)
{
 ACPI_HANDLE VAR_8;
 const char *VAR_9;
 struct ipmi_get_info VAR_10;
 struct ipmi_softc *VAR_11 = FUNC_9(VAR_7);
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17 = 0, VAR_18 = 0;

 VAR_13 = 0;
 VAR_8 = FUNC_4(VAR_7);
 if (FUNC_0(FUNC_3(VAR_8, "_IFT", &VAR_17)))
  return (VAR_0);

 if (FUNC_0(FUNC_3(VAR_8, "_SRV", &VAR_18)))
  return (VAR_0);

 switch (VAR_17) {
 case 130:
  VAR_12 = 2;
  VAR_9 = "KCS";
  break;
 case 129:
  VAR_12 = 3;
  VAR_9 = "SMIC";
  break;
 case 131:
  FUNC_10(VAR_7, "BT interface not supported\n");
  return (VAR_0);
 case 128:
  if (FUNC_0(FUNC_3(VAR_8, "_ADR", &VAR_14)))
   return (VAR_0);
  VAR_10.address = VAR_14;
  FUNC_10(VAR_7, "SSIF interface not supported on ACPI\n");
  return (0);
 default:
  return (VAR_0);
 }

 if (FUNC_6(VAR_7, VAR_4, 0, ((void*)0), ((void*)0)) == 0)
  VAR_16 = VAR_4;
 else if (FUNC_6(VAR_7, VAR_6, 0, ((void*)0), ((void*)0)) == 0)
  VAR_16 = VAR_6;
 else {
  FUNC_10(VAR_7, "unknown resource type\n");
  return (VAR_0);
 }

 VAR_11->ipmi_io_rid = 0;
 VAR_11->ipmi_io_res[0] = FUNC_5(VAR_7, VAR_16,
     &VAR_11->ipmi_io_rid, VAR_2);
 VAR_11->ipmi_io_type = VAR_16;
 VAR_11->ipmi_io_spacing = 1;
 if (VAR_11->ipmi_io_res[0] == ((void*)0)) {
  FUNC_10(VAR_7, "couldn't configure I/O resource\n");
  return (VAR_0);
 }


 for (VAR_15 = 1; VAR_15 < VAR_1; VAR_15++) {
  VAR_11->ipmi_io_rid = VAR_15;
  VAR_11->ipmi_io_res[VAR_15] = FUNC_5(VAR_7, VAR_16,
      &VAR_11->ipmi_io_rid, VAR_2);
  if (VAR_11->ipmi_io_res[VAR_15] == ((void*)0))
   break;
 }
 VAR_11->ipmi_io_rid = 0;


 if (VAR_11->ipmi_io_res[1] != ((void*)0) && VAR_11->ipmi_io_res[VAR_12 - 1] == ((void*)0)) {
  FUNC_10(VAR_7, "too few I/O resources\n");
  VAR_13 = VAR_0;
  goto bad;
 }

 FUNC_10(VAR_7, "%s mode found at %s 0x%jx on %s\n",
     VAR_9, VAR_16 == VAR_4 ? "io" : "mem",
     (uintmax_t)FUNC_15(VAR_11->ipmi_io_res[0]),
     FUNC_7(FUNC_8(VAR_7)));

 VAR_11->ipmi_dev = VAR_7;





 VAR_11->ipmi_irq_rid = 0;
 VAR_11->ipmi_irq_res = FUNC_5(VAR_7, VAR_5,
     &VAR_11->ipmi_irq_rid, VAR_3 | VAR_2);


 if (FUNC_1(FUNC_2(VAR_8, "_GPE", ((void*)0), ((void*)0))))
  FUNC_10(VAR_7, "_GPE support not implemented\n");





 switch (VAR_17) {
 case 130:
  VAR_13 = FUNC_12(VAR_11);
  if (VAR_13)
   goto bad;
  break;
 case 129:
  VAR_13 = FUNC_14(VAR_11);
  if (VAR_13)
   goto bad;
  break;
 }
 VAR_13 = FUNC_11(VAR_7);
 if (VAR_13)
  goto bad;

 return (0);
bad:
 FUNC_13(VAR_7);
 return (VAR_13);
}
