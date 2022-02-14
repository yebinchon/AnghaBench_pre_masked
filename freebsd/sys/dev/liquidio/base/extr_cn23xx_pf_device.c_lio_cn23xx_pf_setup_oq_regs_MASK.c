
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
struct TYPE_2__ {scalar_t__ pf_srn; } ;
struct octeon_device {int msix_on; TYPE_1__ sriov_info; scalar_t__ chip; struct lio_droq** droq; } ;
struct lio_droq {int desc_ring_dma; size_t max_count; size_t buffer_size; int pkts_credit_reg; int pkts_sent_reg; } ;
struct lio_cn23xx_pf {int conf; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (size_t) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct octeon_device*,size_t) ;
 size_t FUNC_10 (struct octeon_device*,int ) ;
 int FUNC_11 (struct octeon_device*,int ,size_t) ;
 int FUNC_12 (struct octeon_device*,int ,int) ;

__attribute__((used)) static void
FUNC_13(struct octeon_device *VAR_2, uint32_t VAR_3)
{
 struct lio_droq *VAR_4 = VAR_2->droq[VAR_3];
 struct lio_cn23xx_pf *VAR_5 = (struct lio_cn23xx_pf *)VAR_2->chip;
 uint64_t VAR_6;
 uint64_t VAR_7;
 uint32_t VAR_8;

 VAR_3 += VAR_2->sriov_info.pf_srn;

 FUNC_12(VAR_2, FUNC_0(VAR_3),
   VAR_4->desc_ring_dma);
 FUNC_11(VAR_2, FUNC_6(VAR_3), VAR_4->max_count);

 FUNC_11(VAR_2, FUNC_1(VAR_3),
   VAR_4->buffer_size);


 VAR_4->pkts_sent_reg = FUNC_3(VAR_3);
 VAR_4->pkts_credit_reg = FUNC_2(VAR_3);

 if (!VAR_2->msix_on) {




  VAR_8 =
      FUNC_10(VAR_2, FUNC_4(VAR_3));
  VAR_8 |= VAR_1;
  FUNC_11(VAR_2, FUNC_4(VAR_3),
    VAR_8);





  VAR_8 =
      FUNC_10(VAR_2, FUNC_4(VAR_3));
  VAR_8 |= VAR_0;
  FUNC_11(VAR_2, FUNC_4(VAR_3),
    VAR_8);
 } else {
  VAR_7 = FUNC_9(VAR_2,
   (uint32_t)FUNC_8(VAR_5->conf));
  VAR_6 = (uint32_t)FUNC_7(VAR_5->conf);

  FUNC_12(VAR_2, FUNC_5(VAR_3),
    ((VAR_7 << 32 | VAR_6)));
 }
}
