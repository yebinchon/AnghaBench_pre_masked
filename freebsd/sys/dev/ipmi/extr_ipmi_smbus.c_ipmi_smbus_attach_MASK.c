
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {scalar_t__ ipmi_irq_rid; int ipmi_irq_res; int ipmi_dev; } ;
struct ipmi_get_info {scalar_t__ iface_type; scalar_t__ irq; scalar_t__ address; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,scalar_t__*,scalar_t__,scalar_t__,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ipmi_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ipmi_get_info*) ;
 int FUNC_8 (struct ipmi_softc*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_5)
{
 struct ipmi_softc *VAR_6 = FUNC_3(VAR_5);
 struct ipmi_get_info VAR_7;
 int VAR_8;


 if (!FUNC_7(&VAR_7))
  return (VAR_0);

 if (VAR_7.iface_type != VAR_3) {
  FUNC_4(VAR_5, "No SSIF IPMI interface found\n");
  return (VAR_0);
 }

 VAR_6->ipmi_dev = VAR_5;

 if (VAR_7.irq != 0) {
  VAR_6->ipmi_irq_rid = 0;
  VAR_6->ipmi_irq_res = FUNC_0(VAR_5, VAR_4,
      &VAR_6->ipmi_irq_rid, VAR_7.irq, VAR_7.irq, 1,
      VAR_2 | VAR_1);
 }

 FUNC_4(VAR_5, "SSIF mode found at address 0x%llx on %s\n",
     (long long)VAR_7.address, FUNC_1(FUNC_2(VAR_5)));
 VAR_8 = FUNC_8(VAR_6, FUNC_2(VAR_5), VAR_7.address);
 if (VAR_8)
  goto bad;

 VAR_8 = FUNC_5(VAR_5);
 if (VAR_8)
  goto bad;

 return (0);
bad:
 FUNC_6(VAR_5);
 return (VAR_8);
}
