
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct input_dev {int led; } ;
struct hidp_session {unsigned char leds; int intr_transmit; } ;


 int FUNC_0 (char*,struct hidp_session*,unsigned int,unsigned int,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (struct hidp_session*) ;
 int* FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct hidp_session *VAR_10, struct input_dev *VAR_11,
    unsigned int VAR_12, unsigned int VAR_13, int VAR_14)
{
 unsigned char VAR_15;
 struct sk_buff *VAR_16;

 FUNC_0("session %p type %d code %d value %d", VAR_10, VAR_12, VAR_13, VAR_14);

 if (VAR_12 != VAR_1)
  return -1;

 VAR_15 = (!!FUNC_6(VAR_7, VAR_11->led) << 3) |
    (!!FUNC_6(VAR_6, VAR_11->led) << 3) |
    (!!FUNC_6(VAR_9, VAR_11->led) << 2) |
    (!!FUNC_6(VAR_5, VAR_11->led) << 1) |
    (!!FUNC_6(VAR_8, VAR_11->led));

 if (VAR_10->leds == VAR_15)
  return 0;

 VAR_10->leds = VAR_15;

 if (!(VAR_16 = FUNC_2(3, VAR_2))) {
  FUNC_1("Can't allocate memory for new frame");
  return -VAR_0;
 }

 *FUNC_4(VAR_16, 1) = VAR_4 | VAR_3;
 *FUNC_4(VAR_16, 1) = 0x01;
 *FUNC_4(VAR_16, 1) = VAR_15;

 FUNC_5(&VAR_10->intr_transmit, VAR_16);

 FUNC_3(VAR_10);

 return 0;
}
