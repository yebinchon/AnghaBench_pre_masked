
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu_config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mpu_config* VAR_3 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (struct mpu_config*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(int VAR_6)
{
 struct mpu_config *VAR_7= &VAR_3[VAR_6];

 FUNC_2(VAR_7);
 FUNC_1(VAR_6);

 if (VAR_5)
  return VAR_1;

 if (VAR_4 & VAR_2)
 {
  FUNC_0(VAR_6, 0x02, 0);
  VAR_5 = 1;
  return VAR_1;
 }
 else
 {
  FUNC_0(VAR_6, 0x35, 0);
  FUNC_0(VAR_6, 0x38, 0);
  FUNC_0(VAR_6, 0x39, 0);
  FUNC_0(VAR_6, 0x97, 0);
 }
 return VAR_0;
}
