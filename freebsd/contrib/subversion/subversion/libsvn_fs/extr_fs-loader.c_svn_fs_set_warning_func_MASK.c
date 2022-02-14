
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_warning_callback_t ;
struct TYPE_3__ {void* warning_baton; int warning; } ;
typedef TYPE_1__ svn_fs_t ;



void
FUNC_0(svn_fs_t *VAR_0, svn_fs_warning_callback_t VAR_1,
                        void *VAR_2)
{
  VAR_0->warning = VAR_1;
  VAR_0->warning_baton = VAR_2;
}
