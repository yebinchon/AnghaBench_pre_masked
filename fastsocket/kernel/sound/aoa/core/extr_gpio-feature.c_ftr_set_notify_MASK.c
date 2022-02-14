
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_notification {scalar_t__ notify; void* data; int mutex; } ;
struct gpio_runtime {struct gpio_notification line_out_notify; struct gpio_notification line_in_notify; struct gpio_notification headphone_notify; } ;
typedef scalar_t__ notify_func_t ;
typedef enum notify_type { ____Placeholder_notify_type } notify_type ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct gpio_notification*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ,int ,char*,struct gpio_notification*) ;

__attribute__((used)) static int FUNC_4(struct gpio_runtime *VAR_8,
     enum notify_type VAR_9,
     notify_func_t VAR_10,
     void *VAR_11)
{
 struct gpio_notification *VAR_12;
 notify_func_t VAR_13;
 int VAR_14;
 char *VAR_15;
 int VAR_16 = -VAR_0;

 switch (VAR_9) {
 case 130:
  VAR_12 = &VAR_8->headphone_notify;
  VAR_15 = "headphone-detect";
  VAR_14 = VAR_5;
  break;
 case 129:
  VAR_12 = &VAR_8->line_in_notify;
  VAR_15 = "linein-detect";
  VAR_14 = VAR_6;
  break;
 case 128:
  VAR_12 = &VAR_8->line_out_notify;
  VAR_15 = "lineout-detect";
  VAR_14 = VAR_7;
  break;
 default:
  return -VAR_1;
 }

 if (VAR_14 == VAR_3)
  return -VAR_2;

 FUNC_1(&VAR_12->mutex);

 VAR_13 = VAR_12->notify;

 if (!VAR_13 && !VAR_10) {
  VAR_16 = 0;
  goto out_unlock;
 }

 if (VAR_13 && VAR_10) {
  if (VAR_13 == VAR_10 && VAR_12->data == VAR_11)
   VAR_16 = 0;
  goto out_unlock;
 }

 if (VAR_13 && !VAR_10)
  FUNC_0(VAR_14, VAR_12);

 if (!VAR_13 && VAR_10) {
  VAR_16 = FUNC_3(VAR_14, VAR_4, 0, VAR_15, VAR_12);
  if (VAR_16)
   goto out_unlock;
 }

 VAR_12->notify = VAR_10;
 VAR_12->data = VAR_11;

 VAR_16 = 0;
 out_unlock:
 FUNC_2(&VAR_12->mutex);
 return VAR_16;
}
