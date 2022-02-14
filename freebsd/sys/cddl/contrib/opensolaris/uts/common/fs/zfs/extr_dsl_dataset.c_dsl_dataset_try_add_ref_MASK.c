
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_7__ {int ds_object; int * ds_dbuf; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int dmu_buf_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,void*) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ,void*) ;

boolean_t
FUNC_3(dsl_pool_t *VAR_3, dsl_dataset_t *VAR_4, void *VAR_5)
{
 dmu_buf_t *VAR_6 = VAR_4->ds_dbuf;
 boolean_t VAR_7 = VAR_0;

 if (VAR_6 != ((void*)0) && FUNC_2(VAR_6, VAR_3->dp_meta_objset,
     VAR_4->ds_object, VAR_2, VAR_5)) {

  if (VAR_4 == FUNC_0(VAR_6))
   VAR_7 = VAR_1;
  else
   FUNC_1(VAR_6, VAR_5);
 }

 return (VAR_7);
}
