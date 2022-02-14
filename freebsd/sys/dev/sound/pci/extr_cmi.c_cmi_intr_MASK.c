
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_4__ {int channel; } ;
struct TYPE_3__ {int channel; } ;
struct sc_info {int lock; int mpu; int (* mpu_intr ) (int ) ;TYPE_2__ rch; TYPE_1__ pch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sc_info*,int ,int) ;
 int FUNC_2 (struct sc_info*,int ,int) ;
 int FUNC_3 (struct sc_info*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_7)
{
 struct sc_info *VAR_8 = VAR_7;
 u_int32_t VAR_9;
 u_int32_t VAR_10;

 FUNC_4(VAR_8->lock);
 VAR_9 = FUNC_2(VAR_8, VAR_6, 4);
 if ((VAR_9 & VAR_0) != 0) {

  VAR_10 = 0;
  if (VAR_9 & VAR_1) {
   VAR_10 |= VAR_2;

  }

  if (VAR_9 & VAR_3) {
   VAR_10 |= VAR_4;

  }

  if (VAR_10) {
   FUNC_1(VAR_8, VAR_5, VAR_10);
   FUNC_5(VAR_8->lock);


   if (VAR_9 & VAR_1) {
    FUNC_0(VAR_8->pch.channel);
   }

   if (VAR_9 & VAR_3) {
    FUNC_0(VAR_8->rch.channel);
   }

   FUNC_4(VAR_8->lock);
   FUNC_3(VAR_8, VAR_5, VAR_10);

  }
 }
 if(VAR_8->mpu_intr) {
  (VAR_8->mpu_intr)(VAR_8->mpu);
 }
 FUNC_5(VAR_8->lock);
 return;
}
