
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive {TYPE_1__* vtable; } ;
struct TYPE_2__ {int (* archive_filter_code ) (struct archive*,int) ;} ;


 int FUNC_0 (struct archive*,int) ;

int
FUNC_1(struct archive *VAR_0, int VAR_1)
{
 return ((VAR_0->vtable->archive_filter_code)(VAR_0, VAR_1));
}
