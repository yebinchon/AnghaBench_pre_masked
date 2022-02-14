
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zBuf ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(FILE *VAR_0, int VAR_1, const char *VAR_2){
  int VAR_3;
  int VAR_4;
  int VAR_5 = VAR_1<0 ? -VAR_1 : VAR_1;
  char VAR_6[1000];
  if( VAR_5>(int)sizeof(VAR_6)/3 ) VAR_5 = (int)sizeof(VAR_6)/3;
  for(VAR_3=VAR_4=0; VAR_2[VAR_3]; VAR_3++){
    if( (VAR_2[VAR_3]&0xc0)!=0x80 ){
      VAR_4++;
      if( VAR_4==VAR_5 ){
        do{ VAR_3++; }while( (VAR_2[VAR_3]&0xc0)==0x80 );
        break;
      }
    }
  }
  if( VAR_4>=VAR_5 ){
    FUNC_0(VAR_0, "%.*s", VAR_3, VAR_2);
  }else if( VAR_1<0 ){
    FUNC_0(VAR_0, "%*s%s", VAR_5-VAR_4, "", VAR_2);
  }else{
    FUNC_0(VAR_0, "%s%*s", VAR_2, VAR_5-VAR_4, "");
  }
}
