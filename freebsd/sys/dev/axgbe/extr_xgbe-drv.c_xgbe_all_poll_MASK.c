
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int rx_ring_count; unsigned int channel_count; struct xgbe_channel* channel; } ;
struct xgbe_channel {int dummy; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct xgbe_channel*,int) ;
 int FUNC_2 (struct xgbe_channel*) ;

__attribute__((used)) static int FUNC_3(struct xgbe_prv_data *VAR_0, int VAR_1)
{
 struct xgbe_channel *VAR_2;
 int VAR_3;
 int VAR_4, VAR_5;
 unsigned int VAR_6;

 FUNC_0("-->xgbe_all_poll: budget=%d\n", VAR_1);

 VAR_4 = 0;
 VAR_3 = VAR_1 / VAR_0->rx_ring_count;
 do {
  VAR_5 = VAR_4;

  VAR_2 = VAR_0->channel;
  for (VAR_6 = 0; VAR_6 < VAR_0->channel_count; VAR_6++, VAR_2++) {

   FUNC_2(VAR_2);


   if (VAR_3 > (VAR_1 - VAR_4))
    VAR_3 = VAR_1 - VAR_4;
   VAR_4 += FUNC_1(VAR_2, VAR_3);
  }
 } while ((VAR_4 < VAR_1) && (VAR_4 != VAR_5));

 FUNC_0("<--xgbe_all_poll: received = %d\n", VAR_4);

 return VAR_4;
}
