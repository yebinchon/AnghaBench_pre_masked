
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_10__ {TYPE_4__* priv; } ;
typedef TYPE_3__ svn_ra_session_t ;
struct TYPE_11__ {int callback_baton; TYPE_2__* callbacks; TYPE_1__* fs_path; int fs; } ;
typedef TYPE_4__ svn_ra_local__session_baton_t ;
typedef int svn_ra_dirent_receiver_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
struct TYPE_12__ {void* receiver_baton; int receiver; } ;
typedef TYPE_5__ dirent_receiver_baton_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;
struct TYPE_9__ {int * cancel_func; } ;
struct TYPE_8__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 char* FUNC_1 (int ,char const*,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int **,int ,int ,int *) ;
 int FUNC_4 (int *,char const*,int const*,int ,int,int *,int *,int ,TYPE_5__*,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_ra_session_t *VAR_2,
                   const char *VAR_3,
                   svn_revnum_t VAR_4,
                   const apr_array_header_t *VAR_5,
                   svn_depth_t VAR_6,
                   apr_uint32_t VAR_7,
                   svn_ra_dirent_receiver_t VAR_8,
                   void *VAR_9,
                   apr_pool_t *VAR_10)
{
  svn_ra_local__session_baton_t *VAR_11 = VAR_2->priv;
  svn_fs_root_t *VAR_12;
  svn_boolean_t VAR_13 = (VAR_7 & ~VAR_0) == 0;

  dirent_receiver_baton_t VAR_14;
  VAR_14.receiver = VAR_8;
  VAR_14.receiver_baton = VAR_9;

  FUNC_0(FUNC_3(&VAR_12, VAR_11->fs, VAR_4, VAR_10));
  VAR_3 = FUNC_1(VAR_11->fs_path->data, VAR_3, VAR_10);
  return FUNC_2(FUNC_4(VAR_12, VAR_3, VAR_5, VAR_6,
                                        VAR_13, ((void*)0), ((void*)0),
                                        VAR_1, &VAR_14,
                                        VAR_11->callbacks
                                          ? VAR_11->callbacks->cancel_func
                                          : ((void*)0),
                                        VAR_11->callback_baton, VAR_10));
}
