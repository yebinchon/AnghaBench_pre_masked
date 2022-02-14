
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* va_token; } ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;

int
FUNC_3(char *VAR_1, int VAR_2, void *VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0();
 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4 >= 0) {
  if (VAR_0[VAR_4]->va_token) {
   FUNC_1(VAR_5);
   return -1;
  }
  VAR_0[VAR_4]->va_token = VAR_3;
 }
 FUNC_1(VAR_5);
 return VAR_4;
}
