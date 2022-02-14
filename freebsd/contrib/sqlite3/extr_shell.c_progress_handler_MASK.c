
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nProgress; scalar_t__ mxProgress; int flgProgress; int out; } ;
typedef TYPE_1__ ShellState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(void *VAR_3) {
  ShellState *VAR_4 = (ShellState*)VAR_3;
  VAR_4->nProgress++;
  if( VAR_4->nProgress>=VAR_4->mxProgress && VAR_4->mxProgress>0 ){
    FUNC_0(VAR_4->out, "Progress limit reached (%u)\n", VAR_4->nProgress);
    if( VAR_4->flgProgress & VAR_2 ) VAR_4->nProgress = 0;
    if( VAR_4->flgProgress & VAR_0 ) VAR_4->mxProgress = 0;
    return 1;
  }
  if( (VAR_4->flgProgress & VAR_1)==0 ){
    FUNC_0(VAR_4->out, "Progress %u\n", VAR_4->nProgress);
  }
  return 0;
}
