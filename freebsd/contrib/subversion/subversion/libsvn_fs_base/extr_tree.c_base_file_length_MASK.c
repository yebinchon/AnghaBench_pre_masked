
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
struct file_length_args {char const* path; int length; TYPE_1__* root; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct file_length_args*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_filesize_t *VAR_3,
                 svn_fs_root_t *VAR_4,
                 const char *VAR_5,
                 apr_pool_t *VAR_6)
{
  struct file_length_args VAR_7;

  VAR_7.root = VAR_4;
  VAR_7.path = VAR_5;
  FUNC_0(FUNC_1(VAR_4->fs, VAR_2, &VAR_7,
                                 VAR_1, VAR_6));

  *VAR_3 = VAR_7.length;
  return VAR_0;
}
