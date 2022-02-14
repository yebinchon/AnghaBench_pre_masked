
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct ipmi_softc {int ipmi_io_type; scalar_t__ ipmi_irq_rid; void* ipmi_irq_res; int ** ipmi_io_res; int ipmi_io_spacing; scalar_t__ ipmi_io_rid; int ipmi_dev; } ;
struct ipmi_get_info {int iface_type; int offset; scalar_t__ io_mode; scalar_t__ address; } ;
typedef int device_t ;



 int VAR_0 ;

 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int ,int,scalar_t__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct ipmi_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ipmi_softc*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ipmi_get_info*) ;
 int FUNC_10 (struct ipmi_softc*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_6)
{
 struct ipmi_softc *VAR_7 = FUNC_4(VAR_6);
 struct ipmi_get_info VAR_8;
 const char *VAR_9;
 int VAR_10, VAR_11;


 if (!FUNC_9(&VAR_8))
  return (VAR_0);

 VAR_7->ipmi_dev = VAR_6;

 switch (VAR_8.iface_type) {
 case 129:
  VAR_9 = "KCS";
  break;
 case 128:
  VAR_9 = "SMIC";
  break;
 case 130:
  FUNC_5(VAR_6, "BT mode is unsupported\n");
  return (VAR_0);
 default:
  FUNC_5(VAR_6, "No IPMI interface found\n");
  return (VAR_0);
 }

 FUNC_5(VAR_6, "%s mode found at %s 0x%jx alignment 0x%x on %s\n",
     VAR_9, VAR_8.io_mode ? "io" : "mem",
     (uintmax_t)VAR_8.address, VAR_8.offset,
     FUNC_2(FUNC_3(VAR_6)));
 if (VAR_8.io_mode)
  VAR_11 = VAR_3;
 else
  VAR_11 = VAR_5;

 VAR_7->ipmi_io_rid = FUNC_0(0);
 VAR_7->ipmi_io_res[0] = FUNC_1(VAR_6, VAR_11,
     &VAR_7->ipmi_io_rid, VAR_1);
 VAR_7->ipmi_io_type = VAR_11;
 VAR_7->ipmi_io_spacing = VAR_8.offset;

 if (VAR_7->ipmi_io_res[0] == ((void*)0)) {
  FUNC_5(VAR_6, "couldn't configure pci io res\n");
  return (VAR_0);
 }

 VAR_7->ipmi_irq_rid = 0;
 VAR_7->ipmi_irq_res = FUNC_1(VAR_6, VAR_4,
     &VAR_7->ipmi_irq_rid, VAR_2 | VAR_1);

 switch (VAR_8.iface_type) {
 case 129:
  VAR_10 = FUNC_7(VAR_7);
  if (VAR_10)
   goto bad;
  break;
 case 128:
  VAR_10 = FUNC_10(VAR_7);
  if (VAR_10)
   goto bad;
  break;
 }
 VAR_10 = FUNC_6(VAR_6);
 if (VAR_10)
  goto bad;

 return (0);
bad:
 FUNC_8(VAR_6);
 return (VAR_10);
}
