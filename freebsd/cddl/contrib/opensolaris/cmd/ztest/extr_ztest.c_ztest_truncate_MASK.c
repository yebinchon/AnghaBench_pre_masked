
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ztest_ds_t ;
typedef void* uint64_t ;
struct TYPE_5__ {void* lr_length; void* lr_offset; void* lr_foid; } ;
typedef TYPE_1__ lr_truncate_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int *) ;
 int FUNC_1 (TYPE_1__*,int,int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_3(ztest_ds_t *VAR_1, uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4)
{
 lr_truncate_t *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(sizeof (*VAR_5), ((void*)0));

 VAR_5->lr_foid = VAR_2;
 VAR_5->lr_offset = VAR_3;
 VAR_5->lr_length = VAR_4;

 VAR_6 = FUNC_2(VAR_1, VAR_5, VAR_0);

 FUNC_1(VAR_5, sizeof (*VAR_5), ((void*)0));

 return (VAR_6);
}
