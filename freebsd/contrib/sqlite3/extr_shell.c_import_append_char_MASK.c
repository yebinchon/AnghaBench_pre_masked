
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ n; scalar_t__ nAlloc; char* z; } ;
typedef TYPE_1__ ImportCtx ;


 int FUNC_0 () ;
 char* FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(ImportCtx *VAR_0, int VAR_1){
  if( VAR_0->n+1>=VAR_0->nAlloc ){
    VAR_0->nAlloc += VAR_0->nAlloc + 100;
    VAR_0->z = FUNC_1(VAR_0->z, VAR_0->nAlloc);
    if( VAR_0->z==0 ) FUNC_0();
  }
  VAR_0->z[VAR_0->n++] = (char)VAR_1;
}
