
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int Window ;
typedef int Walker ;
struct TYPE_5__ {int * pWin; } ;
struct TYPE_6__ {TYPE_1__ y; } ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(Walker *VAR_2, Expr *VAR_3){
  FUNC_1(VAR_2);
  if( FUNC_0(VAR_3, VAR_0) ){
    Window *VAR_4 = VAR_3->y.pWin;
    FUNC_2(VAR_4);
  }
  return VAR_1;
}
