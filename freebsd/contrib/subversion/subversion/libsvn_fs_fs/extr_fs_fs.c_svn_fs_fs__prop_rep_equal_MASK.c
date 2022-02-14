
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_6__ {scalar_t__ revision; scalar_t__ item_index; int md5_digest; int txn_id; } ;
typedef TYPE_1__ representation_t ;
struct TYPE_7__ {int id; TYPE_1__* prop_rep; } ;
typedef TYPE_2__ node_revision_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int **,int *,TYPE_2__*,int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

svn_error_t *
FUNC_6(svn_boolean_t *VAR_3,
                          svn_fs_t *VAR_4,
                          node_revision_t *VAR_5,
                          node_revision_t *VAR_6,
                          apr_pool_t *VAR_7)
{
  representation_t *VAR_8 = VAR_5->prop_rep;
  representation_t *VAR_9 = VAR_6->prop_rep;
  apr_hash_t *VAR_10;
  apr_hash_t *VAR_11;


  if (VAR_8 == VAR_9)
    {
      *VAR_3 = VAR_2;
      return VAR_1;
    }


  if ( VAR_8 && VAR_9
      && !FUNC_5(&VAR_8->txn_id)
      && !FUNC_5(&VAR_9->txn_id))
    {

      if ( (VAR_8->revision == VAR_9->revision)
          && (VAR_8->item_index == VAR_9->item_index))
        {
          *VAR_3 = VAR_2;
          return VAR_1;
        }


      if (FUNC_1(VAR_8->md5_digest, VAR_9->md5_digest,
                 sizeof(VAR_8->md5_digest)))
        {
          *VAR_3 = VAR_0;
          return VAR_1;
        }
    }





  if (FUNC_4(VAR_5->id, VAR_6->id))
    {
      *VAR_3 = VAR_2;
      return VAR_1;
    }



  FUNC_0(FUNC_3(&VAR_10, VAR_4, VAR_5, VAR_7));
  FUNC_0(FUNC_3(&VAR_11, VAR_4, VAR_6, VAR_7));

  *VAR_3 = FUNC_2(VAR_10, VAR_11, VAR_7);
  return VAR_1;
}
