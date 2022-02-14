
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicrb_pin_access {int setscl; int getscl; int setsda; int getsda; struct i2c_softc* ctx; } ;
struct i2c_softc {scalar_t__ rb_pinctl_idx; int dev; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iicrb_pin_access*) ;

__attribute__((used)) static int
FUNC_2(struct i2c_softc *VAR_4)
{
 struct iicrb_pin_access VAR_5;
 int VAR_6;







 if (VAR_4->rb_pinctl_idx == 0)
  return (0);

 FUNC_0(VAR_4->dev, VAR_4->rb_pinctl_idx);

 VAR_5.ctx = VAR_4;
 VAR_5.getsda = VAR_1;
 VAR_5.setsda = VAR_3;
 VAR_5.getscl = VAR_0;
 VAR_5.setscl = VAR_2;
 VAR_6 = FUNC_1(&VAR_5);

 FUNC_0(VAR_4->dev, 0);

 return (VAR_6);
}
