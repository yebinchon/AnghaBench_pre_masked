
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ n; } ;
typedef TYPE_1__ ShellText ;


 int FUNC_0 (char**) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, int VAR_1, char **VAR_2, char **VAR_3){
  ShellText *VAR_4 = (ShellText*)VAR_0;
  int VAR_5;
  FUNC_0(VAR_3);
  if( VAR_2==0 ) return 0;
  if( VAR_4->n ) FUNC_1(VAR_4, "|", 0);
  for(VAR_5=0; VAR_5<VAR_1; VAR_5++){
    if( VAR_5 ) FUNC_1(VAR_4, ",", 0);
    if( VAR_2[VAR_5] ) FUNC_1(VAR_4, VAR_2[VAR_5], 0);
  }
  return 0;
}
