
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
struct TYPE_16__ {int number; int change_set; } ;
struct TYPE_18__ {TYPE_1__ id; int expanded_size; } ;
typedef TYPE_3__ svn_fs_x__representation_t ;
struct TYPE_19__ {int second; int revision; int member_0; } ;
typedef TYPE_4__ svn_fs_x__pair_cache_key_t ;
struct TYPE_20__ {int fulltext_cache; } ;
typedef TYPE_5__ svn_fs_x__data_t ;
struct TYPE_21__ {TYPE_5__* fsap_data; } ;
typedef TYPE_6__ svn_fs_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_17__ {int revision; } ;
struct TYPE_22__ {TYPE_2__ fulltext_cache_key; int fulltext_cache; } ;
typedef TYPE_7__ rep_read_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_5__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_7__**,TYPE_6__*,TYPE_3__*,TYPE_4__,int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (TYPE_7__*,int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *,int ) ;

svn_error_t *
FUNC_9(svn_stream_t **VAR_4,
                       svn_fs_t *VAR_5,
                       svn_fs_x__representation_t *VAR_6,
                       svn_boolean_t VAR_7,
                       apr_pool_t *VAR_8)
{
  if (! VAR_6)
    {
      *VAR_4 = FUNC_6(VAR_8);
    }
  else
    {
      svn_fs_x__data_t *VAR_9 = VAR_5->fsap_data;
      svn_filesize_t VAR_10 = VAR_6->expanded_size;
      rep_read_baton_t *VAR_11;
      svn_revnum_t VAR_12 = FUNC_4(VAR_6->id.change_set);

      svn_fs_x__pair_cache_key_t VAR_13 = { 0 };
      VAR_13.revision = VAR_12;
      VAR_13.second = VAR_6->id.number;



      FUNC_0(FUNC_3(&VAR_11, VAR_5, VAR_6, VAR_13,
                                 VAR_8));




      if ( VAR_7
          && FUNC_1(VAR_12)
          && FUNC_2(VAR_9, VAR_10))
        {
          VAR_11->fulltext_cache = VAR_9->fulltext_cache;
        }
      else
        {


          VAR_11->fulltext_cache_key.revision = VAR_0;
        }

      *VAR_4 = FUNC_5(VAR_11, VAR_8);
      FUNC_8(*VAR_4, ((void*)0) ,
                           VAR_2);
      FUNC_7(*VAR_4, VAR_3);
    }

  return VAR_1;
}
