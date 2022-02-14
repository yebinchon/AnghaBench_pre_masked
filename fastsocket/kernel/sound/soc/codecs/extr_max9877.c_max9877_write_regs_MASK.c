
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int dev; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_3(void)
{
 unsigned int VAR_3;
 u8 VAR_4[6];

 VAR_4[0] = VAR_0;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++)
  VAR_4[VAR_3 + 1] = VAR_2[VAR_3];

 if (FUNC_2(VAR_1, VAR_4, 6) != 6)
  FUNC_1(&VAR_1->dev, "i2c write failed\n");
}
