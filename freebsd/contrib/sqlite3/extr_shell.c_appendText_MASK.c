
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int nAlloc; char* z; } ;
typedef TYPE_1__ ShellText ;


 int FUNC_0 (char*,char const*,int) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(ShellText *VAR_0, char const *VAR_1, char VAR_2){
  int VAR_3;
  int VAR_4;
  int VAR_5 = FUNC_3(VAR_1);

  VAR_3 = VAR_5+VAR_0->n+1;
  if( VAR_2 ){
    VAR_3 += 2;
    for(VAR_4=0; VAR_4<VAR_5; VAR_4++){
      if( VAR_1[VAR_4]==VAR_2 ) VAR_3++;
    }
  }

  if( VAR_0->n+VAR_3>=VAR_0->nAlloc ){
    VAR_0->nAlloc = VAR_0->nAlloc*2 + VAR_3 + 20;
    VAR_0->z = FUNC_1(VAR_0->z, VAR_0->nAlloc);
    if( VAR_0->z==0 ) FUNC_2();
  }

  if( VAR_2 ){
    char *VAR_6 = VAR_0->z+VAR_0->n;
    *VAR_6++ = VAR_2;
    for(VAR_4=0; VAR_4<VAR_5; VAR_4++){
      *VAR_6++ = VAR_1[VAR_4];
      if( VAR_1[VAR_4]==VAR_2 ) *VAR_6++ = VAR_2;
    }
    *VAR_6++ = VAR_2;
    VAR_0->n = (int)(VAR_6 - VAR_0->z);
    *VAR_6 = '\0';
  }else{
    FUNC_0(VAR_0->z+VAR_0->n, VAR_1, VAR_5);
    VAR_0->n += VAR_5;
    VAR_0->z[VAR_0->n] = '\0';
  }
}
