
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int kobj_t ;
typedef TYPE_1__* device_t ;
struct TYPE_11__ {int children; scalar_t__ parent; scalar_t__ devclass; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_8 (int ,int ) ;
 int VAR_3 ;

int
FUNC_9(device_t VAR_4, device_t VAR_5)
{
 int VAR_6;
 device_t VAR_7;

 FUNC_2(("%s from %s", FUNC_1(VAR_5), FUNC_1(VAR_4)));


 if ((VAR_6 = FUNC_7(VAR_5)) != 0)
  return (VAR_6);


 while ((VAR_7 = FUNC_3(&VAR_5->children)) != ((void*)0)) {
  VAR_6 = FUNC_9(VAR_5, VAR_7);
  if (VAR_6)
   return (VAR_6);
 }

 if (VAR_5->devclass)
  FUNC_6(VAR_5->devclass, VAR_5);
 if (VAR_5->parent)
  FUNC_0(VAR_4, VAR_5);
 FUNC_4(&VAR_4->children, VAR_5, VAR_3);
 FUNC_4(&VAR_1, VAR_5, VAR_2);
 FUNC_8((kobj_t) VAR_5, VAR_0);

 FUNC_5();
 return (0);
}
