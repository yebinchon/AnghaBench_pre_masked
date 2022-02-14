
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nId; TYPE_1__* a; } ;
struct TYPE_4__ {int zName; } ;
typedef TYPE_2__ IdList ;


 scalar_t__ FUNC_0 (int ,char const*) ;

__attribute__((used)) static int FUNC_1(IdList *VAR_0, const char *VAR_1){
  if( VAR_0 ){
    int VAR_2;
    for(VAR_2=0; VAR_2<VAR_0->nId; VAR_2++){
      if( FUNC_0(VAR_0->a[VAR_2].zName, VAR_1)==0 ) return 1;
    }
  }
  return 0;
}
