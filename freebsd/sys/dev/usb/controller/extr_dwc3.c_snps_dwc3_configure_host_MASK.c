
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snps_dwc3_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snps_dwc3_softc*,int ) ;
 int FUNC_1 (struct snps_dwc3_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct snps_dwc3_softc *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_4 &= ~VAR_2;
 VAR_4 |= VAR_1;
 FUNC_1(VAR_3, VAR_0, VAR_4);
}
