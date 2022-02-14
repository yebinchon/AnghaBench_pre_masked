
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0){
  for(; *VAR_0; VAR_0++){
    if( FUNC_0(VAR_0[0]) ) continue;
    if( *VAR_0=='/' && VAR_0[1]=='*' ){
      VAR_0 += 2;
      while( *VAR_0 && (*VAR_0!='*' || VAR_0[1]!='/') ){ VAR_0++; }
      if( *VAR_0==0 ) return 0;
      VAR_0++;
      continue;
    }
    if( *VAR_0=='-' && VAR_0[1]=='-' ){
      VAR_0 += 2;
      while( *VAR_0 && *VAR_0!='\n' ){ VAR_0++; }
      if( *VAR_0==0 ) return 1;
      continue;
    }
    return 0;
  }
  return 1;
}
