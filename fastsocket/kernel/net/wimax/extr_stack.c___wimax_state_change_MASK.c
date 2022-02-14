
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int state; int net_dev; } ;
struct sk_buff {int dummy; } ;
struct device {int dummy; } ;
typedef enum wimax_st { ____Placeholder_wimax_st } wimax_st ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (struct wimax_dev*,int) ;
 int FUNC_4 (int,struct device*,char*,struct wimax_dev*,int,int) ;
 int FUNC_5 (int,struct device*,char*,struct wimax_dev*,int,int) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 struct device* FUNC_11 (struct wimax_dev*) ;
 struct sk_buff* FUNC_12 (struct wimax_dev*,int,int,void**) ;
 int FUNC_13 (struct wimax_dev*,struct sk_buff*,void*) ;

void FUNC_14(struct wimax_dev *VAR_0, enum wimax_st VAR_1)
{
 struct device *VAR_2 = FUNC_11(VAR_0);
 enum wimax_st VAR_3 = VAR_0->state;
 struct sk_buff *VAR_4;
 void *VAR_5;

 FUNC_5(3, VAR_2, "(wimax_dev %p new_state %u [old %u])\n",
    VAR_0, VAR_1, VAR_3);

 if (FUNC_1(VAR_1 >= 130)) {
  FUNC_6(VAR_2, "SW BUG: requesting invalid state %u\n",
   VAR_1);
  goto out;
 }
 if (VAR_3 == VAR_1)
  goto out;
 VAR_5 = ((void*)0);
 VAR_4 = FUNC_12(
  VAR_0, VAR_1, VAR_3, &VAR_5);


 switch (VAR_3) {
 case 129:
  FUNC_2(VAR_3, VAR_1,
      1 << 135);
  break;
 case 135:
  FUNC_2(VAR_3, VAR_1,
      1 << 128
      | 1 << 131
      | 1 << 134);
  break;
 case 128:
  FUNC_2(VAR_3, VAR_1, 1 << 135);
  break;
 case 131:
  FUNC_2(VAR_3, VAR_1,
      1 << 128
      | 1 << 134);
  break;
 case 134:
  FUNC_2(VAR_3, VAR_1,
      1 << 128
      | 1 << 133);
  break;
 case 133:
  FUNC_2(VAR_3, VAR_1,
      1 << 128
      | 1 << 134
      | 1 << 132
      | 1 << 136
      | 1 << 137);
  break;
 case 132:
  FUNC_2(VAR_3, VAR_1,
      1 << 128
      | 1 << 134
      | 1 << 133
      | 1 << 136
      | 1 << 137);
  break;
 case 136:
  FUNC_2(VAR_3, VAR_1,
      1 << 128
      | 1 << 134
      | 1 << 133
      | 1 << 132
      | 1 << 137);
  break;
 case 137:
  FUNC_2(VAR_3, VAR_1,
      1 << 128
      | 1 << 134
      | 1 << 133);
  FUNC_9(VAR_0->net_dev);
  FUNC_7(VAR_0->net_dev);
  break;
 case 130:
 default:
  FUNC_6(VAR_2, "SW BUG: wimax_dev %p is in unknown state %u\n",
   VAR_0, VAR_0->state);
  FUNC_1(1);
  goto out;
 }


 switch (VAR_1) {
 case 129:
  FUNC_6(VAR_2, "SW BUG: wimax_dev %p entering NULL state "
   "from %u\n", VAR_0, VAR_0->state);
  FUNC_1(1);
  break;
 case 135:
  break;
 case 128:
  break;
 case 131:
  break;
 case 134:
  break;
 case 133:
  break;
 case 132:
  break;
 case 136:
  break;
 case 137:
  FUNC_8(VAR_0->net_dev);
  FUNC_10(VAR_0->net_dev);
  break;
 case 130:
 default:
  FUNC_0();
 }
 FUNC_3(VAR_0, VAR_1);
 if (VAR_4)
  FUNC_13(VAR_0, VAR_4, VAR_5);
out:
 FUNC_4(3, VAR_2, "(wimax_dev %p new_state %u [old %u]) = void\n",
  VAR_0, VAR_1, VAR_3);
 return;
}
