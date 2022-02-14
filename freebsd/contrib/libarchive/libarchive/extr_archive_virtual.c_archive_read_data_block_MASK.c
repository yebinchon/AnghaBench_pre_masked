
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive {TYPE_1__* vtable; } ;
typedef int la_int64_t ;
struct TYPE_2__ {int (* archive_read_data_block ) (struct archive*,void const**,size_t*,int *) ;} ;


 int FUNC_0 (struct archive*,void const**,size_t*,int *) ;

int
FUNC_1(struct archive *VAR_0,
    const void **VAR_1, size_t *VAR_2, la_int64_t *VAR_3)
{
 return ((VAR_0->vtable->archive_read_data_block)(VAR_0, VAR_1, VAR_2, VAR_3));
}
