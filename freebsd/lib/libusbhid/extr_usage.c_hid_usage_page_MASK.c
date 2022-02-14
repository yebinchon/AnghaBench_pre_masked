
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int usage; char const* name; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,char*,int) ;

const char *
FUNC_2(int VAR_2)
{
 static char VAR_3[10];
 int VAR_4;

 if (!VAR_1)
  FUNC_0(1, "no hid table");

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_1[VAR_4].usage == VAR_2)
   return VAR_1[VAR_4].name;
 FUNC_1(VAR_3, "0x%04x", VAR_2);
 return VAR_3;
}
