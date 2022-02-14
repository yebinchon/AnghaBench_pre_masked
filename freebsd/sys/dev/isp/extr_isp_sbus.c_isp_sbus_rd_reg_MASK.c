
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct isp_sbussoftc {int* sbus_poff; } ;
typedef int ispsoftc_t ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char*,int,int ) ;

__attribute__((used)) static uint32_t
FUNC_2(ispsoftc_t *VAR_3, int VAR_4)
{
 uint16_t VAR_5;
 struct isp_sbussoftc *VAR_6 = (struct isp_sbussoftc *) VAR_3;
 int VAR_7 = VAR_6->sbus_poff[(VAR_4 & VAR_1) >> VAR_2];
 VAR_7 += (VAR_4 & 0xff);
 VAR_5 = FUNC_0(VAR_3, VAR_7);
 FUNC_1(VAR_3, VAR_0,
     "isp_sbus_rd_reg(off %x) = %x", VAR_4, VAR_5);
 return (VAR_5);
}
