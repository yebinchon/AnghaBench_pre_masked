
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* x; } ;
struct TYPE_6__ {int nLoaded; int nRate; unsigned int ixMask; TYPE_1__ u; } ;
typedef TYPE_2__ SHA3Context ;


 int FUNC_0 (TYPE_2__*,unsigned char const*,int) ;

__attribute__((used)) static unsigned char *FUNC_1(SHA3Context *VAR_0){
  unsigned int VAR_1;
  if( VAR_0->nLoaded==VAR_0->nRate-1 ){
    const unsigned char VAR_2 = 0x86;
    FUNC_0(VAR_0, &VAR_2, 1);
  }else{
    const unsigned char VAR_3 = 0x06;
    const unsigned char VAR_4 = 0x80;
    FUNC_0(VAR_0, &VAR_3, 1);
    VAR_0->nLoaded = VAR_0->nRate - 1;
    FUNC_0(VAR_0, &VAR_4, 1);
  }
  for(VAR_1=0; VAR_1<VAR_0->nRate; VAR_1++){
    VAR_0->u.x[VAR_1+VAR_0->nRate] = VAR_0->u.x[VAR_1^VAR_0->ixMask];
  }
  return &VAR_0->u.x[VAR_0->nRate];
}
