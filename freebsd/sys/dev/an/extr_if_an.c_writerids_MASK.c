
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {struct an_softc* if_softc; } ;
struct TYPE_2__ {int an_len; int an_type; int an_val; } ;
struct an_softc {TYPE_1__ areq; } ;
struct an_ltv_gen {int dummy; } ;
struct aironet_ioctl {int command; int len; scalar_t__ data; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct an_softc*) ;
 int FUNC_1 (struct an_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct an_softc*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct an_softc*,int ,int ) ;
 int FUNC_4 (struct an_softc*,struct an_ltv_gen*) ;
 int FUNC_5 (struct an_softc*,struct an_ltv_gen*) ;
 int FUNC_6 (scalar_t__,int*,int) ;
 int FUNC_7 (int*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_8(struct ifnet *VAR_15, struct aironet_ioctl *VAR_16)
{
 struct an_softc *VAR_17;
 int VAR_18, VAR_19, VAR_20;

 VAR_17 = VAR_15->if_softc;
 FUNC_1(VAR_17);
 VAR_18 = 0;
 VAR_19 = VAR_16->command;

 switch (VAR_19) {
 case 131:
  VAR_18 = VAR_9;
  break;
 case 137:
  VAR_18 = VAR_5;
  break;
 case 138:
  VAR_18 = VAR_4;
  break;
 case 136:
  VAR_18 = VAR_6;
  break;
 case 132:
  FUNC_3(VAR_17, VAR_1, 0);
  return 0;
  break;
 case 133:
  FUNC_3(VAR_17, VAR_0, 0);
  return 0;
  break;
 case 130:






  VAR_18 = VAR_3;
  VAR_17 = VAR_15->if_softc;
  VAR_17->areq.an_len = VAR_2;
  VAR_17->areq.an_type = VAR_18;

  FUNC_4(VAR_17, (struct an_ltv_gen *)&VAR_17->areq);
  VAR_16->len = VAR_17->areq.an_len - 4;

  FUNC_2(VAR_17);

  VAR_20 = FUNC_7(&(VAR_17->areq.an_len), VAR_16->data,
       sizeof(VAR_17->areq.an_len));
  if (VAR_20) {
   FUNC_0(VAR_17);
   return -VAR_12;
  }

  VAR_20 = FUNC_7(&(VAR_17->areq.an_val), VAR_16->data + 2,
       VAR_16->len);
  FUNC_0(VAR_17);
  if (VAR_20)
   return -VAR_12;
  return 0;
  break;
 case 129:
  VAR_18 = VAR_11;
  break;
 case 128:
  VAR_18 = VAR_10;
  break;
 case 134:
  VAR_18 = VAR_8;
  break;
 case 135:
  VAR_18 = VAR_7;
  break;
 default:
  return -VAR_14;
 }

 if (VAR_18) {
  if (VAR_16->len > sizeof(VAR_17->areq.an_val) + 4)
   return -VAR_13;
  VAR_17->areq.an_len = VAR_16->len + 4;
  VAR_17->areq.an_type = VAR_18;


  FUNC_2(VAR_17);
  VAR_20 = FUNC_6((VAR_16->data) + 2, &VAR_17->areq.an_val,
         VAR_16->len);
  FUNC_0(VAR_17);
  if (VAR_20)
   return -VAR_12;

  FUNC_3(VAR_17, VAR_0, 0);
  FUNC_5(VAR_17, (struct an_ltv_gen *)&VAR_17->areq);
  FUNC_3(VAR_17, VAR_1, 0);
  return 0;
 }
 return -VAR_14;
}
