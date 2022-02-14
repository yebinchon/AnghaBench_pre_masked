
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int nDb; TYPE_2__* aDb; } ;
typedef TYPE_4__ sqlite3 ;
struct TYPE_19__ {char const* zTarget; TYPE_1__* pTrig; } ;
typedef TYPE_5__ TriggerStep ;
struct TYPE_21__ {TYPE_4__* db; } ;
struct TYPE_20__ {int nSrc; TYPE_3__* a; } ;
struct TYPE_17__ {void* zDatabase; void* zName; } ;
struct TYPE_16__ {char* zDbSName; } ;
struct TYPE_15__ {int pSchema; } ;
typedef TYPE_6__ SrcList ;
typedef TYPE_7__ Parse ;


 int FUNC_0 (int) ;
 void* FUNC_1 (TYPE_4__*,char const*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 TYPE_6__* FUNC_3 (TYPE_7__*,int ,int ,int ) ;

__attribute__((used)) static SrcList *FUNC_4(
  Parse *VAR_0,
  TriggerStep *VAR_1
){
  sqlite3 *VAR_2 = VAR_0->db;
  int VAR_3;
  SrcList *VAR_4;

  VAR_4 = FUNC_3(VAR_0, 0, 0, 0);
  if( VAR_4 ){
    FUNC_0( VAR_4->nSrc>0 );
    VAR_4->a[VAR_4->nSrc-1].zName = FUNC_1(VAR_2, VAR_1->zTarget);
    VAR_3 = FUNC_2(VAR_2, VAR_1->pTrig->pSchema);
    if( VAR_3==0 || VAR_3>=2 ){
      const char *VAR_5;
      FUNC_0( VAR_3<VAR_2->nDb );
      VAR_5 = VAR_2->aDb[VAR_3].zDbSName;
      VAR_4->a[VAR_4->nSrc-1].zDatabase = FUNC_1(VAR_2, VAR_5);
    }
  }
  return VAR_4;
}
