
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int path; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int ,int ,char const*,int ) ;

svn_error_t *
FUNC_2(svn_fs_t *VAR_1,
                             const char *VAR_2)
{
  return
    FUNC_1
    (VAR_0, 0,
     FUNC_0("Corrupt entry in 'transactions' table for '%s'"
       " in filesystem '%s'"), VAR_2, VAR_1->path);
}
