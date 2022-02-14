
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_pcache ;
struct TYPE_2__ {int nPage; int pGroup; } ;
typedef TYPE_1__ PCache1 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_pcache *VAR_0){
  int VAR_1;
  PCache1 *VAR_2 = (PCache1*)VAR_0;
  FUNC_0(VAR_2->pGroup);
  VAR_1 = VAR_2->nPage;
  FUNC_1(VAR_2->pGroup);
  return VAR_1;
}
