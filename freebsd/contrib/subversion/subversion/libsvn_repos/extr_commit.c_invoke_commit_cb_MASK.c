
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_8__ {char const* post_commit_err; int * author; int * date; int revision; } ;
typedef TYPE_2__ svn_commit_info_t ;
typedef int (* svn_commit_callback2_t ) (TYPE_2__*,void*,int *) ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int **,int *,int ,int ,int *,int *) ;
 TYPE_1__* FUNC_4 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_commit_callback2_t VAR_4,
                 void *VAR_5,
                 svn_fs_t *VAR_6,
                 svn_revnum_t VAR_7,
                 const char *VAR_8,
                 apr_pool_t *VAR_9)
{

              svn_string_t *VAR_10;
              svn_string_t *VAR_11;
  svn_commit_info_t *VAR_12;
  apr_hash_t *VAR_13;

  if (VAR_4 == ((void*)0))
    return VAR_0;

  FUNC_0(FUNC_3(&VAR_13, VAR_6, VAR_7,
                                    VAR_3, VAR_9, VAR_9));

  VAR_10 = FUNC_4(VAR_13, VAR_2);
  VAR_11 = FUNC_4(VAR_13, VAR_1);

  VAR_12 = FUNC_1(VAR_9);


  VAR_12->revision = VAR_7;
  VAR_12->date = VAR_10 ? VAR_10->data : ((void*)0);
  VAR_12->author = VAR_11 ? VAR_11->data : ((void*)0);
  VAR_12->post_commit_err = VAR_8;


  return FUNC_2(VAR_4(VAR_12, VAR_5, VAR_9));
}
