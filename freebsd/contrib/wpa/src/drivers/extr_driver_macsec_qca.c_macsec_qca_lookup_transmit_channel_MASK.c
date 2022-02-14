
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct transmit_sc {int sci; } ;
struct macsec_qca_data {int transmit_channel_map; } ;


 int FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct macsec_qca_data *VAR_0,
           struct transmit_sc *VAR_1,
           u32 *VAR_2)
{
 return FUNC_0(VAR_0->transmit_channel_map, &VAR_1->sci,
      VAR_2);
}
