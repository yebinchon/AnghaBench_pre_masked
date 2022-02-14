
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ess_info {void* gp; void* mpu; void* vc; void* sb; void* io; void* irq; scalar_t__ lock; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct ess_info *VAR_5, device_t VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(0);
     VAR_5->io = FUNC_1(VAR_6, VAR_3, &VAR_7, VAR_1);

 VAR_7 = FUNC_0(1);
     VAR_5->sb = FUNC_1(VAR_6, VAR_3, &VAR_7, VAR_1);

 VAR_7 = FUNC_0(2);
     VAR_5->vc = FUNC_1(VAR_6, VAR_3, &VAR_7, VAR_1);

 VAR_7 = FUNC_0(3);
     VAR_5->mpu = FUNC_1(VAR_6, VAR_3, &VAR_7, VAR_1);

 VAR_7 = FUNC_0(4);
     VAR_5->gp = FUNC_1(VAR_6, VAR_3, &VAR_7, VAR_1);

 VAR_7 = 0;
 VAR_5->irq = FUNC_1(VAR_6, VAR_4, &VAR_7,
  VAR_1 | VAR_2);







 return (VAR_5->irq && VAR_5->io && VAR_5->sb && VAR_5->vc && VAR_5->mpu && VAR_5->gp)? 0 : VAR_0;

}
