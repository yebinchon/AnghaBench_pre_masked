
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uchcom_softc {int dummy; } ;
struct uchcom_divider {int dv_prescaler; int dv_mod; int dv_div; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct uchcom_divider*,int ) ;
 int FUNC_1 (struct uchcom_softc*,int ,int,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct uchcom_softc *VAR_4, uint32_t VAR_5)
{
 struct uchcom_divider VAR_6;

 if (FUNC_0(&VAR_6, VAR_5))
  return;





 FUNC_1(VAR_4,
     VAR_3, VAR_6.dv_prescaler | 0x80,
     VAR_0, VAR_6.dv_div);
 FUNC_1(VAR_4,
     VAR_1, VAR_6.dv_mod,
     VAR_2, 0);
}
