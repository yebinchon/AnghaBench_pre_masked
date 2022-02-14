
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dtsec_regs {int dummy; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int FUNC_0 (struct dtsec_regs*,scalar_t__,int ) ;

void FUNC_1(struct dtsec_regs *VAR_1, uint32_t VAR_2, bool VAR_3, bool VAR_4)
{
    int32_t VAR_5;
    if (VAR_4)
        VAR_5 = (int32_t)((VAR_2 >> 23) & 0x1ff);
    else {
        VAR_5 = (int32_t)((VAR_2 >> 24) & 0xff);

        if (VAR_3)
            VAR_5 += 0x100;
    }
    FUNC_0(VAR_1, VAR_5, VAR_0);
}
