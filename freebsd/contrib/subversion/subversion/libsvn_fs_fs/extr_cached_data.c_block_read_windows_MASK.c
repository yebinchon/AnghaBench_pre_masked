
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {int member_0; } ;
typedef TYPE_1__ window_cache_key_t ;
struct TYPE_24__ {size_t len; scalar_t__* data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
struct TYPE_25__ {TYPE_7__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
struct TYPE_26__ {int file; } ;
typedef TYPE_4__ svn_fs_fs__revision_file_t ;
struct TYPE_27__ {scalar_t__ type; } ;
typedef TYPE_5__ svn_fs_fs__rep_header_t ;
typedef int svn_fs_fs__p2l_entry_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_28__ {int size; scalar_t__ current; int combined_cache; scalar_t__ start; int member_0; } ;
typedef TYPE_6__ rep_state_t ;
struct TYPE_29__ {int combined_window_cache; int raw_window_cache; int txdelta_window_cache; } ;
typedef TYPE_7__ fs_fs_data_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_3__*,int ,int *,scalar_t__,int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_6__*,scalar_t__,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*,TYPE_5__*,TYPE_3__*,TYPE_4__*,int *,int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_6__*,int *) ;
 int FUNC_6 (scalar_t__*,int ,int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int ,scalar_t__*,int ,size_t*,int *,int *) ;
 TYPE_2__* FUNC_8 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_fs_fs__rep_header_t *VAR_2,
                   svn_fs_t *VAR_3,
                   svn_fs_fs__revision_file_t *VAR_4,
                   svn_fs_fs__p2l_entry_t* VAR_5,
                   apr_off_t VAR_6,
                   apr_pool_t *VAR_7,
                   apr_pool_t *VAR_8)
{
  fs_fs_data_t *VAR_9 = VAR_3->fsap_data;
  rep_state_t VAR_10 = { 0 };
  apr_off_t VAR_11;
  window_cache_key_t VAR_12 = { 0 };

  if ( (VAR_2->type != VAR_1
          && (!VAR_9->txdelta_window_cache || !VAR_9->raw_window_cache))
      || (VAR_2->type == VAR_1
          && !VAR_9->combined_window_cache))
    return VAR_0;

  FUNC_0(FUNC_4(&VAR_10, VAR_2, VAR_3, VAR_4, VAR_5,
                         VAR_7));



  VAR_11 = VAR_10.start + VAR_10.current;
  if (VAR_2->type == VAR_1)
    {
      svn_stringbuf_t *VAR_13;
      svn_boolean_t VAR_14;


      FUNC_0(FUNC_6(&VAR_14, VAR_10.combined_cache,
                                 FUNC_3(&VAR_12, &VAR_10),
                                 VAR_8));
      if (VAR_14)
        return VAR_0;




      FUNC_0(FUNC_1(VAR_3, VAR_4->file, ((void*)0), VAR_11, VAR_8));

      VAR_13 = FUNC_8(VAR_10.size, VAR_7);
      FUNC_0(FUNC_7(VAR_4->file, VAR_13->data,
                                     VAR_10.size, &VAR_13->len, ((void*)0),
                                     VAR_7));
      VAR_13->data[VAR_13->len] = 0;
      VAR_10.current += VAR_10.size;

      FUNC_0(FUNC_5(VAR_13, &VAR_10, VAR_8));
    }
  else
    {
      FUNC_0(FUNC_2(VAR_3, &VAR_10, VAR_6, VAR_8));
    }

  return VAR_0;
}
