
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int channel_count; int pblx8; struct xgbe_channel* channel; } ;
struct xgbe_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xgbe_channel*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct xgbe_prv_data *VAR_2)
{
 struct xgbe_channel *VAR_3;
 unsigned int VAR_4;

 VAR_3 = VAR_2->channel;
 for (VAR_4 = 0; VAR_4 < VAR_2->channel_count; VAR_4++, VAR_3++)
  FUNC_0(VAR_3, VAR_0, VAR_1,
           VAR_2->pblx8);

 return 0;
}
