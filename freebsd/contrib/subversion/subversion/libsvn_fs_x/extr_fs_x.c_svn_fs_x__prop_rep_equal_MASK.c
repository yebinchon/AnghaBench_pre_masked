
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int change_set; } ;
struct TYPE_8__ {int md5_digest; TYPE_1__ id; } ;
typedef TYPE_2__ svn_fs_x__representation_t ;
struct TYPE_9__ {int noderev_id; TYPE_2__* prop_rep; } ;
typedef TYPE_3__ svn_fs_x__noderev_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int **,int *,TYPE_3__*,int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int ) ;

svn_error_t *
FUNC_6(svn_boolean_t *VAR_3,
                         svn_fs_t *VAR_4,
                         svn_fs_x__noderev_t *VAR_5,
                         svn_fs_x__noderev_t *VAR_6,
                         svn_boolean_t VAR_7,
                         apr_pool_t *VAR_8)
{
  svn_fs_x__representation_t *VAR_9 = VAR_5->prop_rep;
  svn_fs_x__representation_t *VAR_10 = VAR_6->prop_rep;
  apr_hash_t *VAR_11;
  apr_hash_t *VAR_12;


  if (VAR_9 == VAR_10)
    {
      *VAR_3 = VAR_2;
      return VAR_1;
    }


  if ( VAR_9 && VAR_10
      && FUNC_5(VAR_9->id.change_set)
      && FUNC_5(VAR_10->id.change_set))
    {


      *VAR_3 = FUNC_1(VAR_9->md5_digest, VAR_10->md5_digest,
                      sizeof(VAR_9->md5_digest)) == 0;
      return VAR_1;
    }


  if (FUNC_4(&VAR_5->noderev_id, &VAR_6->noderev_id))
    {
      *VAR_3 = VAR_2;
      return VAR_1;
    }



  if (!VAR_7)
    {
      *VAR_3 = VAR_0;
      return VAR_1;
    }



  FUNC_0(FUNC_3(&VAR_11, VAR_4, VAR_5, VAR_8,
                                 VAR_8));
  FUNC_0(FUNC_3(&VAR_12, VAR_4, VAR_6, VAR_8,
                                 VAR_8));

  *VAR_3 = FUNC_2(VAR_11, VAR_12, VAR_8);
  return VAR_1;
}
