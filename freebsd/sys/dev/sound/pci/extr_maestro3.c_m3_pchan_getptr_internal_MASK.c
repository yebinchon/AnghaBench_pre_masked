
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_pchinfo {int dac_idx; scalar_t__ dac_data; int buffer; struct sc_info* parent; } ;
struct sc_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sc_info*,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u_int32_t
FUNC_3(struct sc_pchinfo *VAR_3)
{
 struct sc_info *VAR_4 = VAR_3->parent;
 u_int32_t VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_7 = FUNC_2(VAR_3->buffer);
 VAR_5 = FUNC_1(VAR_4, VAR_3->dac_data + VAR_1);
        VAR_6 = FUNC_1(VAR_4, VAR_3->dac_data + VAR_2);
        VAR_8 = VAR_6 | (VAR_5 << 16);

 FUNC_0(VAR_0, ("m3_pchan_getptr(dac=%d) result=%d\n",
   VAR_3->dac_idx, VAR_8 - VAR_7));

 return (VAR_8 - VAR_7);
}
