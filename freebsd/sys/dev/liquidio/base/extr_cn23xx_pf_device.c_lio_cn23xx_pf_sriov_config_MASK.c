
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ num_pf_rings; scalar_t__ pf_srn; scalar_t__ trs; } ;
struct octeon_device {TYPE_1__ sriov_info; scalar_t__ chip; } ;
struct lio_config {int dummy; } ;
struct lio_cn23xx_pf {struct lio_config* conf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct octeon_device*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct octeon_device*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct octeon_device*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(struct octeon_device *VAR_3)
{
 struct lio_cn23xx_pf *VAR_4 = (struct lio_cn23xx_pf *)VAR_3->chip;
 uint32_t VAR_5, VAR_6, VAR_7;
 VAR_4->conf = (struct lio_config *)FUNC_2(VAR_3, VAR_0);

 VAR_7 = VAR_1;

 if (VAR_3->sriov_info.num_pf_rings) {
  VAR_5 = VAR_3->sriov_info.num_pf_rings;
  if (VAR_5 > VAR_7) {
   VAR_5 = FUNC_3(VAR_2, VAR_7);
   FUNC_1(VAR_3, "num_queues_per_pf requested %u is more than available rings (%u). Reducing to %u\n",
         VAR_3->sriov_info.num_pf_rings,
         VAR_7, VAR_5);
  }
 } else {



  VAR_5 = FUNC_3(VAR_2, VAR_7);


 }

 VAR_6 = VAR_5;
 VAR_3->sriov_info.trs = VAR_6;
 VAR_3->sriov_info.pf_srn = VAR_6 - VAR_5;
 VAR_3->sriov_info.num_pf_rings = VAR_5;

 FUNC_0(VAR_3, "trs:%d pf_srn:%d num_pf_rings:%d\n",
      VAR_3->sriov_info.trs, VAR_3->sriov_info.pf_srn,
      VAR_3->sriov_info.num_pf_rings);

 return (0);
}
