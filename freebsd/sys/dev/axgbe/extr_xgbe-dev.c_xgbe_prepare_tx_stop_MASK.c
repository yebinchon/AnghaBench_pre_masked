
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dummy; } ;
struct xgbe_channel {unsigned int queue_index; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int FUNC_1 (unsigned int,unsigned int,int ) ;
 unsigned long VAR_11 ;
 unsigned int FUNC_2 (struct xgbe_prv_data*,unsigned int) ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_14,
     struct xgbe_channel *VAR_15)
{
 unsigned int VAR_16, VAR_17, VAR_18;
 unsigned int VAR_19;
 unsigned long VAR_20;


 if (VAR_15->queue_index < VAR_3) {
  VAR_16 = VAR_0;
  VAR_17 = (VAR_15->queue_index * VAR_7) +
    VAR_1;
 } else {
  VAR_18 = VAR_15->queue_index - VAR_3;

  VAR_16 = VAR_2 + ((VAR_18 / VAR_5) * VAR_4);
  VAR_17 = ((VAR_18 % VAR_5) * VAR_7) +
    VAR_6;
 }





 VAR_20 = VAR_13 + (VAR_11 * VAR_12);
 while (VAR_13 < VAR_20) {
  VAR_19 = FUNC_2(VAR_14, VAR_16);
  VAR_19 = FUNC_1(VAR_19, VAR_17, VAR_8);
  if ((VAR_19 == VAR_9) ||
      (VAR_19 == VAR_10))
   break;

  FUNC_0(500);
 }
}
