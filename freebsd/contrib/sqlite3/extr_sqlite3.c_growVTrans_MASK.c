
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3_int64 ;
struct TYPE_4__ {int const nVTrans; int ** aVTrans; } ;
typedef TYPE_1__ sqlite3 ;
typedef int VTable ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int ,int) ;
 int ** FUNC_1 (TYPE_1__*,void*,int) ;

__attribute__((used)) static int FUNC_2(sqlite3 *VAR_2){
  const int VAR_3 = 5;


  if( (VAR_2->nVTrans%VAR_3)==0 ){
    VTable **VAR_4;
    sqlite3_int64 VAR_5 = sizeof(sqlite3_vtab*)*
                                 ((sqlite3_int64)VAR_2->nVTrans + VAR_3);
    VAR_4 = FUNC_1(VAR_2, (void *)VAR_2->aVTrans, VAR_5);
    if( !VAR_4 ){
      return VAR_0;
    }
    FUNC_0(&VAR_4[VAR_2->nVTrans], 0, sizeof(sqlite3_vtab *)*VAR_3);
    VAR_2->aVTrans = VAR_4;
  }

  return VAR_1;
}
