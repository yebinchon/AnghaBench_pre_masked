
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct octeon_device {scalar_t__ chip; } ;
struct lio_cn23xx_pf {int intr_enb_reg64; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct octeon_device*,int ) ;
 int FUNC_1 (struct octeon_device*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct octeon_device *VAR_3, uint8_t VAR_4)
{
 struct lio_cn23xx_pf *VAR_5 = (struct lio_cn23xx_pf *)VAR_3->chip;
 uint64_t VAR_6 = 0;


 if (VAR_4 == VAR_1) {
  FUNC_1(VAR_3, VAR_5->intr_enb_reg64, 0);
 } else if (VAR_4 & VAR_2) {
  VAR_6 = FUNC_0(VAR_3, VAR_5->intr_enb_reg64);
  VAR_6 &= ~VAR_0;
  FUNC_1(VAR_3, VAR_5->intr_enb_reg64, VAR_6);
 }
}
