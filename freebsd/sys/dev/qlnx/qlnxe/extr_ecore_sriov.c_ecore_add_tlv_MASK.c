
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
typedef int u16 ;
struct channel_tlv {int type; int length; } ;



void *FUNC_0(u8 **VAR_0, u16 VAR_1, u16 VAR_2)
{
 struct channel_tlv *VAR_3 = (struct channel_tlv *)*VAR_0;

 VAR_3->type = VAR_1;
 VAR_3->length = VAR_2;


 *VAR_0 += VAR_2;


 return *VAR_0 - VAR_2;
}
