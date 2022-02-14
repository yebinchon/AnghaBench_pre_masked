
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_plx_softc {unsigned int mw_count; struct ntb_plx_mw_info* mw_info; } ;
struct ntb_plx_mw_info {TYPE_1__* splits; int mw_64bit; } ;
typedef int device_t ;
typedef size_t bus_addr_t ;
struct TYPE_2__ {size_t mw_xlat_addr; size_t mw_xlat_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct ntb_plx_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 unsigned int FUNC_2 (struct ntb_plx_softc*,unsigned int,unsigned int*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, unsigned VAR_4, bus_addr_t VAR_5, size_t VAR_6)
{
 struct ntb_plx_softc *VAR_7 = FUNC_0(VAR_3);
 struct ntb_plx_mw_info *VAR_8;
 unsigned VAR_9;

 VAR_4 = FUNC_2(VAR_7, VAR_4, &VAR_9);
 if (VAR_4 >= VAR_7->mw_count)
  return (VAR_0);
 VAR_8 = &VAR_7->mw_info[VAR_4];
 if (!VAR_8->mw_64bit &&
     ((VAR_5 & VAR_2) != VAR_5 ||
      ((VAR_5 + VAR_6) & VAR_2) != (VAR_5 + VAR_6)))
  return (VAR_1);
 VAR_8->splits[VAR_9].mw_xlat_addr = VAR_5;
 VAR_8->splits[VAR_9].mw_xlat_size = VAR_6;
 return (FUNC_1(VAR_3, VAR_4));
}
