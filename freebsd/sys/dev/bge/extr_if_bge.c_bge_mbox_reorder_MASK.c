
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct mbox_reorder TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct bge_softc {int bge_dev; } ;
typedef int device_t ;
typedef scalar_t__ devclass_t ;
struct mbox_reorder {scalar_t__ const vendor; scalar_t__ const device; char const* desc; } ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (TYPE_1__ const*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct bge_softc *VAR_0)
{

 static const struct mbox_reorder {
  const uint16_t vendor;
  const uint16_t device;
  const char *desc;
 } VAR_1[] = {
  { 0x1022, 0x7450, "AMD-8131 PCI-X Bridge" },
 };
 devclass_t VAR_2, VAR_3;
 device_t VAR_4, VAR_5;
 int VAR_6;

 VAR_2 = FUNC_0("pci");
 VAR_3 = FUNC_0("pcib");
 VAR_5 = VAR_0->bge_dev;
 VAR_4 = FUNC_2(VAR_5);
 for (;;) {
  VAR_5 = FUNC_2(VAR_4);
  VAR_4 = FUNC_2(VAR_5);
  if (FUNC_1(VAR_5) != VAR_3)
   break;
  if (FUNC_1(VAR_4) != VAR_2)
   break;
  for (VAR_6 = 0; VAR_6 < FUNC_4(VAR_1); VAR_6++) {
   if (FUNC_6(VAR_5) ==
       VAR_1[VAR_6].vendor &&
       FUNC_5(VAR_5) ==
       VAR_1[VAR_6].device) {
    FUNC_3(VAR_0->bge_dev,
        "enabling MBOX workaround for %s\n",
        VAR_1[VAR_6].desc);
    return (1);
   }
  }
 }
 return (0);
}
