
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu401 {int mid; } ;


 int FUNC_0 (struct mpu401*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mpu401*,int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct mpu401 *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2, VAR_0);
 VAR_3 = FUNC_2(VAR_2->mid);
 if (VAR_3)
  return VAR_3;
 FUNC_1(VAR_2, VAR_1);
 return 0;
}
