
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
struct ntb_plx_softc {unsigned int mw_count; unsigned int b2b_mw; size_t b2b_off; unsigned int split; size_t alut; struct ntb_plx_mw_info* mw_info; } ;
struct ntb_plx_mw_info {int mw_bar; size_t mw_size; scalar_t__ mw_64bit; scalar_t__ mw_vbase; scalar_t__ mw_pbase; } ;
typedef int device_t ;
typedef scalar_t__ caddr_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 struct ntb_plx_softc* FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct ntb_plx_softc*,unsigned int,unsigned int*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, unsigned VAR_4, vm_paddr_t *VAR_5,
    caddr_t *VAR_6, size_t *VAR_7, size_t *VAR_8, size_t *VAR_9,
    bus_addr_t *VAR_10)
{
 struct ntb_plx_softc *VAR_11 = FUNC_1(VAR_3);
 struct ntb_plx_mw_info *VAR_12;
 size_t VAR_13, VAR_14;
 unsigned VAR_15, VAR_16;

 VAR_4 = FUNC_2(VAR_11, VAR_4, &VAR_15);
 if (VAR_4 >= VAR_11->mw_count)
  return (VAR_2);
 VAR_13 = 0;
 if (VAR_4 == VAR_11->b2b_mw) {
  FUNC_0(VAR_11->b2b_off != 0,
      ("user shouldn't get non-shared b2b mw"));
  VAR_13 = VAR_11->b2b_off;
 }
 VAR_12 = &VAR_11->mw_info[VAR_4];
 VAR_16 = (VAR_12->mw_bar == 2) ? VAR_11->split : 0;
 VAR_14 = (VAR_12->mw_size - VAR_13) >> VAR_16;


 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_12->mw_pbase + VAR_13 + VAR_14 * VAR_15;
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_12->mw_vbase + VAR_13 + VAR_14 * VAR_15;
 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_14;
 if (VAR_8 != ((void*)0)) {
  if (VAR_11->alut && VAR_12->mw_bar == 2)
   *VAR_8 = (VAR_12->mw_size - VAR_13) / 128 / VAR_11->alut;
  else
   *VAR_8 = VAR_12->mw_size - VAR_13;
 }
 if (VAR_9 != ((void*)0)) {
  if (VAR_11->alut && VAR_12->mw_bar == 2)
   *VAR_9 = (VAR_12->mw_size - VAR_13) / 128 / VAR_11->alut;
  else if (VAR_11->b2b_mw >= 0)
   *VAR_9 = (VAR_12->mw_size - VAR_13) / 2;
  else
   *VAR_9 = VAR_12->mw_size - VAR_13;
 }


 if (VAR_10 != ((void*)0))
  *VAR_10 = VAR_12->mw_64bit ? VAR_0 :
      VAR_1;
 return (0);
}
