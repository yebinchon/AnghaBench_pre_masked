
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int vm_offset_t ;
typedef int vm_memattr_t ;
typedef unsigned int uint64_t ;
struct ntb_plx_softc {unsigned int mw_count; unsigned int b2b_mw; scalar_t__ b2b_off; unsigned int split; struct ntb_plx_mw_info* mw_info; } ;
struct ntb_plx_mw_info {int mw_bar; unsigned int mw_size; TYPE_1__* splits; scalar_t__ mw_vbase; } ;
typedef int device_t ;
struct TYPE_2__ {int mw_map_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct ntb_plx_softc* FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct ntb_plx_softc*,unsigned int,unsigned int*) ;
 int FUNC_3 (unsigned int,unsigned int,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, unsigned VAR_2, vm_memattr_t VAR_3)
{
 struct ntb_plx_softc *VAR_4 = FUNC_1(VAR_1);
 struct ntb_plx_mw_info *VAR_5;
 uint64_t VAR_6, VAR_7;
 int VAR_8;
 unsigned VAR_9, VAR_10;

 VAR_2 = FUNC_2(VAR_4, VAR_2, &VAR_9);
 if (VAR_2 >= VAR_4->mw_count)
  return (VAR_0);
 VAR_5 = &VAR_4->mw_info[VAR_2];
 if (VAR_5->splits[VAR_9].mw_map_mode == VAR_3)
  return (0);

 VAR_6 = 0;
 if (VAR_2 == VAR_4->b2b_mw) {
  FUNC_0(VAR_4->b2b_off != 0,
      ("user shouldn't get non-shared b2b mw"));
  VAR_6 = VAR_4->b2b_off;
 }

 VAR_10 = (VAR_5->mw_bar == 2) ? VAR_4->split : 0;
 VAR_7 = (VAR_5->mw_size - VAR_6) >> VAR_10;
 VAR_8 = FUNC_3((vm_offset_t)VAR_5->mw_vbase + VAR_6 + VAR_7 * VAR_9,
     VAR_7, VAR_3);
 if (VAR_8 == 0)
  VAR_5->splits[VAR_9].mw_map_mode = VAR_3;
 return (VAR_8);
}
