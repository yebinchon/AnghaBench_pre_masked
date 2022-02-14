
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct xpcib_softc {int pdev; int bus; int domain; } ;
struct xen_pci_op {int offset; int size; int value; int devfn; int bus; int domain; int cmd; } ;
typedef int device_t ;


 int FUNC_0 (char*,int,int,int,int,int,int ,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,struct xen_pci_op*) ;

__attribute__((used)) static u_int32_t
FUNC_4(device_t VAR_1, int VAR_2, int VAR_3, int VAR_4,
      int VAR_5, int VAR_6)
{
 struct xpcib_softc *VAR_7 = (struct xpcib_softc *)FUNC_2(VAR_1);
 struct xen_pci_op VAR_8 = {
  .cmd = VAR_0,
  .domain = VAR_7->domain,
  .bus = VAR_7->bus,
  .devfn = FUNC_1(VAR_3, VAR_4),
  .offset = VAR_5,
  .size = VAR_6,
 };
 int VAR_9;

 VAR_9 = FUNC_3(VAR_7->pdev, &VAR_8);

 FUNC_0("read config (b=%d, s=%d, f=%d, reg=%d, len=%d, val=%x, err=%d)\n",
   VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_8.value, VAR_9);

 if (VAR_9)
  VAR_8.value = ~0;

 return VAR_8.value;
}
