
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int path; int pool; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ,int ,int ,int ,int ) ;

svn_error_t *
FUNC_3(svn_fs_t *VAR_1, svn_checksum_t *VAR_2)
{
  return
    FUNC_2
    (VAR_0, 0,
     FUNC_0("No record in 'checksum-reps' table for checksum '%s' in "
       "filesystem '%s'"), FUNC_1(VAR_2,
                                                           VAR_1->pool),
                           VAR_1->path);
}
