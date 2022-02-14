
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; int value; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int,char*,int) ;

const char *
FUNC_1(int VAR_1)
{
 int VAR_2;
 static char VAR_3[sizeof "0xff"];

 for (VAR_2 = 0; VAR_0[VAR_2].name != ((void*)0); VAR_2++) {
  if (VAR_0[VAR_2].value == VAR_1)
   return VAR_0[VAR_2].name;
 }
 FUNC_0(VAR_3, sizeof VAR_3, "0x%02x", VAR_1);
 return VAR_3;
}
