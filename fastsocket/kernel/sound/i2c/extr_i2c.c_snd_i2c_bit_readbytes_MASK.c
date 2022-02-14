
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_i2c_device {int flags; int addr; struct snd_i2c_bus* bus; } ;
struct snd_i2c_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_i2c_bus*) ;
 int FUNC_1 (struct snd_i2c_bus*,int) ;
 int FUNC_2 (struct snd_i2c_bus*,int) ;
 int FUNC_3 (struct snd_i2c_bus*) ;
 int FUNC_4 (struct snd_i2c_bus*) ;

__attribute__((used)) static int FUNC_5(struct snd_i2c_device *VAR_2,
     unsigned char *VAR_3, int VAR_4)
{
 struct snd_i2c_bus *VAR_5 = VAR_2->bus;
 int VAR_6, VAR_7 = 0;

 if (VAR_2->flags & VAR_1)
  return -VAR_0;
 FUNC_3(VAR_5);
 if ((VAR_6 = FUNC_2(VAR_5, (VAR_2->addr << 1) | 1)) < 0) {
  FUNC_0(VAR_5);
  return VAR_6;
 }
 while (VAR_4-- > 0) {
  if ((VAR_6 = FUNC_1(VAR_5, VAR_4 == 0)) < 0) {
   FUNC_0(VAR_5);
   return VAR_6;
  }
  *VAR_3++ = (unsigned char)VAR_6;
  VAR_7++;
 }
 FUNC_4(VAR_5);
 return VAR_7;
}
