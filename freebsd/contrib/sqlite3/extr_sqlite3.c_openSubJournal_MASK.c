
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nStmtSpill; } ;
struct TYPE_4__ {scalar_t__ journalMode; int sjfd; int pVfs; scalar_t__ subjInMemory; } ;
typedef TYPE_1__ Pager ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 TYPE_2__ VAR_7 ;
 int FUNC_1 (int ,int ,int ,int const,int) ;

__attribute__((used)) static int FUNC_2(Pager *VAR_8){
  int VAR_9 = VAR_1;
  if( !FUNC_0(VAR_8->sjfd) ){
    const int VAR_10 = VAR_6 | VAR_5
      | VAR_2 | VAR_4
      | VAR_3;
    int VAR_11 = VAR_7.nStmtSpill;
    if( VAR_8->journalMode==VAR_0 || VAR_8->subjInMemory ){
      VAR_11 = -1;
    }
    VAR_9 = FUNC_1(VAR_8->pVfs, 0, VAR_8->sjfd, VAR_10, VAR_11);
  }
  return VAR_9;
}
