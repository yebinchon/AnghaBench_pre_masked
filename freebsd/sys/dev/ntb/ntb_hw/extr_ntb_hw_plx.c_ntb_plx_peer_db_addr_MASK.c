
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ uint64_t ;
struct ntb_plx_softc {size_t b2b_mw; scalar_t__ link; int conf_res; struct ntb_plx_mw_info* mw_info; } ;
struct ntb_plx_mw_info {scalar_t__ mw_pbase; } ;
typedef int device_t ;
typedef scalar_t__ bus_addr_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct ntb_plx_softc*) ;
 struct ntb_plx_softc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, bus_addr_t *VAR_1, vm_size_t *VAR_2)
{
 struct ntb_plx_softc *VAR_3 = FUNC_2(VAR_0);
 struct ntb_plx_mw_info *VAR_4;

 FUNC_0((VAR_1 != ((void*)0) && VAR_2 != ((void*)0)), ("must be non-NULL"));

 if (VAR_3->b2b_mw >= 0) {
  VAR_4 = &VAR_3->mw_info[VAR_3->b2b_mw];
  *VAR_1 = (uint64_t)VAR_4->mw_pbase + FUNC_1(VAR_3) + 0xc4c;
 } else {
  *VAR_1 = FUNC_3(VAR_3->conf_res) + FUNC_1(VAR_3);
  *VAR_1 += VAR_3->link ? 0xc4c : 0xc5c;
 }
 *VAR_2 = 4;
 return (0);
}
