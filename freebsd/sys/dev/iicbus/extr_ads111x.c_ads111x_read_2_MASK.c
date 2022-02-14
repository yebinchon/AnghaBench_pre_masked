
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ads111x_softc {int dev; } ;
typedef int int16_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int *,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct ads111x_softc *VAR_1, int VAR_2, int *VAR_3)
{
 int VAR_4;
 uint8_t VAR_5[2];

 VAR_4 = FUNC_1(FUNC_2(VAR_1->dev, VAR_2, VAR_5, 2, VAR_0));
 if (VAR_4 == 0)
  *VAR_3 = (int16_t)FUNC_0(VAR_5);

 return (VAR_4);
}
