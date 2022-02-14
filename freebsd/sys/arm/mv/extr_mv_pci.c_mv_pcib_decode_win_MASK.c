
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_pcib_softc {int sc_mem_size; int sc_mem_base; int sc_io_size; int sc_io_base; int sc_mem_win_attr; int sc_win_target; int sc_io_win_attr; int sc_dev; } ;
struct mv_pci_range {int len; int base_parent; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,struct mv_pci_range*,struct mv_pci_range*) ;

__attribute__((used)) static int
FUNC_3(phandle_t VAR_1, struct mv_pcib_softc *VAR_2)
{
 struct mv_pci_range VAR_3, VAR_4;
 device_t VAR_5;
 int VAR_6;

 VAR_5 = VAR_2->sc_dev;

 if ((VAR_6 = FUNC_2(VAR_1, &VAR_3, &VAR_4)) != 0) {
  FUNC_1(VAR_5, "could not retrieve 'ranges' data\n");
  return (VAR_6);
 }


 VAR_6 = FUNC_0(VAR_2->sc_win_target,
     VAR_2->sc_io_win_attr, VAR_3.base_parent, VAR_3.len, ~0);
 if (VAR_6 < 0) {
  FUNC_1(VAR_5, "could not set up CPU decode "
      "window for PCI IO\n");
  return (VAR_0);
 }
 VAR_6 = FUNC_0(VAR_2->sc_win_target,
     VAR_2->sc_mem_win_attr, VAR_4.base_parent, VAR_4.len,
     VAR_4.base_parent);
 if (VAR_6 < 0) {
  FUNC_1(VAR_5, "could not set up CPU decode "
      "windows for PCI MEM\n");
  return (VAR_0);
 }

 VAR_2->sc_io_base = VAR_3.base_parent;
 VAR_2->sc_io_size = VAR_3.len;

 VAR_2->sc_mem_base = VAR_4.base_parent;
 VAR_2->sc_mem_size = VAR_4.len;

 return (0);
}
