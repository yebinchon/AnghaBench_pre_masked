
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
struct TYPE_7__ {int children; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;

int
FUNC_4(device_t VAR_0)
{
 device_t VAR_1;
 int VAR_2;

 FUNC_1(("Deleting all children of %s", FUNC_0(VAR_0)));

 VAR_2 = 0;

 while ((VAR_1 = FUNC_2(&VAR_0->children)) != ((void*)0)) {
  VAR_2 = FUNC_3(VAR_0, VAR_1);
  if (VAR_2) {
   FUNC_1(("Failed deleting %s", FUNC_0(VAR_1)));
   break;
  }
 }
 return (VAR_2);
}
