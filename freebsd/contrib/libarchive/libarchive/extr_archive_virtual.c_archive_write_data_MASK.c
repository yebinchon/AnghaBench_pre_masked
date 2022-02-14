
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive {TYPE_1__* vtable; } ;
typedef int la_ssize_t ;
struct TYPE_2__ {int (* archive_write_data ) (struct archive*,void const*,size_t) ;} ;


 int FUNC_0 (struct archive*,void const*,size_t) ;

la_ssize_t
FUNC_1(struct archive *VAR_0, const void *VAR_1, size_t VAR_2)
{
 return ((VAR_0->vtable->archive_write_data)(VAR_0, VAR_1, VAR_2));
}
