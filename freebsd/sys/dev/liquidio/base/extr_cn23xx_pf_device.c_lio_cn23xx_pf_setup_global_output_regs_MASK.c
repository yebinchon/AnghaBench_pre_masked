
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ pf_srn; scalar_t__ num_pf_rings; } ;
struct octeon_device {scalar_t__ pf_num; TYPE_1__ sriov_info; scalar_t__ chip; } ;
struct lio_cn23xx_pf {int conf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct octeon_device*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct octeon_device*,int ) ;
 int FUNC_7 (struct octeon_device*,int ,scalar_t__) ;
 int FUNC_8 (struct octeon_device*,int ,int) ;

__attribute__((used)) static void
FUNC_9(struct octeon_device *VAR_11)
{
 struct lio_cn23xx_pf *VAR_12 = (struct lio_cn23xx_pf *)VAR_11->chip;
 uint64_t VAR_13;
 uint32_t VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_17 = VAR_11->sriov_info.pf_srn;
 VAR_14 = VAR_17 + VAR_11->sriov_info.num_pf_rings;

 if (FUNC_2(VAR_12->conf)) {
  FUNC_8(VAR_11, VAR_8, 32);
 } else {

  FUNC_8(VAR_11, VAR_8, 0);
 }

 for (VAR_15 = VAR_17; VAR_15 < VAR_14; VAR_15++) {
  VAR_16 = FUNC_6(VAR_11,
      FUNC_0(VAR_15));


  VAR_16 |= VAR_1;


  VAR_16 &= ~(VAR_0);





  VAR_16 &= ~(VAR_7);
  VAR_16 &= ~(VAR_5);


  VAR_16 &= ~(VAR_3);
  VAR_16 &= ~(VAR_6);
  VAR_16 &= ~(VAR_4);

  VAR_16 |= (VAR_2);


  FUNC_7(VAR_11, FUNC_0(VAR_15),
    VAR_16);







  VAR_13 =FUNC_5(
         VAR_11, (uint32_t)FUNC_4(VAR_12->conf));

  FUNC_8(VAR_11, FUNC_1(VAR_15),
    (FUNC_3(VAR_12->conf) |
     (VAR_13 << 32)));
 }


 FUNC_8(VAR_11, VAR_8, 0x40);


 if (VAR_11->pf_num)
  FUNC_8(VAR_11, VAR_9,
    0xffffffffffffffffULL);
 else
  FUNC_8(VAR_11, VAR_10,
    0xffffffffffffffffULL);
}
