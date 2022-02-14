
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct mps_softc {scalar_t__ max_dpm_entries; scalar_t__ dpm_pg0; } ;
struct TYPE_3__ {int High; int Low; } ;
struct TYPE_4__ {int PhysicalBitsMapping; TYPE_1__ PhysicalIdentifier; } ;
typedef TYPE_2__ Mpi2DriverMap0Entry_t ;
typedef int MPI2_CONFIG_EXTENDED_PAGE_HEADER ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u16
FUNC_0(struct mps_softc *VAR_1, u64 VAR_2, u32 VAR_3)
{
 u16 VAR_4;
 uint64_t VAR_5;
 Mpi2DriverMap0Entry_t *VAR_6;

 VAR_6 = (Mpi2DriverMap0Entry_t *)((u8 *)VAR_1->dpm_pg0 +
     sizeof(MPI2_CONFIG_EXTENDED_PAGE_HEADER));
 VAR_5 = VAR_6->PhysicalIdentifier.High;
 VAR_5 = (VAR_5 << 32) |
     VAR_6->PhysicalIdentifier.Low;
 for (VAR_4 = 0; VAR_4 < VAR_1->max_dpm_entries; VAR_4++,
     VAR_6++)
  if ((VAR_2 == VAR_5) &&
      (!VAR_3 || !VAR_6->PhysicalBitsMapping ||
      (VAR_3 & VAR_6->PhysicalBitsMapping)))
   return VAR_4;

 return VAR_0;
}
