
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int apr_pool_t ;
struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ DBT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int ,int ) ;

DBT *
FUNC_1(DBT *VAR_2, apr_pool_t *VAR_3)
{
  if (VAR_2->data)
    FUNC_0(VAR_3, VAR_2->data, VAR_0,
                              VAR_1);

  return VAR_2;
}
