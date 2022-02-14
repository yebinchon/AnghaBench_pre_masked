
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef double i64 ;
struct TYPE_3__ {int enc; int n; int z; } ;
typedef TYPE_1__ Mem ;


 scalar_t__ FUNC_0 (int ,double*,int ,int ) ;
 scalar_t__ FUNC_1 (double,double) ;

__attribute__((used)) static int FUNC_2(Mem *VAR_0, double VAR_1, i64 *VAR_2){
  i64 VAR_3 = (double)VAR_1;
  if( FUNC_1(VAR_1,VAR_3) ){
    *VAR_2 = VAR_3;
    return 1;
  }
  return 0==FUNC_0(VAR_0->z, VAR_2, VAR_0->n, VAR_0->enc);
}
