
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_opt_revision_t ;
typedef int svn_info_receiver_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_4__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct info_to_relpath_baton {char const* anchor_relpath; char const* anchor_abspath; int wc_ctx; void* info_baton; int info_receiver; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*,int const*,int const*,int ,int ,int ,int const*,int ,struct info_to_relpath_baton*,TYPE_1__*,int *) ;
 int FUNC_2 (char const**,char const*,int *) ;
 int FUNC_3 (char const*) ;

svn_error_t *
FUNC_4(const char *VAR_4,
                 const svn_opt_revision_t *VAR_5,
                 const svn_opt_revision_t *VAR_6,
                 svn_info_receiver_t VAR_7,
                 void *VAR_8,
                 svn_depth_t VAR_9,
                 const apr_array_header_t *VAR_10,
                 svn_client_ctx_t *VAR_11,
                 apr_pool_t *VAR_12)
{
  struct info_to_relpath_baton VAR_13;
  const char *VAR_14 = VAR_4;

  VAR_13.anchor_relpath = ((void*)0);
  VAR_13.info_receiver = VAR_7;
  VAR_13.info_baton = VAR_8;
  VAR_13.wc_ctx = VAR_11->wc_ctx;

  if (!FUNC_3(VAR_4))
    {
      FUNC_0(FUNC_2(&VAR_14, VAR_4, VAR_12));
      VAR_13.anchor_abspath = VAR_14;
      VAR_13.anchor_relpath = VAR_4;
    }

  FUNC_0(FUNC_1(VAR_14,
                           VAR_5,
                           VAR_6,
                           VAR_9,
                           VAR_0, VAR_2,
                           VAR_10,
                           VAR_3,
                           &VAR_13,
                           VAR_11,
                           VAR_12));

  return VAR_1;
}
