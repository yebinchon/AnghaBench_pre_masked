
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_5__ {int iDb; int zLockName; int isWriteLock; int iTab; } ;
typedef TYPE_1__ TableLock ;
struct TYPE_6__ {int nTableLock; TYPE_1__* aTableLock; } ;
typedef TYPE_2__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ,int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(Parse *VAR_2){
  int VAR_3;
  Vdbe *VAR_4;

  VAR_4 = FUNC_1(VAR_2);
  FUNC_0( VAR_4!=0 );

  for(VAR_3=0; VAR_3<VAR_2->nTableLock; VAR_3++){
    TableLock *VAR_5 = &VAR_2->aTableLock[VAR_3];
    int VAR_6 = VAR_5->iDb;
    FUNC_2(VAR_4, VAR_0, VAR_6, VAR_5->iTab, VAR_5->isWriteLock,
                      VAR_5->zLockName, VAR_1);
  }
}
