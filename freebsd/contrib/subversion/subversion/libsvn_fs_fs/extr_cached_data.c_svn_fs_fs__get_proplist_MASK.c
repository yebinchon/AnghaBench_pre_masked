
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_stream_t ;
struct TYPE_16__ {TYPE_6__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_17__ {int revision; int item_index; int txn_id; } ;
typedef TYPE_3__ representation_t ;
struct TYPE_18__ {int second; int revision; int member_0; } ;
typedef TYPE_4__ pair_cache_key_t ;
struct TYPE_19__ {int id; TYPE_3__* prop_rep; } ;
typedef TYPE_5__ node_revision_t ;
struct TYPE_20__ {scalar_t__ properties_cache; } ;
typedef TYPE_6__ fs_fs_data_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (void**,scalar_t__*,scalar_t__,TYPE_4__*,int *) ;
 int FUNC_5 (scalar_t__,TYPE_4__*,int *,int *) ;
 int * FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *,int ,int ,...) ;
 int FUNC_8 (int **,TYPE_2__*,TYPE_3__*,int ,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 (int ,int *) ;
 char* FUNC_11 (TYPE_2__*,int ,int *) ;
 int * FUNC_12 (int *,int *,int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,char const*,int *,int *) ;

svn_error_t *
FUNC_15(apr_hash_t **VAR_3,
                        svn_fs_t *VAR_4,
                        node_revision_t *VAR_5,
                        apr_pool_t *VAR_6)
{
  apr_hash_t *VAR_7;
  svn_stream_t *VAR_8;

  if (VAR_5->prop_rep && FUNC_9(&VAR_5->prop_rep->txn_id))
    {
      svn_error_t *VAR_9;
      const char *VAR_10
        = FUNC_11(VAR_4, VAR_5->id, VAR_6);
      VAR_7 = FUNC_3(VAR_6);

      FUNC_0(FUNC_14(&VAR_8, VAR_10, VAR_6, VAR_6));
      VAR_9 = FUNC_12(VAR_7, VAR_8, VAR_1, VAR_6);
      if (VAR_9)
        {
          svn_string_t *VAR_11 = FUNC_10(VAR_5->id, VAR_6);

          VAR_9 = FUNC_6(VAR_9, FUNC_13(VAR_8));
          return FUNC_7(VAR_9,
                   FUNC_2("malformed property list for node-revision '%s' in '%s'"),
                   VAR_11->data, VAR_10);
        }
      FUNC_0(FUNC_13(VAR_8));
    }
  else if (VAR_5->prop_rep)
    {
      svn_error_t *VAR_12;
      fs_fs_data_t *VAR_13 = VAR_4->fsap_data;
      representation_t *VAR_14 = VAR_5->prop_rep;
      pair_cache_key_t VAR_15 = { 0 };

      VAR_15.revision = VAR_14->revision;
      VAR_15.second = VAR_14->item_index;
      if (VAR_13->properties_cache && FUNC_1(VAR_14->revision))
        {
          svn_boolean_t VAR_16;
          FUNC_0(FUNC_4((void **) VAR_3, &VAR_16,
                                 VAR_13->properties_cache, &VAR_15, VAR_6));
          if (VAR_16)
            return VAR_2;
        }

      VAR_7 = FUNC_3(VAR_6);
      FUNC_0(FUNC_8(&VAR_8, VAR_4, VAR_5->prop_rep, VAR_0,
                                      VAR_6));
      VAR_12 = FUNC_12(VAR_7, VAR_8, VAR_1, VAR_6);
      if (VAR_12)
        {
          svn_string_t *VAR_17 = FUNC_10(VAR_5->id, VAR_6);

          VAR_12 = FUNC_6(VAR_12, FUNC_13(VAR_8));
          return FUNC_7(VAR_12,
                   FUNC_2("malformed property list for node-revision '%s'"),
                   VAR_17->data);
        }
      FUNC_0(FUNC_13(VAR_8));

      if (VAR_13->properties_cache && FUNC_1(VAR_14->revision))
        FUNC_0(FUNC_5(VAR_13->properties_cache, &VAR_15, VAR_7, VAR_6));
    }
  else
    {

      VAR_7 = FUNC_3(VAR_6);
    }

  *VAR_3 = VAR_7;

  return VAR_2;
}
