
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p2p_reg_class {size_t channels; int * channel; } ;



__attribute__((used)) static void FUNC_0(struct p2p_reg_class *VAR_0, u8 VAR_1)
{
 VAR_0->channel[VAR_0->channels] = VAR_1;
 VAR_0->channels++;
}
