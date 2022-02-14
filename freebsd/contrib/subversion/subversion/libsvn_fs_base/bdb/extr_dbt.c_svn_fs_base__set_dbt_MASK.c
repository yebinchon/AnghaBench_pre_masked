
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_5__ {scalar_t__ size; void* data; } ;
typedef TYPE_1__ DBT ;


 int FUNC_0 (TYPE_1__*) ;

DBT *
FUNC_1(DBT *VAR_0, const void *VAR_1, apr_size_t VAR_2)
{
  FUNC_0(VAR_0);

  VAR_0->data = (void *) VAR_1;
  VAR_0->size = (u_int32_t) VAR_2;

  return VAR_0;
}
