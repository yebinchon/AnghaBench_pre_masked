
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* str; int mode; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static char *FUNC_0(int VAR_1)
{
 int VAR_2;
 for(VAR_2 = 0 ;VAR_0[VAR_2].str != ((void*)0); VAR_2++){
  if(VAR_0[VAR_2].mode == VAR_1){
   return VAR_0[VAR_2].str;
  }
 }
 return ((void*)0);
}
