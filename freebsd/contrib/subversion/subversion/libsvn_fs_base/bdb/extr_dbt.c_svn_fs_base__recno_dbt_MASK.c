
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int db_recno_t ;
struct TYPE_5__ {int flags; int size; int ulen; } ;
typedef TYPE_1__ DBT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int) ;

DBT *
FUNC_1(DBT *VAR_1, db_recno_t *VAR_2)
{
  FUNC_0(VAR_1, VAR_2, sizeof(*VAR_2));
  VAR_1->ulen = VAR_1->size;
  VAR_1->flags |= VAR_0;

  return VAR_1;
}
