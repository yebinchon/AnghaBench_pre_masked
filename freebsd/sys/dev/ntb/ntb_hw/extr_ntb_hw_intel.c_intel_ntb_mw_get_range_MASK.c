
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
struct ntb_softc {unsigned int b2b_mw_idx; size_t b2b_off; struct ntb_pci_bar_info* bar_info; } ;
struct ntb_pci_bar_info {size_t size; scalar_t__ vbase; scalar_t__ pbase; } ;
typedef enum ntb_bar { ____Placeholder_ntb_bar } ntb_bar ;
typedef int device_t ;
typedef scalar_t__ caddr_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct ntb_softc*,int) ;
 struct ntb_softc* FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct ntb_softc*,unsigned int) ;
 unsigned int FUNC_5 (struct ntb_softc*,unsigned int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3, unsigned VAR_4, vm_paddr_t *VAR_5,
    caddr_t *VAR_6, size_t *VAR_7, size_t *VAR_8, size_t *VAR_9,
    bus_addr_t *VAR_10)
{
 struct ntb_softc *VAR_11 = FUNC_2(VAR_3);
 struct ntb_pci_bar_info *VAR_12;
 bus_addr_t VAR_13;
 size_t VAR_14;
 enum ntb_bar VAR_15;

 if (VAR_4 >= FUNC_3(VAR_3))
  return (VAR_2);
 VAR_4 = FUNC_5(VAR_11, VAR_4);

 VAR_15 = FUNC_4(VAR_11, VAR_4);
 VAR_12 = &VAR_11->bar_info[VAR_15];
 VAR_14 = 0;
 if (VAR_4 == VAR_11->b2b_mw_idx) {
  FUNC_0(VAR_11->b2b_off != 0,
      ("user shouldn't get non-shared b2b mw"));
  VAR_14 = VAR_11->b2b_off;
 }

 if (FUNC_1(VAR_11, VAR_15))
  VAR_13 = VAR_0;
 else
  VAR_13 = VAR_1;

 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_12->pbase + VAR_14;
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_12->vbase + VAR_14;
 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_12->size - VAR_14;
 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_12->size;
 if (VAR_9 != ((void*)0))
  *VAR_9 = 1;
 if (VAR_10 != ((void*)0))
  *VAR_10 = VAR_13;
 return (0);
}
