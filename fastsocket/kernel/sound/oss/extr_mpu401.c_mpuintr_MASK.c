
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu_config {scalar_t__ base; int opened; scalar_t__ mode; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct mpu_config* VAR_2 ;
 scalar_t__ FUNC_1 (struct mpu_config*) ;
 int FUNC_2 (struct mpu_config*) ;
 int FUNC_3 (struct mpu_config*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct mpu_config *VAR_5;
 int VAR_6 = (int)(unsigned long) VAR_4;
 int VAR_7 = 0;

 VAR_5 = &VAR_2[VAR_6];

 if (FUNC_1(VAR_5))
 {
  VAR_7 = 1;
  if (VAR_5->base != 0 && (VAR_5->opened & VAR_1 || VAR_5->mode == VAR_0))
   FUNC_2(VAR_5);
  else
  {

   FUNC_3(VAR_5);
  }
 }
 return FUNC_0(VAR_7);
}
