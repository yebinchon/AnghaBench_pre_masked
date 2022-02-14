
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ztest_ds_t ;
typedef void* uint64_t ;
struct TYPE_6__ {int lr_blkptr; scalar_t__ lr_blkoff; void* lr_length; void* lr_offset; void* lr_foid; } ;
typedef TYPE_1__ lr_write_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (void*,TYPE_1__*,void*) ;
 TYPE_1__* FUNC_2 (void*,int *) ;
 int FUNC_3 (TYPE_1__*,void*,int *) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_5(ztest_ds_t *VAR_1, uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4,
    void *VAR_5)
{
 lr_write_t *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(sizeof (*VAR_6) + VAR_4, ((void*)0));

 VAR_6->lr_foid = VAR_2;
 VAR_6->lr_offset = VAR_3;
 VAR_6->lr_length = VAR_4;
 VAR_6->lr_blkoff = 0;
 FUNC_0(&VAR_6->lr_blkptr);

 FUNC_1(VAR_5, VAR_6 + 1, VAR_4);

 VAR_7 = FUNC_4(VAR_1, VAR_6, VAR_0);

 FUNC_3(VAR_6, sizeof (*VAR_6) + VAR_4, ((void*)0));

 return (VAR_7);
}
