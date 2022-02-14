
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int revision; int * copies; int * proplist; int const* base_id; int const* root_id; int kind; } ;
typedef TYPE_1__ transaction_t ;
typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char const**,int *,int *,int *) ;
 int FUNC_2 (int *,TYPE_1__*,char const*,int *,int *) ;
 int VAR_2 ;

svn_error_t *
FUNC_3(const char **VAR_3,
                       svn_fs_t *VAR_4,
                       const svn_fs_id_t *VAR_5,
                       trail_t *VAR_6,
                       apr_pool_t *VAR_7)
{
  const char *VAR_8;
  transaction_t VAR_9;

  FUNC_0(FUNC_1(&VAR_8, VAR_4, VAR_6, VAR_7));
  VAR_9.kind = VAR_2;
  VAR_9.root_id = VAR_5;
  VAR_9.base_id = VAR_5;
  VAR_9.proplist = ((void*)0);
  VAR_9.copies = ((void*)0);
  VAR_9.revision = VAR_0;
  FUNC_0(FUNC_2(VAR_4, &VAR_9, VAR_8, VAR_6, VAR_7));

  *VAR_3 = VAR_8;
  return VAR_1;
}
