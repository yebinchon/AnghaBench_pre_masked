
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int an_state; int an_int; int an_result; int parallel_detect; int an_mutex; scalar_t__ an_start; void* kx_state; void* kr_state; int an_supported; } ;
typedef enum xgbe_an { ____Placeholder_xgbe_an } xgbe_an ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 void* VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;

 void* VAR_8 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_5(struct xgbe_prv_data *VAR_9)
{
 enum xgbe_an VAR_10 = VAR_9->an_state;

 FUNC_1(&VAR_9->an_mutex);

 if (!VAR_9->an_int)
  goto out;

next_int:
 if (VAR_9->an_int & VAR_7) {
  VAR_9->an_state = 129;
  VAR_9->an_int &= ~VAR_7;
 } else if (VAR_9->an_int & VAR_4) {
  VAR_9->an_state = 131;
  VAR_9->an_int &= ~VAR_4;
 } else if (VAR_9->an_int & VAR_5) {
  VAR_9->an_state = 132;
  VAR_9->an_int &= ~VAR_5;
 } else {
  VAR_9->an_state = VAR_3;
 }

 VAR_9->an_result = VAR_9->an_state;

again:
 VAR_10 = VAR_9->an_state;

 switch (VAR_9->an_state) {
 case 128:
  VAR_9->an_supported = 0;
  break;

 case 129:
  VAR_9->an_state = FUNC_4(VAR_9);
  VAR_9->an_supported++;
  break;

 case 131:
  VAR_9->an_supported = 0;
  VAR_9->parallel_detect = 0;
  VAR_9->an_state = FUNC_3(VAR_9);
  break;

 case 132:
  VAR_9->parallel_detect = VAR_9->an_supported ? 0 : 1;
  break;

 case 130:
  break;

 default:
  VAR_9->an_state = VAR_3;
 }

 if (VAR_9->an_state == 130) {
  VAR_9->an_int = 0;
  FUNC_0(VAR_9, VAR_2, VAR_0, 0);
 } else if (VAR_9->an_state == VAR_3) {
  VAR_9->an_int = 0;
  FUNC_0(VAR_9, VAR_2, VAR_0, 0);
 }

 if (VAR_9->an_state >= 132) {
  VAR_9->an_result = VAR_9->an_state;
  VAR_9->an_state = 128;
  VAR_9->kr_state = VAR_8;
  VAR_9->kx_state = VAR_8;
  VAR_9->an_start = 0;
 }

 if (VAR_10 != VAR_9->an_state)
  goto again;

 if (VAR_9->an_int)
  goto next_int;

out:

 FUNC_0(VAR_9, VAR_2, VAR_1, VAR_6);

 FUNC_2(&VAR_9->an_mutex);
}
