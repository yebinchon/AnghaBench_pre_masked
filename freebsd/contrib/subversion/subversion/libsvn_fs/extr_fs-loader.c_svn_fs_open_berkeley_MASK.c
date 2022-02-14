
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pool; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int (* set_svn_fs_open ) (TYPE_1__*,int ) ;int (* open_fs ) (TYPE_1__*,char const*,int ,int ,int ) ;} ;
typedef TYPE_2__ fs_library_vtable_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__**,char const*,int ) ;
 int FUNC_2 (TYPE_1__*,char const*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_3 ;

svn_error_t *
FUNC_4(svn_fs_t *VAR_4, const char *VAR_5)
{
  fs_library_vtable_t *VAR_6;

  FUNC_0(FUNC_1(&VAR_6, VAR_5, VAR_4->pool));
  FUNC_0(VAR_6->open_fs(VAR_4, VAR_5, VAR_2, VAR_4->pool, VAR_1));
  FUNC_0(VAR_6->set_svn_fs_open(VAR_4, VAR_3));

  return VAR_0;
}
