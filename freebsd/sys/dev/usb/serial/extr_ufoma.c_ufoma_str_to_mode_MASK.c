
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int * str; } ;


 scalar_t__ FUNC_0 (char*,int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(char *VAR_1)
{
 int VAR_2;
 for(VAR_2 = 0 ;VAR_0[VAR_2].str != ((void*)0); VAR_2++){
  if(FUNC_0(VAR_1, VAR_0[VAR_2].str)==0){
   return VAR_0[VAR_2].mode;
  }
 }
 return -1;
}
