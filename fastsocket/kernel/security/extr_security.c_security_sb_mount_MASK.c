
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dummy; } ;
struct TYPE_2__ {int (* sb_mount ) (char*,struct path*,char*,unsigned long,void*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,struct path*,char*,unsigned long,void*) ;

int FUNC_1(char *VAR_1, struct path *VAR_2,
                       char *VAR_3, unsigned long VAR_4, void *VAR_5)
{
 return VAR_0->sb_mount(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
