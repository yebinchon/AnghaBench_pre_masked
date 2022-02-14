
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
typedef int svn_string_t ;
typedef int svn_stream_t ;
struct TYPE_15__ {int number; int change_set; } ;
struct TYPE_16__ {int expanded_size; TYPE_1__ id; } ;
typedef TYPE_2__ svn_fs_x__representation_t ;
struct TYPE_17__ {int second; int revision; int member_0; } ;
typedef TYPE_3__ svn_fs_x__pair_cache_key_t ;
struct TYPE_18__ {int noderev_id; TYPE_2__* prop_rep; } ;
typedef TYPE_4__ svn_fs_x__noderev_t ;
typedef int svn_fs_x__id_t ;
struct TYPE_19__ {int properties_cache; } ;
typedef TYPE_5__ svn_fs_x__data_t ;
struct TYPE_20__ {TYPE_5__* fsap_data; } ;
typedef TYPE_6__ svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_21__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int * VAR_1 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ,...) ;
 int FUNC_4 (void**,scalar_t__*,int ,TYPE_3__*,int *) ;
 int FUNC_5 (int ,TYPE_3__*,int *,int *) ;
 int FUNC_6 (int **,TYPE_6__*,TYPE_2__*,int ,int *) ;
 int FUNC_7 (int ) ;
 TYPE_8__* FUNC_8 (int *,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int **,int *,int *) ;
 char* FUNC_11 (TYPE_6__*,int const*,int *,int *) ;
 int FUNC_12 (int **,int *,int ,int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int **,char const*,int *) ;

svn_error_t *
FUNC_15(apr_hash_t **VAR_2,
                       svn_fs_t *VAR_3,
                       svn_fs_x__noderev_t *VAR_4,
                       apr_pool_t *VAR_5,
                       apr_pool_t *VAR_6)
{
  svn_stream_t *VAR_7;
  const svn_fs_x__id_t *VAR_8 = &VAR_4->noderev_id;

  if (VAR_4->prop_rep
      && !FUNC_9(VAR_4->prop_rep->id.change_set))
    {
      svn_stringbuf_t *VAR_9;
      svn_string_t *VAR_10;
      const char *VAR_11 = FUNC_11(VAR_3, VAR_8,
                                                           VAR_6,
                                                           VAR_6);
      FUNC_0(FUNC_14(&VAR_9, VAR_11, VAR_5));

      VAR_10 = FUNC_13(VAR_9);
      FUNC_1(FUNC_10(VAR_2, VAR_10, VAR_5),
                FUNC_3(VAR_6,
                    "malformed property list for node-revision '%s' in '%s'",
                    FUNC_8(&VAR_4->noderev_id,
                                         VAR_6)->data,
                    VAR_11));
    }
  else if (VAR_4->prop_rep)
    {
      svn_fs_x__data_t *VAR_12 = VAR_3->fsap_data;
      svn_fs_x__representation_t *VAR_13 = VAR_4->prop_rep;
      svn_fs_x__pair_cache_key_t VAR_14 = { 0 };
      svn_string_t *VAR_15;
      svn_boolean_t VAR_16;

      VAR_14.revision = FUNC_7(VAR_13->id.change_set);
      VAR_14.second = VAR_13->id.number;
      FUNC_0(FUNC_4((void **) VAR_2, &VAR_16,
                             VAR_12->properties_cache, &VAR_14, VAR_5));
      if (VAR_16)
        return VAR_1;

      FUNC_0(FUNC_6(&VAR_7, VAR_3, VAR_13, VAR_0, VAR_6));
      FUNC_0(FUNC_12(&VAR_15, VAR_7, VAR_13->expanded_size,
                                      VAR_5));

      FUNC_1(FUNC_10(VAR_2, VAR_15, VAR_5),
                FUNC_3(VAR_6,
                    "malformed property list for node-revision '%s'",
                    FUNC_8(&VAR_4->noderev_id,
                                         VAR_6)->data));

      FUNC_0(FUNC_5(VAR_12->properties_cache, &VAR_14, *VAR_2,
                             VAR_6));
    }
  else
    {

      *VAR_2 = FUNC_2(VAR_5);
    }

  return VAR_1;
}
