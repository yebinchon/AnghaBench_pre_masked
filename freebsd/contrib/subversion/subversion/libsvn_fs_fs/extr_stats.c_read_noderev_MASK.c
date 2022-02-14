
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_18__ {int file_noderev_count; int file_noderev_size; int dir_noderev_count; int dir_noderev_size; } ;
typedef TYPE_2__ revision_info_t ;
struct TYPE_19__ {int ref_count; int kind; int revision; int expanded_size; int size; } ;
typedef TYPE_3__ rep_stats_t ;
struct TYPE_20__ {int fs; int stats; } ;
typedef TYPE_4__ query_t ;
struct TYPE_21__ {scalar_t__ kind; int predecessor_id; int created_path; scalar_t__ prop_rep; scalar_t__ data_rep; } ;
typedef TYPE_5__ node_revision_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*,TYPE_2__*,int *,int *) ;
 int FUNC_3 (TYPE_3__**,TYPE_4__*,scalar_t__,TYPE_2__*,int *,int *) ;
 int FUNC_4 (int ,scalar_t__,int *) ;
 int FUNC_5 (TYPE_5__**,int *,int *,int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_5 ;
 int * FUNC_7 (TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(query_t *VAR_6,
             svn_stringbuf_t *VAR_7,
             revision_info_t *VAR_8,
             apr_pool_t *VAR_9,
             apr_pool_t *VAR_10)
{
  rep_stats_t *VAR_11 = ((void*)0);
  rep_stats_t *VAR_12 = ((void*)0);
  node_revision_t *VAR_13;

  svn_stream_t *VAR_14 = FUNC_7(VAR_7, VAR_10);
  FUNC_0(FUNC_5(&VAR_13, VAR_14, VAR_10,
                                  VAR_10));
  FUNC_0(FUNC_4(VAR_6->fs, VAR_13->data_rep,
                                         VAR_10));
  FUNC_0(FUNC_4(VAR_6->fs, VAR_13->prop_rep,
                                         VAR_10));

  if (VAR_13->data_rep)
    {
      FUNC_0(FUNC_3(&VAR_11, VAR_6,
                                   VAR_13->data_rep, VAR_8,
                                   VAR_9, VAR_10));


      if (++VAR_11->ref_count == 1)
        VAR_11->kind = VAR_13->kind == VAR_5 ? VAR_2 : VAR_4;
    }

  if (VAR_13->prop_rep)
    {
      FUNC_0(FUNC_3(&VAR_12, VAR_6,
                                   VAR_13->prop_rep, VAR_8,
                                   VAR_9, VAR_10));


      if (++VAR_12->ref_count == 1)
        VAR_12->kind = VAR_13->kind == VAR_5 ? VAR_1
                                                    : VAR_3;
    }


  if (VAR_11 && VAR_11->ref_count == 1)
    FUNC_1(VAR_6->stats, VAR_11->size, VAR_11->expanded_size, VAR_11->revision,
               VAR_13->created_path, VAR_11->kind, !VAR_13->predecessor_id);
  if (VAR_12 && VAR_12->ref_count == 1)
    FUNC_1(VAR_6->stats, VAR_12->size, VAR_12->expanded_size,
               VAR_12->revision, VAR_13->created_path, VAR_12->kind,
               !VAR_13->predecessor_id);



  if ( VAR_13->kind == VAR_5 && VAR_11 && VAR_11->ref_count == 1
      && !FUNC_6(VAR_6->fs))
    FUNC_0(FUNC_2(VAR_6, VAR_13, VAR_8, VAR_9,
                      VAR_10));


  if (VAR_13->kind == VAR_5)
    {
      VAR_8->dir_noderev_size += VAR_7->len;
      VAR_8->dir_noderev_count++;
    }
  else
    {
      VAR_8->file_noderev_size += VAR_7->len;
      VAR_8->file_noderev_count++;
    }

  return VAR_0;
}
