
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct ipmi_softc {int ipmi_io_type; int ipmi_io_spacing; int ipmi_io_rid; int ipmi_irq_rid; void* ipmi_irq_res; int ** ipmi_io_res; int ipmi_dev; } ;
struct ipmi_get_info {int iface_type; scalar_t__ address; int offset; scalar_t__ irq; scalar_t__ io_mode; } ;
typedef int device_t ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int,int*,scalar_t__,scalar_t__,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ipmi_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct ipmi_get_info*) ;
 int FUNC_7 (struct ipmi_softc*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ipmi_get_info*) ;
 int FUNC_10 (struct ipmi_softc*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_6)
{
 struct ipmi_softc *VAR_7 = FUNC_3(VAR_6);
 struct ipmi_get_info VAR_8;
 const char *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;





 if (!FUNC_9(&VAR_8) &&
     !FUNC_6(VAR_6, &VAR_8))
  return (VAR_0);

 switch (VAR_8.iface_type) {
 case 129:
  VAR_10 = 2;
  VAR_9 = "KCS";
  break;
 case 128:
  VAR_10 = 3;
  VAR_9 = "SMIC";
  break;
 case 130:
  FUNC_4(VAR_6, "BT mode is unsupported\n");
  return (VAR_0);
 default:
  return (VAR_0);
 }
 VAR_11 = 0;
 VAR_7->ipmi_dev = VAR_6;

 FUNC_4(VAR_6, "%s mode found at %s 0x%jx alignment 0x%x on %s\n",
     VAR_9, VAR_8.io_mode ? "io" : "mem",
     (uintmax_t)VAR_8.address, VAR_8.offset,
     FUNC_1(FUNC_2(VAR_6)));
 if (VAR_8.io_mode)
  VAR_13 = VAR_3;
 else
  VAR_13 = VAR_5;

 VAR_7->ipmi_io_type = VAR_13;
 VAR_7->ipmi_io_spacing = VAR_8.offset;
 if (VAR_8.offset == 1) {
  VAR_7->ipmi_io_rid = 0;
  VAR_7->ipmi_io_res[0] = FUNC_0(VAR_6, VAR_13,
      &VAR_7->ipmi_io_rid, VAR_8.address, VAR_8.address + VAR_10 - 1,
      VAR_10, VAR_1);
  if (VAR_7->ipmi_io_res[0] == ((void*)0)) {
   FUNC_4(VAR_6, "couldn't configure I/O resource\n");
   return (VAR_0);
  }
 } else {
  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
   VAR_7->ipmi_io_rid = VAR_12;
   VAR_7->ipmi_io_res[VAR_12] = FUNC_0(VAR_6, VAR_13,
       &VAR_7->ipmi_io_rid, VAR_8.address + VAR_12 * VAR_8.offset,
       VAR_8.address + VAR_12 * VAR_8.offset, 1, VAR_1);
   if (VAR_7->ipmi_io_res[VAR_12] == ((void*)0)) {
    FUNC_4(VAR_6,
        "couldn't configure I/O resource\n");
    VAR_11 = VAR_0;
    VAR_7->ipmi_io_rid = 0;
    goto bad;
   }
  }
  VAR_7->ipmi_io_rid = 0;
 }

 if (VAR_8.irq != 0) {
  VAR_7->ipmi_irq_rid = 0;
  VAR_7->ipmi_irq_res = FUNC_0(VAR_6, VAR_4,
      &VAR_7->ipmi_irq_rid, VAR_8.irq, VAR_8.irq, 1,
      VAR_2 | VAR_1);
 }

 switch (VAR_8.iface_type) {
 case 129:
  VAR_11 = FUNC_7(VAR_7);
  if (VAR_11)
   goto bad;
  break;
 case 128:
  VAR_11 = FUNC_10(VAR_7);
  if (VAR_11)
   goto bad;
  break;
 }

 VAR_11 = FUNC_5(VAR_6);
 if (VAR_11)
  goto bad;

 return (0);
bad:
 FUNC_8(VAR_6);
 return (VAR_11);
}
