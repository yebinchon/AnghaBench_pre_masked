
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wimax_dev {TYPE_1__* net_dev; } ;
struct sk_buff {int dummy; } ;
struct device {int dummy; } ;
typedef enum wimax_st { ____Placeholder_wimax_st } wimax_st ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {int ifindex; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,struct device*,char*,struct wimax_dev*,int,int,int) ;
 int FUNC_2 (int,struct device*,char*,struct wimax_dev*,int,int) ;
 int FUNC_3 (struct device*,char*,...) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int ,int) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 struct device* FUNC_9 (struct wimax_dev*) ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;

__attribute__((used)) static
struct sk_buff *FUNC_10(
 struct wimax_dev *VAR_9,
 enum wimax_st VAR_10, enum wimax_st VAR_11,
 void **VAR_12)
{
 int VAR_13;
 struct device *VAR_14 = FUNC_9(VAR_9);
 void *VAR_15;
 struct sk_buff *VAR_16;

 FUNC_2(3, VAR_14, "(wimax_dev %p new_state %u old_state %u)\n",
    VAR_9, VAR_10, VAR_11);
 VAR_13 = -VAR_0;
 VAR_16 = FUNC_8(VAR_2, VAR_1);
 if (VAR_16 == ((void*)0)) {
  FUNC_3(VAR_14, "RE_STCH: can't create message\n");
  goto error_new;
 }
 VAR_15 = FUNC_4(VAR_16, 0, VAR_8.id, &VAR_7,
      0, VAR_3);
 if (VAR_15 == ((void*)0)) {
  FUNC_3(VAR_14, "RE_STCH: can't put data into message\n");
  goto error_put;
 }
 *VAR_12 = VAR_15;

 VAR_13 = FUNC_6(VAR_16, VAR_6, VAR_11);
 if (VAR_13 < 0) {
  FUNC_3(VAR_14, "RE_STCH: Error adding OLD attr: %d\n", VAR_13);
  goto error_put;
 }
 VAR_13 = FUNC_6(VAR_16, VAR_5, VAR_10);
 if (VAR_13 < 0) {
  FUNC_3(VAR_14, "RE_STCH: Error adding NEW attr: %d\n", VAR_13);
  goto error_put;
 }
 VAR_13 = FUNC_5(VAR_16, VAR_4,
        VAR_9->net_dev->ifindex);
 if (VAR_13 < 0) {
  FUNC_3(VAR_14, "RE_STCH: Error adding IFINDEX attribute\n");
  goto error_put;
 }
 FUNC_1(3, VAR_14, "(wimax_dev %p new_state %u old_state %u) = %p\n",
  VAR_9, VAR_10, VAR_11, VAR_16);
 return VAR_16;

error_put:
 FUNC_7(VAR_16);
error_new:
 FUNC_1(3, VAR_14, "(wimax_dev %p new_state %u old_state %u) = %d\n",
  VAR_9, VAR_10, VAR_11, VAR_13);
 return FUNC_0(VAR_13);
}
