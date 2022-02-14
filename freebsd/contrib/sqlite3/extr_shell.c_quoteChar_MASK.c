
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (char const*,int) ;

__attribute__((used)) static char FUNC_3(const char *VAR_0){
  int VAR_1;
  if( !FUNC_1((unsigned char)VAR_0[0]) && VAR_0[0]!='_' ) return '"';
  for(VAR_1=0; VAR_0[VAR_1]; VAR_1++){
    if( !FUNC_0((unsigned char)VAR_0[VAR_1]) && VAR_0[VAR_1]!='_' ) return '"';
  }
  return FUNC_2(VAR_0, VAR_1) ? '"' : 0;
}
