
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ ds_reserved; scalar_t__ ds_quota; int ds_dir; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_7__ {scalar_t__ ds_unique_bytes; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 TYPE_4__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

uint64_t
FUNC_4(dsl_dataset_t *VAR_1)
{
 uint64_t VAR_2 = FUNC_3(VAR_1);
 uint64_t VAR_3 = FUNC_2(VAR_1->ds_dir,
     ((void*)0), 0, VAR_0);
 if (VAR_1->ds_reserved > FUNC_1(VAR_1)->ds_unique_bytes) {
  VAR_3 +=
      VAR_1->ds_reserved - FUNC_1(VAR_1)->ds_unique_bytes;
 }
 if (VAR_1->ds_quota != 0) {



  if (VAR_2 < VAR_1->ds_quota) {
   VAR_3 = FUNC_0(VAR_3,
       VAR_1->ds_quota - VAR_2);
  } else {
   VAR_3 = 0;
  }
 }
 return (VAR_3);
}
