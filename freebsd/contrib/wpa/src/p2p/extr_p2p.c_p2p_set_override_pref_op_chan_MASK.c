
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct p2p_data {void* override_pref_channel; void* override_pref_op_class; } ;



void FUNC_0(struct p2p_data *VAR_0, u8 VAR_1,
       u8 VAR_2)
{
 VAR_0->override_pref_op_class = VAR_1;
 VAR_0->override_pref_channel = VAR_2;
}
