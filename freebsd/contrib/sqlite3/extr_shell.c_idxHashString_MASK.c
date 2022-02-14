
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0(const char *VAR_1, int VAR_2){
  unsigned int VAR_3 = 0;
  int VAR_4;
  for(VAR_4=0; VAR_4<VAR_2; VAR_4++){
    VAR_3 += (VAR_3<<3) + (unsigned char)(VAR_1[VAR_4]);
  }
  return (int)(VAR_3 % VAR_0);
}
