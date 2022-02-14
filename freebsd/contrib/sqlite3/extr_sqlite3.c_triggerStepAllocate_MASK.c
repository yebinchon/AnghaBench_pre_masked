
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3 ;
struct TYPE_10__ {char* zTarget; int zSpan; int op; } ;
typedef TYPE_1__ TriggerStep ;
struct TYPE_11__ {scalar_t__ n; int z; } ;
typedef TYPE_2__ Token ;
struct TYPE_12__ {int * db; } ;
typedef TYPE_3__ Parse ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*,char*,TYPE_2__*) ;
 int FUNC_4 (int *,char const*,char const*) ;

__attribute__((used)) static TriggerStep *FUNC_5(
  Parse *VAR_1,
  u8 VAR_2,
  Token *VAR_3,
  const char *VAR_4,
  const char *VAR_5
){
  sqlite3 *VAR_6 = VAR_1->db;
  TriggerStep *VAR_7;

  VAR_7 = FUNC_1(VAR_6, sizeof(TriggerStep) + VAR_3->n + 1);
  if( VAR_7 ){
    char *VAR_8 = (char*)&VAR_7[1];
    FUNC_0(VAR_8, VAR_3->z, VAR_3->n);
    FUNC_2(VAR_8);
    VAR_7->zTarget = VAR_8;
    VAR_7->op = VAR_2;
    VAR_7->zSpan = FUNC_4(VAR_6, VAR_4, VAR_5);
    if( VAR_0 ){
      FUNC_3(VAR_1, VAR_7->zTarget, VAR_3);
    }
  }
  return VAR_7;
}
