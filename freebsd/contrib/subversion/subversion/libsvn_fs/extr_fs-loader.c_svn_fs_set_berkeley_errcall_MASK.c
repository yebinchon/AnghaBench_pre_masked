
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int (* bdb_set_errcall ) (TYPE_2__*,void (*) (char const*,char*)) ;} ;


 int FUNC_0 (TYPE_2__*,void (*) (char const*,char*)) ;
 int * FUNC_1 (int ) ;

svn_error_t *
FUNC_2(svn_fs_t *VAR_0,
                            void (*VAR_1)(const char *VAR_2, char *VAR_3))
{
  return FUNC_1(VAR_0->vtable->bdb_set_errcall(VAR_0, VAR_1));
}
