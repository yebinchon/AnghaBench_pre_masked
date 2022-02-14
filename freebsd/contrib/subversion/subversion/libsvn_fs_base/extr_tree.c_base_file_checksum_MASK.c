
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_checksum_kind_t ;
struct file_checksum_args {char const* path; int ** checksum; int kind; TYPE_1__* root; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,struct file_checksum_args*,int ,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_checksum_t **VAR_3,
                   svn_checksum_kind_t VAR_4,
                   svn_fs_root_t *VAR_5,
                   const char *VAR_6,
                   apr_pool_t *VAR_7)
{
  struct file_checksum_args VAR_8;
  apr_pool_t *VAR_9 = FUNC_3(VAR_7);

  VAR_8.root = VAR_5;
  VAR_8.path = VAR_6;
  VAR_8.kind = VAR_4;
  VAR_8.checksum = VAR_3;
  FUNC_0(FUNC_2(VAR_5->fs, VAR_2, &VAR_8,
                                 VAR_0, VAR_9));
  *VAR_3 = FUNC_1(*VAR_3, VAR_7);
  FUNC_4(VAR_9);
  return VAR_1;
}
