
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
typedef TYPE_2__* devclass_t ;
struct TYPE_11__ {int maxunit; scalar_t__* devices; } ;
struct TYPE_10__ {int unit; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 TYPE_2__* FUNC_3 (TYPE_1__*) ;

int
FUNC_4(device_t VAR_1, int VAR_2)
{
 devclass_t VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_2 < VAR_3->maxunit && VAR_3->devices[VAR_2])
  return (VAR_0);
 VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (VAR_4)
  return (VAR_4);
 VAR_1->unit = VAR_2;
 VAR_4 = FUNC_1(VAR_3, VAR_1);
 if (VAR_4)
  return (VAR_4);

 FUNC_0();
 return (0);
}
