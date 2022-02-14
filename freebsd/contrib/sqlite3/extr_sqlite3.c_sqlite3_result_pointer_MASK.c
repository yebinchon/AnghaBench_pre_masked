
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* pOut; } ;
typedef TYPE_2__ sqlite3_context ;
struct TYPE_9__ {int flags; TYPE_1__* db; } ;
struct TYPE_7__ {int mutex; } ;
typedef TYPE_3__ Mem ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,void*,char const*,void (*) (void*)) ;
 int FUNC_3 (int ) ;

void FUNC_4(
  sqlite3_context *VAR_1,
  void *VAR_2,
  const char *VAR_3,
  void (*VAR_4)(void*)
){
  Mem *VAR_5 = VAR_1->pOut;
  FUNC_0( FUNC_3(VAR_5->db->mutex) );
  FUNC_1(VAR_5);
  VAR_5->flags = VAR_0;
  FUNC_2(VAR_5, VAR_2, VAR_3, VAR_4);
}
