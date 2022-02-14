
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_10__ {scalar_t__ pList; int* aMemory; scalar_t__ szPMA; } ;
struct TYPE_8__ {int bUsePMA; int nTask; int iPrev; TYPE_4__ list; int nMemory; TYPE_2__* aTask; } ;
typedef TYPE_1__ VdbeSorter ;
struct TYPE_9__ {scalar_t__ bDone; scalar_t__ pThread; TYPE_4__ list; } ;
typedef TYPE_2__ SortSubtask ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int* FUNC_1 (int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (TYPE_2__*,int ,void*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(VdbeSorter *VAR_3){

  VAR_3->bUsePMA = 1;
  return FUNC_5(&VAR_3->aTask[0], &VAR_3->list);
}
