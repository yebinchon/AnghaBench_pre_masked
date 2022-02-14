
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; int value; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

const char *
FUNC_1(int VAR_1)
{
 static char VAR_2[100];
 int VAR_3 = 0;

 while (VAR_0[VAR_3].name != ((void*)0)) {
  if (VAR_0[VAR_3].value == VAR_1)
   break;
  VAR_3++;
 }
 if (VAR_0[VAR_3].name != ((void*)0))
  return VAR_0[VAR_3].name;
 FUNC_0(VAR_2, "unknown (type: %d)", VAR_1);
 return (VAR_2);
}
