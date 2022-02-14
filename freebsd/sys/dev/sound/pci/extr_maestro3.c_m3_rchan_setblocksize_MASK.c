
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_rchinfo {int buffer; int adc_idx; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u_int32_t
FUNC_2(kobj_t VAR_1, void *VAR_2, u_int32_t VAR_3)
{
 struct sc_rchinfo *VAR_4 = VAR_2;

 FUNC_0(VAR_0, ("m3_rchan_setblocksize(adc=%d, blocksize=%d)\n",
     VAR_4->adc_idx, VAR_3));

 return (FUNC_1(VAR_4->buffer));
}
