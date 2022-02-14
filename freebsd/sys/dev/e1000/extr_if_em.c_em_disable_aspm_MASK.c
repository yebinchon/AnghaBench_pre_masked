
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct adapter {TYPE_2__ hw; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 scalar_t__ FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int,int) ;

__attribute__((used)) static void
FUNC_3(struct adapter *VAR_5)
{
 int VAR_6, VAR_7;
 u16 VAR_8,VAR_9;
 device_t VAR_10 = VAR_5->dev;

 switch (VAR_5->hw.mac.type) {
 case 130:
 case 129:
 case 128:
  break;
 default:
  return;
 }
 if (FUNC_0(VAR_10, VAR_4, &VAR_6) != 0)
  return;
 VAR_7 = VAR_6 + VAR_2;
 VAR_8 = FUNC_1(VAR_10, VAR_7, 2);
 if ((VAR_8 & VAR_0) == 0)
  return;
 VAR_7 = VAR_6 + VAR_3;
 VAR_9 = FUNC_1(VAR_10, VAR_7, 2);
 VAR_9 &= ~VAR_1;
 FUNC_2(VAR_10, VAR_7, VAR_9, 2);
 return;
}
