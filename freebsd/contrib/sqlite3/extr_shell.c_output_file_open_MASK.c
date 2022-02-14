
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * FUNC_0 (char const*,char*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,char*,char const*) ;

__attribute__((used)) static FILE *FUNC_3(const char *VAR_2, int VAR_3){
  FILE *VAR_4;
  if( FUNC_1(VAR_2,"stdout")==0 ){
    VAR_4 = VAR_1;
  }else if( FUNC_1(VAR_2, "stderr")==0 ){
    VAR_4 = VAR_0;
  }else if( FUNC_1(VAR_2, "off")==0 ){
    VAR_4 = 0;
  }else{
    VAR_4 = FUNC_0(VAR_2, VAR_3 ? "w" : "wb");
    if( VAR_4==0 ){
      FUNC_2(VAR_0, "Error: cannot open \"%s\"\n", VAR_2);
    }
  }
  return VAR_4;
}
