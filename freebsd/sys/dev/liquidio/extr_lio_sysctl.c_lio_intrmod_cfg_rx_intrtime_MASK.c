
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* uint32_t ;
struct octeon_intrmod_cfg {int rx_frames; void* rx_usecs; } ;
struct TYPE_2__ {int pf_srn; } ;
struct octeon_device {int chip_id; int num_oqs; void* rx_coalesce_usecs; TYPE_1__ sriov_info; } ;
struct lio {struct octeon_device* oct_dev; } ;


 int VAR_0 ;

 int FUNC_0 (int) ;
 int FUNC_1 (struct octeon_device*,void*) ;
 int FUNC_2 (struct octeon_device*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct lio *VAR_1, struct octeon_intrmod_cfg *VAR_2,
       uint32_t VAR_3)
{
 struct octeon_device *VAR_4 = VAR_1->oct_dev;
 uint32_t VAR_5;


 switch (VAR_4->chip_id) {
 case 128:{
   uint64_t VAR_6;
   int VAR_7;

   if (!VAR_3)
    VAR_5 = VAR_2->rx_usecs;
   else
    VAR_5 = VAR_3;

   VAR_6 =
       FUNC_1(VAR_4, VAR_5);
   for (VAR_7 = 0; VAR_7 < VAR_4->num_oqs; VAR_7++) {
    VAR_7 += VAR_4->sriov_info.pf_srn;
    FUNC_2(VAR_4,
           FUNC_0(VAR_7),
      (VAR_2->rx_frames |
        ((uint64_t)VAR_6 << 32)));

   }

   VAR_2->rx_usecs = VAR_5;
   VAR_4->rx_coalesce_usecs = VAR_5;
   break;
  }
 default:
  return (VAR_0);
 }

 return (0);
}
