
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 int VAR_4;

 switch (FUNC_0(FUNC_1(VAR_3), VAR_3, VAR_1)) {
 case 0:
  return (VAR_0);
 case 129:
  for (VAR_4 = 0; VAR_4 < FUNC_4(VAR_2); VAR_4++) {
   if (FUNC_3(VAR_3, &VAR_2[VAR_4]) == 0) {
    FUNC_2(VAR_3, VAR_2[VAR_4].name);
    return (VAR_0);
   }
  }

 case 128:
 default:
  return (128);
 }
}
