
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pool; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int (* set_svn_fs_open ) (TYPE_1__*,int ) ;int (* create ) (TYPE_1__*,char const*,int ,int ,int ) ;} ;
typedef TYPE_2__ fs_library_vtable_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__**,int ,int ) ;
 int FUNC_2 (TYPE_1__*,char const*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_5 ;
 int FUNC_4 (char const*,int ,int ) ;
 int FUNC_5 (char const*,int ,int ) ;

svn_error_t *
FUNC_6(svn_fs_t *VAR_6, const char *VAR_7)
{
  fs_library_vtable_t *VAR_8;

  FUNC_0(FUNC_1(&VAR_8, VAR_1, VAR_6->pool));


  FUNC_0(FUNC_4(VAR_7, VAR_0, VAR_6->pool));
  FUNC_0(FUNC_5(VAR_7, VAR_1, VAR_6->pool));


  FUNC_0(VAR_8->create(VAR_6, VAR_7, VAR_4, VAR_6->pool, VAR_3));
  FUNC_0(VAR_8->set_svn_fs_open(VAR_6, VAR_5));

  return VAR_2;
}
