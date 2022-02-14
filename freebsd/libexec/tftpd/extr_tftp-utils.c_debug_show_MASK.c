
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int s ;
struct TYPE_2__ {char* name; int value; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char*,size_t) ;

const char *
FUNC_1(int VAR_1)
{
 static char VAR_2[100];
 size_t VAR_3 = sizeof(VAR_2);
 int VAR_4 = 0;

 VAR_2[0] = '\0';
 while (VAR_0[VAR_4].name != ((void*)0)) {
  if (VAR_1&VAR_0[VAR_4].value) {
   if (VAR_2[0] != '\0')
    FUNC_0(VAR_2, " ", VAR_3);
   FUNC_0(VAR_2, VAR_0[VAR_4].name, VAR_3);
  }
  VAR_4++;
 }
 if (VAR_2[0] != '\0')
  return (VAR_2);
 return ("none");
}
