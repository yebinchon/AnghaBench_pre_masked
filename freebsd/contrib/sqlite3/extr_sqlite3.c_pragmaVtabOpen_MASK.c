
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * pVtab; } ;
typedef TYPE_1__ sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
struct TYPE_6__ {TYPE_1__ base; } ;
typedef TYPE_2__ PragmaVtabCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_2, sqlite3_vtab_cursor **VAR_3){
  PragmaVtabCursor *VAR_4;
  VAR_4 = (PragmaVtabCursor*)FUNC_1(sizeof(*VAR_4));
  if( VAR_4==0 ) return VAR_0;
  FUNC_0(VAR_4, 0, sizeof(PragmaVtabCursor));
  VAR_4->base.pVtab = VAR_2;
  *VAR_3 = &VAR_4->base;
  return VAR_1;
}
