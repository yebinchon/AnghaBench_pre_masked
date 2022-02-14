
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {struct an_softc* if_softc; } ;
struct TYPE_2__ {int an_len; unsigned short an_type; int an_val; } ;
struct an_softc {TYPE_1__ areq; } ;
struct an_ltv_gen {int dummy; } ;
struct aironet_ioctl {int command; int len; scalar_t__ data; } ;
 int FUNC_0 (struct an_softc*) ;
 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 int FUNC_1 (struct an_softc*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct an_softc*,struct an_ltv_gen*) ;
 scalar_t__ FUNC_3 (int*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_14, struct aironet_ioctl *VAR_15)
{
 unsigned short VAR_16;
 struct an_softc *VAR_17;
 int VAR_18;

 switch (VAR_15->command) {
 case 138:
  VAR_16 = VAR_4;
  break;
 case 137:
  VAR_16 = VAR_7;
  break;
 case 134:
  VAR_16 = VAR_8;
  break;
 case 130:
  VAR_16 = VAR_3;
  break;
 case 136:
  VAR_16 = VAR_5;
  break;
 case 135:
  VAR_16 = VAR_6;
  break;
 case 128:
  VAR_16 = VAR_11;
  break;
 case 129:
  VAR_16 = VAR_10;
  break;
 case 133:
  VAR_16 = VAR_9;
  break;
 case 131:
  VAR_16 = VAR_2;
  break;
 case 132:
  VAR_16 = VAR_1;
  break;
 default:
  VAR_16 = 999;
  break;
 }

 if (VAR_16 == 999)
  return -VAR_13;

 VAR_17 = VAR_14->if_softc;
 VAR_17->areq.an_len = VAR_0;
 VAR_17->areq.an_type = VAR_16;

 FUNC_2(VAR_17, (struct an_ltv_gen *)&VAR_17->areq);

 VAR_15->len = VAR_17->areq.an_len - 4;

 FUNC_1(VAR_17);

 if (FUNC_3(&(VAR_17->areq.an_len), VAR_15->data,
      sizeof(VAR_17->areq.an_len))) {
  VAR_18 = -VAR_12;
  goto lock_exit;
 }

 if (FUNC_3(&(VAR_17->areq.an_val), VAR_15->data + 2,
      VAR_15->len)) {
  VAR_18 = -VAR_12;
  goto lock_exit;
 }
 VAR_18 = 0;
lock_exit:
 FUNC_0(VAR_17);
 return (VAR_18);
}
