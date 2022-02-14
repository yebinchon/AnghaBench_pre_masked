
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_3__ {scalar_t__ chip_id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5)
{
 int VAR_6;

 if (FUNC_2(VAR_5) != VAR_2 ||
     FUNC_4(VAR_5) != VAR_3)
  return (VAR_1);

 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_4); VAR_6++) {
  if (FUNC_3(VAR_5) == VAR_4[VAR_6].chip_id) {
   FUNC_0(VAR_5, VAR_4[VAR_6].name);
   return (VAR_0);
  }
 }

 return (VAR_1);
}
