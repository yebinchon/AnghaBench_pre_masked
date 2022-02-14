
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive {TYPE_1__* vtable; } ;
struct TYPE_2__ {char const* (* archive_filter_name ) (struct archive*,int) ;} ;


 char const* FUNC_0 (struct archive*,int) ;

const char *
FUNC_1(struct archive *VAR_0, int VAR_1)
{
 return ((VAR_0->vtable->archive_filter_name)(VAR_0, VAR_1));
}
