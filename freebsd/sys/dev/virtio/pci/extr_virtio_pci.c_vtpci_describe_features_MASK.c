
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vtpci_softc {int vtpci_child_feat_desc; int vtpci_child_dev; int vtpci_dev; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct vtpci_softc *VAR_1, const char *VAR_2,
    uint64_t VAR_3)
{
 device_t VAR_4, VAR_5;

 VAR_4 = VAR_1->vtpci_dev;
 VAR_5 = VAR_1->vtpci_child_dev;

 if (FUNC_0(VAR_5) || VAR_0 == 0)
  return;

 FUNC_1(VAR_4, VAR_2, VAR_3, VAR_1->vtpci_child_feat_desc);
}
