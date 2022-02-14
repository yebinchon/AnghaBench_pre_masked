
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ device_t ;
typedef TYPE_1__* devclass_t ;
struct TYPE_4__ {int maxunit; scalar_t__* devices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__* FUNC_1 (int,int ,int) ;

int
FUNC_2(devclass_t VAR_4, device_t **VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8;
 device_t *VAR_9;

 VAR_7 = FUNC_0(VAR_4);
 VAR_9 = FUNC_1(VAR_7 * sizeof(device_t), VAR_2, VAR_1|VAR_3);
 if (!VAR_9)
  return (VAR_0);

 VAR_7 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_4->maxunit; VAR_8++) {
  if (VAR_4->devices[VAR_8]) {
   VAR_9[VAR_7] = VAR_4->devices[VAR_8];
   VAR_7++;
  }
 }

 *VAR_5 = VAR_9;
 *VAR_6 = VAR_7;

 return (0);
}
