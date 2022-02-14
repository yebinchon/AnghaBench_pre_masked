
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonicvibes {int irqmask; } ;
struct snd_mpu401 {struct sonicvibes* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sonicvibes*,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_mpu401 * VAR_2)
{
 struct sonicvibes *VAR_3 = VAR_2->private_data;
 FUNC_1(VAR_3->irqmask &= ~VAR_1, FUNC_0(VAR_3, VAR_0));
 return 0;
}
