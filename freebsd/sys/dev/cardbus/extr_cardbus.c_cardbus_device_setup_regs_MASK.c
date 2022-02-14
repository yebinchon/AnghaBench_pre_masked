
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int intline; int dev; } ;
typedef TYPE_1__ pcicfgregs ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_4(pcicfgregs *VAR_6)
{
 device_t VAR_7 = VAR_6->dev;
 int VAR_8;





 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  FUNC_3(VAR_7, FUNC_0(VAR_8), 0, 4);

 VAR_6->intline =
     FUNC_2(FUNC_1(FUNC_1(VAR_7)));
 FUNC_3(VAR_7, VAR_1, VAR_6->intline, 1);
 FUNC_3(VAR_7, VAR_0, 0x08, 1);
 FUNC_3(VAR_7, VAR_2, 0xa8, 1);
 FUNC_3(VAR_7, VAR_5, 0x14, 1);
 FUNC_3(VAR_7, VAR_3, 0x14, 1);
}
