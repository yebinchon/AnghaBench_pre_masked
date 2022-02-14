
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_pchinfo {int fmt; scalar_t__ dac_data; int dac_idx; struct sc_info* parent; } ;
struct sc_info {int dummy; } ;
typedef int kobj_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sc_info*) ;
 int FUNC_3 (struct sc_info*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct sc_info*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_5(kobj_t VAR_5, void *VAR_6, u_int32_t VAR_7)
{
 struct sc_pchinfo *VAR_8 = VAR_6;
 struct sc_info *VAR_9 = VAR_8->parent;
 u_int32_t VAR_10;

 FUNC_2(VAR_9);
 FUNC_1(VAR_2,
   ("m3_pchan_setformat(dac=%d, format=0x%x{%s-%s})\n",
    VAR_8->dac_idx, VAR_7,
    VAR_7 & (VAR_1|VAR_0) ? "8bit":"16bit",
    (FUNC_0(VAR_7) > 1) ? "STEREO":"MONO"));


        VAR_10 = (FUNC_0(VAR_7) > 1)? 0 : 1;
        FUNC_4(VAR_9, VAR_8->dac_data + VAR_3, VAR_10);


        VAR_10 = ((VAR_7 & VAR_1) || (VAR_7 & VAR_0)) ? 1 : 0;
        FUNC_4(VAR_9, VAR_8->dac_data + VAR_4, VAR_10);

        VAR_8->fmt = VAR_7;
 FUNC_3(VAR_9);

        return (0);
}
