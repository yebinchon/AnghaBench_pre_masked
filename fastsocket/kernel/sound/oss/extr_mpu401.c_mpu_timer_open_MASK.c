
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpu_config {int dummy; } ;
struct TYPE_2__ {int devlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mpu_config* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 TYPE_1__** VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct mpu_config*) ;

__attribute__((used)) static int FUNC_4(int VAR_8, int VAR_9)
{
 int VAR_10 = VAR_6[VAR_8]->devlink;
 struct mpu_config *VAR_11= &VAR_3[VAR_10];

 if (VAR_7)
  return -VAR_0;

 FUNC_3(VAR_11);
 VAR_1 = 50;
 FUNC_0(VAR_10, 0xE0, 50);
 VAR_2 = VAR_4 = 120;
 FUNC_1(VAR_10, 120);
 VAR_7 = 1;
 VAR_5 = 0;
 FUNC_2(VAR_10);

 FUNC_0(VAR_10, 0xe7, 0x04);
 FUNC_0(VAR_10, 0x95, 0);

 return 0;
}
