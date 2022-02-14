
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ eState; int fd; int pWal; } ;
typedef TYPE_1__ Pager ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(Pager *VAR_3){
  int VAR_4;
  int VAR_5 = 0;

  FUNC_1( FUNC_2(VAR_3) );
  FUNC_1( VAR_3->eState==VAR_0 || VAR_3->eState==VAR_1 );






  FUNC_6(VAR_3->pWal);

  VAR_4 = FUNC_5(VAR_3->pWal, &VAR_5);
  if( VAR_4!=VAR_2 || VAR_5 ){
    FUNC_3(VAR_3);
    if( FUNC_0(VAR_3) ) FUNC_4(VAR_3->fd, 0, 0);
  }

  return VAR_4;
}
