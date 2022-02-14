
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_7__ ;
typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_2__ ;
typedef struct TYPE_39__ TYPE_1__ ;


typedef int trail_t ;
struct TYPE_39__ {int data; int len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_40__ {int data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_skel_t ;
struct TYPE_41__ {TYPE_7__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
struct TYPE_42__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
typedef int svn_checksum_t ;
struct TYPE_43__ {char* prop_key; } ;
typedef TYPE_5__ node_revision_t ;
struct TYPE_44__ {int id; } ;
typedef TYPE_6__ dag_node_t ;
struct TYPE_45__ {scalar_t__ format; } ;
typedef TYPE_7__ base_fs_data_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 TYPE_4__* FUNC_2 (int **,int ,int ,int ,int *) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (int ,int *,int ,int ) ;
 TYPE_4__* FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_6__*,char const*) ;
 TYPE_3__* FUNC_7 (TYPE_6__*) ;
 TYPE_4__* FUNC_8 (TYPE_3__*,char*,char const*,int *,int *) ;
 TYPE_4__* FUNC_9 (char const**,char const*,TYPE_3__*,char const*,int *,int *) ;
 TYPE_2__* FUNC_10 (int ,int *) ;
 TYPE_4__* FUNC_11 (int **,TYPE_3__*,char const*,char const*,int ,int *,int *) ;
 int FUNC_12 (char const*,char const*) ;
 TYPE_4__* FUNC_13 (char const**,TYPE_3__*,int *,int *,int *) ;
 TYPE_4__* FUNC_14 (TYPE_5__**,TYPE_3__*,int ,int *,int *) ;
 TYPE_4__* FUNC_15 (TYPE_3__*,int ,TYPE_5__*,int *,int *) ;
 TYPE_1__* FUNC_16 (int *,int *) ;
 TYPE_4__* FUNC_17 (int **,int const*,int *) ;
 TYPE_4__* FUNC_18 (int *) ;
 TYPE_4__* FUNC_19 (int *,int ,int *) ;

svn_error_t *
FUNC_20(dag_node_t *VAR_6,
                              const apr_hash_t *VAR_7,
                              const char *VAR_8,
                              trail_t *VAR_9,
                              apr_pool_t *VAR_10)
{
  node_revision_t *VAR_11;
  const char *VAR_12, *VAR_13;
  svn_fs_t *VAR_14 = FUNC_7(VAR_6);
  svn_stream_t *VAR_15;
  apr_size_t VAR_16;
  svn_skel_t *VAR_17;
  svn_stringbuf_t *VAR_18;
  base_fs_data_t *VAR_19 = VAR_14->fsap_data;


  if (! FUNC_6(VAR_6, VAR_8))
    {
      svn_string_t *VAR_20 = FUNC_10(VAR_6->id, VAR_10);
      return FUNC_4
        (VAR_0, ((void*)0),
         FUNC_1("Can't set proplist on *immutable* node-revision %s"),
         VAR_20->data);
    }


  FUNC_0(FUNC_14(&VAR_11, VAR_14, VAR_6->id,
                                        VAR_9, VAR_10));
  VAR_12 = VAR_11->prop_key;


  FUNC_0(FUNC_17(&VAR_17, VAR_7, VAR_10));
  VAR_18 = FUNC_16(VAR_17, VAR_10);





  if (VAR_19->format >= VAR_2)
    {
      svn_error_t *VAR_21;
      const char *VAR_22;
      svn_checksum_t *VAR_23;

      FUNC_0(FUNC_2(&VAR_23, VAR_5, VAR_18->data,
                           VAR_18->len, VAR_10));

      VAR_21 = FUNC_13(&VAR_22, VAR_14, VAR_23,
                                         VAR_9, VAR_10);
      if (! VAR_21)
        {
          if (VAR_11->prop_key)
            FUNC_0(FUNC_8(VAR_14, VAR_11->prop_key,
                                                       VAR_8, VAR_9, VAR_10));
          VAR_11->prop_key = VAR_22;
          return FUNC_15(VAR_14, VAR_6->id, VAR_11,
                                               VAR_9, VAR_10);
        }
      else if (VAR_21)
        {
          if (VAR_21->apr_err != VAR_1)
            return FUNC_5(VAR_21);

          FUNC_3(VAR_21);
          VAR_21 = VAR_3;
        }
    }



  FUNC_0(FUNC_9(&VAR_13, VAR_12,
                                       VAR_14, VAR_8, VAR_9, VAR_10));
  if (! FUNC_12(VAR_13, VAR_12))
    {
      VAR_11->prop_key = VAR_13;
      FUNC_0(FUNC_15(VAR_14, VAR_6->id, VAR_11,
                                            VAR_9, VAR_10));
    }


  FUNC_0(FUNC_11(&VAR_15, VAR_14,
                                                 VAR_13, VAR_8,
                                                 VAR_4, VAR_9, VAR_10));
  VAR_16 = VAR_18->len;
  FUNC_0(FUNC_19(VAR_15, VAR_18->data, &VAR_16));
  FUNC_0(FUNC_18(VAR_15));

  return VAR_3;
}
