
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_pf_rings; int pf_srn; } ;
struct octeon_device {scalar_t__ chip_id; TYPE_1__ sriov_info; struct lio_ioq_vector* ioq_vector; } ;
struct lio_ioq_vector {int droq_index; int ioq_num; int affinity_mask; struct octeon_device* oct_dev; } ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (struct octeon_device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct lio_ioq_vector* FUNC_2 (int,int ,int) ;
 int VAR_4 ;

int
FUNC_3(struct octeon_device *VAR_5)
{
 struct lio_ioq_vector *VAR_6;
 int VAR_7, VAR_8, VAR_9 = 0, VAR_10;

 if (FUNC_1(VAR_5))
  VAR_9 = VAR_5->sriov_info.num_pf_rings;

 VAR_10 = sizeof(struct lio_ioq_vector) * VAR_9;

 VAR_5->ioq_vector = FUNC_2(VAR_10, VAR_1, VAR_2 | VAR_3);
 if (VAR_5->ioq_vector == ((void*)0))
  return (1);

 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  VAR_6 = &VAR_5->ioq_vector[VAR_7];
  VAR_6->oct_dev = VAR_5;
  VAR_6->droq_index = VAR_7;
  VAR_8 = VAR_7 % VAR_4;
  FUNC_0(VAR_8, &VAR_6->affinity_mask);

  if (VAR_5->chip_id == VAR_0)
   VAR_6->ioq_num = VAR_7 + VAR_5->sriov_info.pf_srn;
  else
   VAR_6->ioq_num = VAR_7;
 }
 return (0);
}
