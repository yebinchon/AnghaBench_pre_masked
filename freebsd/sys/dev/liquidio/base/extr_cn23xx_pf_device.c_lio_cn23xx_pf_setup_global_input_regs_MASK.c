
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
struct TYPE_2__ {size_t pf_srn; size_t num_pf_rings; } ;
struct octeon_device {int pf_num; int pcie_port; struct lio_instr_queue** instr_queue; TYPE_1__ sriov_info; scalar_t__ chip; } ;
struct lio_instr_queue {size_t inst_cnt_reg; } ;
struct lio_cn23xx_pf {int conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct octeon_device*) ;
 int FUNC_4 (struct octeon_device*,size_t) ;
 int FUNC_5 (struct octeon_device*,size_t,int) ;

__attribute__((used)) static int
FUNC_6(struct octeon_device *VAR_5)
{
 struct lio_cn23xx_pf *VAR_6 = (struct lio_cn23xx_pf *)VAR_5->chip;
 struct lio_instr_queue *VAR_7;
 uint64_t VAR_8;
 uint64_t VAR_9, VAR_10;
 uint32_t VAR_11, VAR_12, VAR_13;

 VAR_9 = VAR_5->pf_num;

 VAR_13 = VAR_5->sriov_info.pf_srn;
 VAR_12 = VAR_13 + VAR_5->sriov_info.num_pf_rings;

 if (FUNC_3(VAR_5))
  return (-1);







 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  VAR_10 = VAR_5->pcie_port <<
   VAR_0;

  VAR_10 |= VAR_9 << VAR_2;

  FUNC_5(VAR_5, FUNC_1(VAR_11),
    VAR_10);
 }





 for (VAR_11 = VAR_13; VAR_11 < VAR_12; VAR_11++) {
  uint32_t VAR_14;

  VAR_7 = VAR_5->instr_queue[VAR_11];
  if (VAR_7 != ((void*)0))
   VAR_14 = VAR_7->inst_cnt_reg;
  else
   VAR_14 = FUNC_0(VAR_11);

  VAR_10 =
      FUNC_4(VAR_5, FUNC_1(VAR_11));

  VAR_10 |= VAR_1;

  FUNC_5(VAR_5, FUNC_1(VAR_11),
    VAR_10);



  VAR_8 = FUNC_2(VAR_6->conf) &
      VAR_4;

  FUNC_5(VAR_5, VAR_14,
    (FUNC_4(VAR_5, VAR_14) &
     ~(VAR_4 <<
       VAR_3)) |
    (VAR_8 <<
     VAR_3));
 }
 return (0);
}
