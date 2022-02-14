
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 int VAR_4;

 if (!FUNC_4(VAR_3))
  return (VAR_0);


 if (FUNC_3(VAR_3, VAR_1)->ocd_data == 1)
  goto found;





 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_2); VAR_4++)
  if (FUNC_2(VAR_3, VAR_2[VAR_4].name))
   goto found;

 return (VAR_0);
found:
 FUNC_0(VAR_3, "Micron n25q");

 return (0);
}
