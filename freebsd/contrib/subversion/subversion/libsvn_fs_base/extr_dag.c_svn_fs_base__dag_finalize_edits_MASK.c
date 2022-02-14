
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_51__ TYPE_7__ ;
typedef struct TYPE_50__ TYPE_6__ ;
typedef struct TYPE_49__ TYPE_5__ ;
typedef struct TYPE_48__ TYPE_4__ ;
typedef struct TYPE_47__ TYPE_3__ ;
typedef struct TYPE_46__ TYPE_2__ ;
typedef struct TYPE_45__ TYPE_1__ ;


struct TYPE_45__ {int fs; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_46__ {TYPE_7__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
struct TYPE_47__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
struct TYPE_48__ {scalar_t__ kind; } ;
typedef TYPE_4__ svn_checksum_t ;
struct TYPE_49__ {char* edit_key; char* data_key; char const* data_key_uniquifier; } ;
typedef TYPE_5__ node_revision_t ;
struct TYPE_50__ {scalar_t__ kind; int id; TYPE_2__* fs; } ;
typedef TYPE_6__ dag_node_t ;
struct TYPE_51__ {scalar_t__ format; } ;
typedef TYPE_7__ base_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_4__ const*,TYPE_4__*) ;
 scalar_t__ VAR_6 ;
 TYPE_3__* FUNC_3 (TYPE_4__ const*,TYPE_4__*,int *,int ,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int ,int *,int *) ;
 TYPE_3__* FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (TYPE_6__*,char const*) ;
 TYPE_3__* FUNC_8 (TYPE_2__*,char const*,char const*,TYPE_1__*,int *) ;
 TYPE_3__* FUNC_9 (TYPE_4__**,TYPE_4__**,TYPE_2__*,char*,TYPE_1__*,int *) ;
 TYPE_3__* FUNC_10 (char const**,TYPE_2__*,TYPE_4__*,TYPE_1__*,int *) ;
 TYPE_3__* FUNC_11 (TYPE_5__**,TYPE_2__*,int ,TYPE_1__*,int *) ;
 TYPE_3__* FUNC_12 (TYPE_2__*,int ,TYPE_5__*,TYPE_1__*,int *) ;
 TYPE_3__* FUNC_13 (char const**,int ,TYPE_1__*,int *) ;
 scalar_t__ VAR_8 ;

svn_error_t *
FUNC_14(dag_node_t *VAR_9,
                                const svn_checksum_t *VAR_10,
                                const char *VAR_11,
                                trail_t *VAR_12,
                                apr_pool_t *VAR_13)
{
  svn_fs_t *VAR_14 = VAR_9->fs;
  node_revision_t *VAR_15;
  const char *VAR_16, *VAR_17, *VAR_18 = ((void*)0);
  const char *VAR_19 = ((void*)0);
  svn_checksum_t *VAR_20, *VAR_21;
  base_fs_data_t *VAR_22 = VAR_14->fsap_data;


  if (VAR_9->kind != VAR_8)
    return FUNC_6
      (VAR_1, ((void*)0),
       FUNC_1("Attempted to set textual contents of a *non*-file node"));


  if (! FUNC_7(VAR_9, VAR_11))
    return FUNC_6
      (VAR_2, ((void*)0),
       FUNC_1("Attempted to set textual contents of an immutable node"));


  FUNC_0(FUNC_11(&VAR_15, VAR_14, VAR_9->id,
                                        VAR_12, VAR_13));


  if (! VAR_15->edit_key)
    return VAR_5;


  FUNC_0(FUNC_9(&VAR_20, &VAR_21,
                                              VAR_14, VAR_15->edit_key,
                                              VAR_12, VAR_13));


  if (VAR_10)
    {
      svn_checksum_t *VAR_23;

      if (VAR_10->kind == VAR_6)
        VAR_23 = VAR_20;
      else if (VAR_10->kind == VAR_7)
        VAR_23 = VAR_21;
      else
        return FUNC_5(VAR_0, ((void*)0), ((void*)0));

      if (! FUNC_2(VAR_10, VAR_23))
        return FUNC_3(VAR_10, VAR_23, VAR_13,
                        FUNC_1("Checksum mismatch on representation '%s'"),
                        VAR_15->edit_key);
    }
  VAR_16 = VAR_15->data_key;
  if (VAR_21 && VAR_22->format >= VAR_4)
    {
      svn_error_t *VAR_24 = FUNC_10(&VAR_17, VAR_14,
                                                      VAR_21,
                                                      VAR_12, VAR_13);
      if (! VAR_24)
        {
          VAR_18 = VAR_15->edit_key;
          VAR_24 = FUNC_13(&VAR_19,
                                                 VAR_12->fs, VAR_12, VAR_13);
        }
      else if (VAR_24 && (VAR_24->apr_err == VAR_3))
        {
          FUNC_4(VAR_24);
          VAR_24 = VAR_5;
          VAR_17 = VAR_15->edit_key;
        }
      FUNC_0(VAR_24);
    }
  else
    {
      VAR_17 = VAR_15->edit_key;
    }

  VAR_15->data_key = VAR_17;
  VAR_15->data_key_uniquifier = VAR_19;
  VAR_15->edit_key = ((void*)0);

  FUNC_0(FUNC_12(VAR_14, VAR_9->id, VAR_15, VAR_12, VAR_13));



  if (VAR_16)
    FUNC_0(FUNC_8(VAR_14, VAR_16, VAR_11,
                                               VAR_12, VAR_13));



  if (VAR_18)
    FUNC_0(FUNC_8(VAR_14, VAR_18,
                                               VAR_11, VAR_12, VAR_13));

  return VAR_5;
}
