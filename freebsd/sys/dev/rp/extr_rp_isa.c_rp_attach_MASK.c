
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_9__ {int NumAiop; } ;
typedef TYPE_1__ CONTROLLER_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3)
{
 int VAR_4;
 int VAR_5, VAR_6;
 int VAR_7;
 CONTROLLER_t *VAR_8;
 int VAR_9;

 VAR_4 = FUNC_1(VAR_3);

 VAR_8 = FUNC_0(VAR_3);







 VAR_6 = VAR_8->NumAiop;


 VAR_5 = 0;
 for(VAR_7=0; VAR_7 < VAR_6; VAR_7++) {
  FUNC_7(VAR_8, VAR_7);
  FUNC_4(VAR_2, VAR_8, VAR_7);
  VAR_5 += FUNC_5(VAR_8, VAR_7);
 }

 VAR_9 = FUNC_2(VAR_8, VAR_6, VAR_5);
 if (VAR_9 != 0)
  goto nogo;

 return (0);

nogo:
 FUNC_3(VAR_8);

 return (VAR_9);
}
