
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int iDb; } ;
struct TYPE_13__ {TYPE_2__ init; scalar_t__ mallocFailed; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_15__ {int nQueryLoop; char* zErrMsg; scalar_t__ pNewTable; scalar_t__ pNewIndex; scalar_t__ pNewTrigger; TYPE_4__* pRename; TYPE_3__* db; int eParseMode; } ;
struct TYPE_11__ {char const* z; size_t n; } ;
struct TYPE_14__ {TYPE_1__ t; struct TYPE_14__* pNext; } ;
typedef TYPE_4__ RenameToken ;
typedef TYPE_5__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,int ,int) ;
 int FUNC_2 (TYPE_3__*,char const*) ;
 int FUNC_3 (TYPE_5__*,char const*,char**) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(
  Parse *VAR_5,
  const char *VAR_6,
  int VAR_7,
  sqlite3 *VAR_8,
  const char *VAR_9,
  int VAR_10
){
  int VAR_11;
  char *VAR_12 = 0;

  VAR_8->init.iDb = VAR_10 ? 1 : FUNC_2(VAR_8, VAR_6);




  FUNC_1(VAR_5, 0, sizeof(Parse));
  VAR_5->eParseMode = (VAR_7 ? VAR_1 : VAR_0);
  VAR_5->db = VAR_8;
  VAR_5->nQueryLoop = 1;
  VAR_11 = FUNC_3(VAR_5, VAR_9, &VAR_12);
  FUNC_0( VAR_5->zErrMsg==0 );
  FUNC_0( VAR_11!=VAR_4 || VAR_12==0 );
  VAR_5->zErrMsg = VAR_12;
  if( VAR_8->mallocFailed ) VAR_11 = VAR_3;
  if( VAR_11==VAR_4
   && VAR_5->pNewTable==0 && VAR_5->pNewIndex==0 && VAR_5->pNewTrigger==0
  ){
    VAR_11 = VAR_2;
  }
  VAR_8->init.iDb = 0;
  return VAR_11;
}
