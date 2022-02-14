
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int s ;
struct TYPE_2__ {int error; int * desc; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int *,size_t) ;
 scalar_t__ FUNC_2 (int *) ;

char *
FUNC_3(int VAR_1)
{
 static char VAR_2[100];
 size_t VAR_3 = sizeof(VAR_2);
 int VAR_4 = 0;

 while (VAR_0[VAR_4].desc != ((void*)0)) {
  if (VAR_0[VAR_4].error == VAR_1) {
   FUNC_1(VAR_2, VAR_0[VAR_4].desc, VAR_3);
   VAR_3 -= FUNC_2(VAR_0[VAR_4].desc);
  }
  VAR_4++;
 }
 if (VAR_2[0] == '\0')
  FUNC_0(VAR_2, "unknown (error=%d)", VAR_1);
 return (VAR_2);
}
