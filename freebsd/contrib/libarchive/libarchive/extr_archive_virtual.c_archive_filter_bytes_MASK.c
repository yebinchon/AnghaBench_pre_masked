
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive {TYPE_1__* vtable; } ;
typedef int la_int64_t ;
struct TYPE_2__ {int (* archive_filter_bytes ) (struct archive*,int) ;} ;


 int FUNC_0 (struct archive*,int) ;

la_int64_t
FUNC_1(struct archive *VAR_0, int VAR_1)
{
 return ((VAR_0->vtable->archive_filter_bytes)(VAR_0, VAR_1));
}
