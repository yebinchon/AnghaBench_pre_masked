
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zTempFile; scalar_t__ doXdgOpen; } ;
typedef TYPE_1__ ShellState ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(ShellState *VAR_0){
  if( VAR_0->zTempFile==0 ) return;
  if( VAR_0->doXdgOpen ) return;
  if( FUNC_0(VAR_0->zTempFile) ) return;
  FUNC_1(VAR_0->zTempFile);
  VAR_0->zTempFile = 0;
}
