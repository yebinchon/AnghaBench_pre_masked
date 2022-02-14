
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0){
  int VAR_1 = 0;
  while( *VAR_0 ){
    if( (0xc0&*(VAR_0++))!=0x80 ) VAR_1++;
  }
  return VAR_1;
}
