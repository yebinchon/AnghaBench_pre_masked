
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int module_t ;
struct TYPE_4__ {scalar_t__ data; int datasize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 TYPE_1__* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(module_t VAR_4, int VAR_5, void *VAR_6)
{
 switch (VAR_5) {
 case 129:
  VAR_3 = FUNC_0("beastie");

  if (VAR_3 == ((void*)0))
   return (VAR_1);

  if (((const char *)VAR_3->data)[VAR_3->datasize - 1] != '\0') {
   FUNC_1(VAR_3, VAR_2);
   return (VAR_0);
  }
  FUNC_2("%s", (const char *)VAR_3->data);

  return (0);
 case 128:
  FUNC_2("Bye!\n");

  if (VAR_3 != ((void*)0)) {
   FUNC_2("%s", (const char *)VAR_3->data);
   FUNC_1(VAR_3, VAR_2);
  }

  return (0);
 }
 return (VAR_0);
}
