
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct edd_params {int len; int sector_size; int heads; int sectors_per_track; scalar_t__ sectors; scalar_t__ cylinders; } ;
struct bdinfo {int bd_sectorsize; int bd_hds; int bd_sec; int bd_sectors; scalar_t__ bd_cyl; int bd_unit; } ;
typedef int params ;
struct TYPE_2__ {int addr; int eax; int efl; int esi; int ds; int edx; int ctl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct edd_params*) ;
 int FUNC_2 (struct edd_params*) ;
 int FUNC_3 (struct edd_params*,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(struct bdinfo *VAR_3)
{
 struct edd_params VAR_4;
 uint64_t VAR_5;


 FUNC_3(&VAR_4, sizeof(VAR_4));
 VAR_4.len = sizeof(VAR_4);
 VAR_2 = VAR_1;
 VAR_2 = 0x13;
 VAR_2 = 0x4800;
 VAR_2 = VAR_3->bd_unit;
 VAR_2 = FUNC_2(&VAR_4);
 VAR_2 = FUNC_1(&VAR_4);
 FUNC_4();

 if (FUNC_0(VAR_2) && ((VAR_2 & 0xff00) != 0))
  return ((VAR_2 & 0xff00) >> 8);







 if (VAR_4.sector_size >= 512 &&
     VAR_4.sector_size <= 16384 &&
     (VAR_4.sector_size % VAR_0) == 0)
  VAR_3->bd_sectorsize = VAR_4.sector_size;

 VAR_3->bd_cyl = VAR_4.cylinders;
 VAR_3->bd_hds = VAR_4.heads;
 VAR_3->bd_sec = VAR_4.sectors_per_track;

 if (VAR_4.sectors != 0) {
  VAR_5 = VAR_4.sectors;
 } else {
  VAR_5 = (uint64_t)VAR_4.cylinders *
      VAR_4.heads * VAR_4.sectors_per_track;
 }
 VAR_3->bd_sectors = VAR_5;

 return (0);
}
