
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int id; TYPE_4__* prop_rep; } ;
typedef TYPE_1__ node_revision_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;
struct TYPE_8__ {int revision; int txn_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 TYPE_4__* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,TYPE_4__*,int *) ;
 int * FUNC_4 (int ) ;
 char* FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int ,TYPE_1__*,int ,int *) ;
 int FUNC_7 (int *,int *,int ,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int **,char const*,int,int ,int *) ;
 int * FUNC_10 (int *,int ,int *) ;

svn_error_t *
FUNC_11(svn_fs_t *VAR_10,
                        node_revision_t *VAR_11,
                        apr_hash_t *VAR_12,
                        apr_pool_t *VAR_13)
{
  const char *VAR_14
    = FUNC_5(VAR_10, VAR_11->id, VAR_13);
  apr_file_t *VAR_15;
  svn_stream_t *VAR_16;


  FUNC_0(FUNC_9(&VAR_15, VAR_14,
                           VAR_4 | VAR_1 | VAR_3
                           | VAR_0, VAR_2, VAR_13));
  VAR_16 = FUNC_10(VAR_15, VAR_9, VAR_13);
  FUNC_0(FUNC_7(VAR_12, VAR_16, VAR_6, VAR_13));
  FUNC_0(FUNC_8(VAR_15, VAR_13));


  if (!VAR_11->prop_rep || !FUNC_2(VAR_11->prop_rep))
    {
      VAR_11->prop_rep = FUNC_1(VAR_13, sizeof(*VAR_11->prop_rep));
      VAR_11->prop_rep->txn_id = *FUNC_4(VAR_11->id);
      FUNC_0(FUNC_3(VAR_10, VAR_11->prop_rep, VAR_13));
      VAR_11->prop_rep->revision = VAR_7;
      FUNC_0(FUNC_6(VAR_10, VAR_11->id, VAR_11, VAR_5,
                                           VAR_13));
    }

  return VAR_8;
}
