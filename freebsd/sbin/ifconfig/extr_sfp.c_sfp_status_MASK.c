
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ifreq {int dummy; } ;
struct i2c_info {int fd; scalar_t__ error; struct ifreq* ifr; } ;
typedef int ii ;
typedef int caddr_t ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_info*,int ,int) ;
 int FUNC_1 (struct i2c_info*,int) ;
 int FUNC_2 (struct i2c_info*,int) ;
 int FUNC_3 (struct i2c_info*,int ,int ,int,int ) ;

void
FUNC_4(int VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct i2c_info VAR_5;
 uint8_t VAR_6;


 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.fd = VAR_2;
 VAR_5.ifr = VAR_3;
 VAR_6 = 0;
 FUNC_3(&VAR_5, VAR_0, VAR_1, 1, (caddr_t)&VAR_6);
 if (VAR_5.error != 0 || VAR_6 == 0)
  return;

 switch (VAR_6) {
 case 130:
 case 128:
 case 129:
  FUNC_1(&VAR_5, VAR_4);
  break;
 default:
  FUNC_2(&VAR_5, VAR_4);
 }
}
