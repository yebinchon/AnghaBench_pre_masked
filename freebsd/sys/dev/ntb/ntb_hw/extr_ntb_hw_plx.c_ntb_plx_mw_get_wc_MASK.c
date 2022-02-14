
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_memattr_t ;
struct ntb_plx_softc {unsigned int mw_count; struct ntb_plx_mw_info* mw_info; } ;
struct ntb_plx_mw_info {TYPE_1__* splits; } ;
typedef int device_t ;
struct TYPE_2__ {int mw_map_mode; } ;


 int VAR_0 ;
 struct ntb_plx_softc* FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct ntb_plx_softc*,unsigned int,unsigned int*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, unsigned VAR_2, vm_memattr_t *VAR_3)
{
 struct ntb_plx_softc *VAR_4 = FUNC_0(VAR_1);
 struct ntb_plx_mw_info *VAR_5;
 unsigned VAR_6;

 VAR_2 = FUNC_1(VAR_4, VAR_2, &VAR_6);
 if (VAR_2 >= VAR_4->mw_count)
  return (VAR_0);
 VAR_5 = &VAR_4->mw_info[VAR_2];
 *VAR_3 = VAR_5->splits[VAR_6].mw_map_mode;
 return (0);
}
