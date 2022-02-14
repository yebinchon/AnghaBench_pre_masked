
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_10__ {int * aLimit; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_12__ {int nArg; int ** apArg; scalar_t__ nUsed; } ;
struct TYPE_11__ {int nChar; int printfFlags; } ;
typedef TYPE_2__ StrAccum ;
typedef TYPE_3__ PrintfArguments ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ,int ,int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (TYPE_2__*,char const*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(
  sqlite3_context *VAR_3,
  int VAR_4,
  sqlite3_value **VAR_5
){
  PrintfArguments VAR_6;
  StrAccum VAR_7;
  const char *VAR_8;
  int VAR_9;
  sqlite3 *VAR_10 = FUNC_2(VAR_3);

  if( VAR_4>=1 && (VAR_8 = (const char*)FUNC_5(VAR_5[0]))!=0 ){
    VAR_6.nArg = VAR_4-1;
    VAR_6.nUsed = 0;
    VAR_6.apArg = VAR_5+1;
    FUNC_1(&VAR_7, VAR_10, 0, 0, VAR_10->aLimit[VAR_1]);
    VAR_7.printfFlags = VAR_2;
    FUNC_4(&VAR_7, VAR_8, &VAR_6);
    VAR_9 = VAR_7.nChar;
    FUNC_3(VAR_3, FUNC_0(&VAR_7), VAR_9,
                        VAR_0);
  }
}
