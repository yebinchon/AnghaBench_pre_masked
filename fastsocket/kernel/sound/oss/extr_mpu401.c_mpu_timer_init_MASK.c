
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mpu_config {int timer_flag; int version; int revision; } ;
struct TYPE_3__ {int devlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mpu_config* VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_0 () ;
 TYPE_1__** VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_1(int VAR_12)
{
 struct mpu_config *VAR_13;
 int VAR_14;

 VAR_13 = &VAR_5[VAR_12];

 if (VAR_10)
  return -1;

 VAR_10 = 1;

 VAR_7.devlink = VAR_12;
 VAR_5[VAR_12].timer_flag = 1;

 VAR_14 = FUNC_0();
 if (VAR_14 == -1)
  VAR_14 = 0;
 VAR_8[VAR_14] = &VAR_7;

 if (VAR_13->version < 0x20)
  VAR_9 = VAR_1 | VAR_0 | VAR_3 | VAR_4;
 else
 {
  if (VAR_13->revision)
   VAR_9 |= VAR_0 | VAR_4;

  if (VAR_13->revision & 0x02)
   VAR_9 |= VAR_2;


  if (VAR_13->revision & 0x40)
   VAR_6 = 10;
 }

 VAR_11 = (VAR_1 | VAR_4) & VAR_9;
 return VAR_14;

}
