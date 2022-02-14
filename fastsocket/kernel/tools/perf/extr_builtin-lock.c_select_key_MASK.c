
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key; scalar_t__ name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_1[VAR_3].name; VAR_3++) {
  if (!FUNC_1(VAR_1[VAR_3].name, VAR_2)) {
   VAR_0 = VAR_1[VAR_3].key;
   return 0;
  }
 }

 FUNC_0("Unknown compare key: %s\n", VAR_2);

 return -1;
}
