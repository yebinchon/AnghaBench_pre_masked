
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1){
  int VAR_2;
  if( VAR_1[0]=='0' && VAR_1[1]=='x' ){
    for(VAR_2=2; FUNC_0(VAR_1[VAR_2])>=0; VAR_2++){}
  }else{
    for(VAR_2=0; VAR_1[VAR_2]>='0' && VAR_1[VAR_2]<='9'; VAR_2++){}
  }
  if( VAR_2>0 && VAR_1[VAR_2]==0 ) return (int)(FUNC_1(VAR_1) & 0xffffffff);
  if( FUNC_2(VAR_1, "on")==0 || FUNC_2(VAR_1,"yes")==0 ){
    return 1;
  }
  if( FUNC_2(VAR_1, "off")==0 || FUNC_2(VAR_1,"no")==0 ){
    return 0;
  }
  FUNC_3(VAR_0, "ERROR: Not a boolean value: \"%s\". Assuming \"no\".\n",
          VAR_1);
  return 0;
}
