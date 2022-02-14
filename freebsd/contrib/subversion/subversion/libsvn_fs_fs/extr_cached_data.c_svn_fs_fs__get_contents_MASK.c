
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_13__ {TYPE_5__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_12__ {int revision; } ;
struct rep_read_baton {TYPE_1__ fulltext_cache_key; scalar_t__ fulltext_cache; } ;
struct TYPE_14__ {int expanded_size; int revision; int item_index; } ;
typedef TYPE_3__ representation_t ;
struct TYPE_15__ {int second; int revision; int member_0; } ;
typedef TYPE_4__ pair_cache_key_t ;
struct TYPE_16__ {scalar_t__ fulltext_cache; } ;
typedef TYPE_5__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_5__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct rep_read_baton**,TYPE_2__*,TYPE_3__*,TYPE_4__,int *) ;
 int * FUNC_4 (struct rep_read_baton*,int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,int ) ;

svn_error_t *
FUNC_8(svn_stream_t **VAR_4,
                        svn_fs_t *VAR_5,
                        representation_t *VAR_6,
                        svn_boolean_t VAR_7,
                        apr_pool_t *VAR_8)
{
  if (! VAR_6)
    {
      *VAR_4 = FUNC_5(VAR_8);
    }
  else
    {
      fs_fs_data_t *VAR_9 = VAR_5->fsap_data;
      struct rep_read_baton *VAR_10;

      pair_cache_key_t VAR_11 = { 0 };
      VAR_11.revision = VAR_6->revision;
      VAR_11.second = VAR_6->item_index;



      FUNC_0(FUNC_3(&VAR_10, VAR_5, VAR_6, VAR_11, VAR_8));




      if (VAR_9->fulltext_cache && VAR_7
          && FUNC_1(VAR_6->revision)
          && FUNC_2(VAR_9, VAR_6->expanded_size))
        {
          VAR_10->fulltext_cache = VAR_9->fulltext_cache;
        }
      else
        {


          VAR_10->fulltext_cache_key.revision = VAR_0;
        }

      *VAR_4 = FUNC_4(VAR_10, VAR_8);
      FUNC_7(*VAR_4, ((void*)0) ,
                           VAR_2);
      FUNC_6(*VAR_4, VAR_3);
    }

  return VAR_1;
}
