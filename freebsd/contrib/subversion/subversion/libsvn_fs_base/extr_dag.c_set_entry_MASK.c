
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int trail_t ;
struct TYPE_11__ {int data; int len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_12__ {int len; int data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_skel_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_13__ {char* data_key; } ;
typedef TYPE_3__ node_revision_t ;
struct TYPE_14__ {int id; } ;
typedef TYPE_4__ dag_node_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (char const**,char const*,int *,char const*,int *,int *) ;
 int FUNC_4 (int **,int *,int *) ;
 int FUNC_5 (TYPE_2__*,int *,char const*,int *,int *) ;
 int FUNC_6 (int **,int *,char const*,char const*,int ,int *,int *) ;
 int FUNC_7 (char const*,char const*) ;
 int FUNC_8 (int **,int *,int *) ;
 int FUNC_9 (TYPE_3__**,int *,int ,int *,int *) ;
 int FUNC_10 (int *,int ,TYPE_3__*,int *,int *) ;
 int FUNC_11 (int *,char const*,int const*) ;
 int * FUNC_12 (int ,int ,int *) ;
 TYPE_1__* FUNC_13 (int *,int *) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_16(dag_node_t *VAR_1,
          const char *VAR_2,
          const svn_fs_id_t *VAR_3,
          const char *VAR_4,
          trail_t *VAR_5,
          apr_pool_t *VAR_6)
{
  node_revision_t *VAR_7;
  const char *VAR_8, *VAR_9;
  apr_hash_t *VAR_10 = ((void*)0);
  svn_stream_t *VAR_11;
  apr_size_t VAR_12;
  svn_string_t VAR_13;
  svn_stringbuf_t *VAR_14;
  svn_skel_t *VAR_15;
  svn_fs_t *VAR_16 = FUNC_2(VAR_1);


  FUNC_0(FUNC_9(&VAR_7, VAR_16, VAR_1->id,
                                        VAR_5, VAR_6));
  VAR_8 = VAR_7->data_key;
  FUNC_0(FUNC_3(&VAR_9, VAR_8,
                                       VAR_16, VAR_4, VAR_5, VAR_6));






  if (! FUNC_7(VAR_8, VAR_9))
    {
      VAR_7->data_key = VAR_9;
      FUNC_0(FUNC_10(VAR_16, VAR_1->id, VAR_7,
                                            VAR_5, VAR_6));
    }



  if (VAR_8)
    {
      FUNC_0(FUNC_5(&VAR_13, VAR_16, VAR_8,
                                        VAR_5, VAR_6));
      VAR_15 = FUNC_12(VAR_13.data, VAR_13.len, VAR_6);
      if (VAR_15)
        FUNC_0(FUNC_4(&VAR_10, VAR_15,
                                                VAR_6));
    }


  if (! VAR_10)
    VAR_10 = FUNC_1(VAR_6);


  FUNC_11(VAR_10, VAR_2, VAR_3);


  FUNC_0(FUNC_8(&VAR_15, VAR_10,
                                            VAR_6));
  VAR_14 = FUNC_13(VAR_15, VAR_6);
  FUNC_0(FUNC_6(&VAR_11, VAR_16,
                                                 VAR_9, VAR_4,
                                                 VAR_0, VAR_5, VAR_6));
  VAR_12 = VAR_14->len;
  FUNC_0(FUNC_15(VAR_11, VAR_14->data, &VAR_12));
  return FUNC_14(VAR_11);
}
