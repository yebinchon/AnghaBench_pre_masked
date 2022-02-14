
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
typedef TYPE_2__* devclass_t ;
struct TYPE_6__ {struct TYPE_6__* parent; } ;
struct TYPE_5__ {TYPE_2__* devclass; } ;


 int * FUNC_0 (TYPE_2__*,char const*) ;

__attribute__((used)) static bool
FUNC_1(device_t VAR_0, const char *VAR_1)
{
 devclass_t VAR_2;

 for (VAR_2 = VAR_0->devclass; VAR_2 != ((void*)0); VAR_2 = VAR_2->parent) {
  if (FUNC_0(VAR_2, VAR_1) != ((void*)0))
   return (1);
 }
 return (0);
}
