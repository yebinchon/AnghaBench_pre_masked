
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iic_msg {int slave; int len; int* buf; int flags; } ;
struct ads111x_softc {int dev; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct iic_msg*,int ,int ) ;
 int FUNC_3 (struct iic_msg*) ;

__attribute__((used)) static int
FUNC_4(struct ads111x_softc *VAR_2, int VAR_3, int VAR_4)
{
 uint8_t VAR_5[3];
 struct iic_msg VAR_6[1];
 uint8_t VAR_7;

 VAR_7 = FUNC_1(VAR_2->dev);

 VAR_5[0] = VAR_3;
 FUNC_0(&VAR_5[1], VAR_4);

 VAR_6[0].slave = VAR_7;
 VAR_6[0].flags = VAR_0;
 VAR_6[0].len = sizeof(VAR_5);
 VAR_6[0].buf = VAR_5;

 return (FUNC_2(VAR_2->dev, VAR_6, FUNC_3(VAR_6), VAR_1));
}
