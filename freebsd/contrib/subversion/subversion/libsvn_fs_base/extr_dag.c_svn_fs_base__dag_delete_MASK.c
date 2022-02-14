
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int trail_t ;
struct TYPE_13__ {int data; int len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_14__ {int len; int data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_skel_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_15__ {char* data_key; } ;
typedef TYPE_3__ node_revision_t ;
struct TYPE_16__ {scalar_t__ kind; int * fs; int id; } ;
typedef TYPE_4__ dag_node_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ,char const*) ;
 int FUNC_3 (TYPE_4__*,char const*) ;
 int FUNC_4 (int *,int *,char const*,int *,int *) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__**,int ,int *,int *,int *) ;
 int FUNC_7 (char const**,char const*,int *,char const*,int *,int *) ;
 int FUNC_8 (int **,int *,int *) ;
 int FUNC_9 (TYPE_2__*,int *,char const*,int *,int *) ;
 int FUNC_10 (int **,int *,char const*,char const*,int ,int *,int *) ;
 int FUNC_11 (char const*,char const*) ;
 int FUNC_12 (int **,int *,int *) ;
 int FUNC_13 (TYPE_3__**,int *,int ,int *,int *) ;
 int FUNC_14 (int *,int ,TYPE_3__*,int *,int *) ;
 int * FUNC_15 (int *,char const*) ;
 int FUNC_16 (int *,char const*,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_17 (char const*) ;
 int * FUNC_18 (int ,int ,int *) ;
 TYPE_1__* FUNC_19 (int *,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ,int *) ;

svn_error_t *
FUNC_22(dag_node_t *VAR_7,
                        const char *VAR_8,
                        const char *VAR_9,
                        trail_t *VAR_10,
                        apr_pool_t *VAR_11)
{
  node_revision_t *VAR_12;
  const char *VAR_13, *VAR_14;
  apr_hash_t *VAR_15 = ((void*)0);
  svn_skel_t *VAR_16;
  svn_fs_t *VAR_17 = VAR_7->fs;
  svn_string_t VAR_18;
  svn_fs_id_t *VAR_19 = ((void*)0);
  dag_node_t *VAR_20;


  if (VAR_7->kind != VAR_6)
    return FUNC_2
      (VAR_0, ((void*)0),
       FUNC_1("Attempted to delete entry '%s' from *non*-directory node"), VAR_8);


  if (! FUNC_3(VAR_7, VAR_9))
    return FUNC_2
      (VAR_1, ((void*)0),
       FUNC_1("Attempted to delete entry '%s' from immutable directory node"),
       VAR_8);


  if (! FUNC_17(VAR_8))
    return FUNC_2
      (VAR_2, ((void*)0),
       FUNC_1("Attempted to delete a node with an illegal name '%s'"), VAR_8);


  FUNC_0(FUNC_13(&VAR_12, VAR_17, VAR_7->id,
                                        VAR_10, VAR_11));


  VAR_13 = VAR_12->data_key;




  if (! VAR_13)
    return FUNC_2
      (VAR_3, ((void*)0),
       FUNC_1("Delete failed: directory has no entry '%s'"), VAR_8);




  FUNC_0(FUNC_7(&VAR_14, VAR_13,
                                       VAR_17, VAR_9, VAR_10, VAR_11));
  if (! FUNC_11(VAR_14, VAR_13))
    {
      VAR_12->data_key = VAR_14;
      FUNC_0(FUNC_14(VAR_17, VAR_7->id, VAR_12,
                                            VAR_10, VAR_11));
    }





  FUNC_0(FUNC_9(&VAR_18, VAR_17, VAR_13, VAR_10, VAR_11));
  VAR_16 = FUNC_18(VAR_18.data, VAR_18.len, VAR_11);
  if (VAR_16)
    FUNC_0(FUNC_8(&VAR_15, VAR_16, VAR_11));


  if (VAR_15)
    VAR_19 = FUNC_15(VAR_15, VAR_8);




  if (! VAR_19)
    return FUNC_2
      (VAR_3, ((void*)0),
       FUNC_1("Delete failed: directory has no entry '%s'"), VAR_8);


  FUNC_0(FUNC_6(&VAR_20, FUNC_5(VAR_7),
                                    VAR_19, VAR_10, VAR_11));


  FUNC_0(FUNC_4(VAR_7->fs, VAR_19, VAR_9,
                                             VAR_10, VAR_11));


  FUNC_16(VAR_15, VAR_8, ((void*)0));


  {
    svn_stream_t *VAR_21;
    svn_stringbuf_t *VAR_22;
    apr_size_t VAR_23;

    FUNC_0(FUNC_12(&VAR_16, VAR_15, VAR_11));
    VAR_22 = FUNC_19(VAR_16, VAR_11);
    FUNC_0(FUNC_10(&VAR_21, VAR_17, VAR_14,
                                                   VAR_9, VAR_5, VAR_10,
                                                   VAR_11));
    VAR_23 = VAR_22->len;
    FUNC_0(FUNC_21(VAR_21, VAR_22->data, &VAR_23));
    FUNC_0(FUNC_20(VAR_21));
  }

  return VAR_4;
}
