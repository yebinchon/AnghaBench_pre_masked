
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(char *VAR_0){
  int VAR_1, VAR_2;
  char VAR_3;
  while( *VAR_0 && *VAR_0!='\\' ) VAR_0++;
  for(VAR_1=VAR_2=0; (VAR_3 = VAR_0[VAR_1])!=0; VAR_1++, VAR_2++){
    if( VAR_3=='\\' && VAR_0[VAR_1+1]!=0 ){
      VAR_3 = VAR_0[++VAR_1];
      if( VAR_3=='a' ){
        VAR_3 = '\a';
      }else if( VAR_3=='b' ){
        VAR_3 = '\b';
      }else if( VAR_3=='t' ){
        VAR_3 = '\t';
      }else if( VAR_3=='n' ){
        VAR_3 = '\n';
      }else if( VAR_3=='v' ){
        VAR_3 = '\v';
      }else if( VAR_3=='f' ){
        VAR_3 = '\f';
      }else if( VAR_3=='r' ){
        VAR_3 = '\r';
      }else if( VAR_3=='"' ){
        VAR_3 = '"';
      }else if( VAR_3=='\'' ){
        VAR_3 = '\'';
      }else if( VAR_3=='\\' ){
        VAR_3 = '\\';
      }else if( VAR_3>='0' && VAR_3<='7' ){
        VAR_3 -= '0';
        if( VAR_0[VAR_1+1]>='0' && VAR_0[VAR_1+1]<='7' ){
          VAR_1++;
          VAR_3 = (VAR_3<<3) + VAR_0[VAR_1] - '0';
          if( VAR_0[VAR_1+1]>='0' && VAR_0[VAR_1+1]<='7' ){
            VAR_1++;
            VAR_3 = (VAR_3<<3) + VAR_0[VAR_1] - '0';
          }
        }
      }
    }
    VAR_0[VAR_2] = VAR_3;
  }
  if( VAR_2<VAR_1 ) VAR_0[VAR_2] = 0;
}
