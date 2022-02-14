
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_12__ {TYPE_5__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_13__ {int is_packed; int start_revision; } ;
typedef TYPE_2__ svn_fs_fs__revision_file_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_14__ {int second; int revision; } ;
typedef TYPE_3__ pair_cache_key_t ;
struct TYPE_15__ {int file_size; } ;
typedef TYPE_4__ p2l_header_t ;
struct TYPE_16__ {int p2l_header_cache; } ;
typedef TYPE_5__ fs_fs_data_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_4__**,TYPE_2__*,TYPE_1__*,int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (void**,scalar_t__*,int ,TYPE_3__*,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(apr_off_t *VAR_3,
                   svn_fs_t *VAR_4,
                   svn_fs_fs__revision_file_t *VAR_5,
                   svn_revnum_t VAR_6,
                   apr_pool_t *VAR_7)
{
  fs_fs_data_t *VAR_8 = VAR_4->fsap_data;
  p2l_header_t *VAR_9;
  svn_boolean_t VAR_10 = VAR_0;
  apr_off_t *VAR_11;


  pair_cache_key_t VAR_12;
  VAR_12.revision = VAR_5->start_revision;
  VAR_12.second = VAR_5->is_packed;

  FUNC_0(FUNC_2((void **)&VAR_11, &VAR_10,
                                 VAR_8->p2l_header_cache, &VAR_12,
                                 VAR_2, ((void*)0),
                                 VAR_7));
  if (VAR_10)
    {
      *VAR_3 = *VAR_11;
      return VAR_1;
    }

  FUNC_0(FUNC_1(&VAR_9, VAR_5, VAR_4, VAR_6, VAR_7,
                         VAR_7));
  *VAR_3 = VAR_9->file_size;

  return VAR_1;
}
