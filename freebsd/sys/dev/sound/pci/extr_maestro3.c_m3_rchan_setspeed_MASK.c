
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_rchinfo {int spd; scalar_t__ adc_data; int adc_idx; struct sc_info* parent; } ;
struct sc_info {int dummy; } ;
typedef int kobj_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sc_info*) ;
 int FUNC_2 (struct sc_info*) ;
 int FUNC_3 (struct sc_info*,scalar_t__,int) ;

__attribute__((used)) static u_int32_t
FUNC_4(kobj_t VAR_2, void *VAR_3, u_int32_t VAR_4)
{
 struct sc_rchinfo *VAR_5 = VAR_3;
 struct sc_info *VAR_6 = VAR_5->parent;
 u_int32_t VAR_7;

 FUNC_1(VAR_6);
 FUNC_0(VAR_1, ("m3_rchan_setspeed(adc=%d, speed=%d)\n",
     VAR_5->adc_idx, VAR_4));

        if ((VAR_7 = ((VAR_4 << 15) + 24000) / 48000) != 0) {
                VAR_7--;
        }

        FUNC_3(VAR_6, VAR_5->adc_data + VAR_0, VAR_7);
 VAR_5->spd = VAR_4;
 FUNC_2(VAR_6);


 return (VAR_4);
}
