
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_6__ {scalar_t__ expanded_size; int sha1_digest; scalar_t__ has_sha1; int md5_digest; } ;
typedef TYPE_1__ representation_t ;
struct TYPE_7__ {int id; TYPE_1__* data_rep; } ;
typedef TYPE_2__ node_revision_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int **,int *,TYPE_1__*,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__*,int *,int *,int *) ;

svn_error_t *
FUNC_5(svn_boolean_t *VAR_3,
                               svn_fs_t *VAR_4,
                               node_revision_t *VAR_5,
                               node_revision_t *VAR_6,
                               apr_pool_t *VAR_7)
{
  svn_stream_t *VAR_8, *VAR_9;
  representation_t *VAR_10 = VAR_5->data_rep;
  representation_t *VAR_11 = VAR_6->data_rep;
  svn_boolean_t VAR_12 = !VAR_10 || VAR_10->expanded_size == 0;
  svn_boolean_t VAR_13 = !VAR_11 || VAR_11->expanded_size == 0;


  if (VAR_12 && VAR_13)
    {
      *VAR_3 = VAR_2;
      return VAR_1;
    }

  if (VAR_12 != VAR_13)
    {
      *VAR_3 = VAR_0;
      return VAR_1;
    }


  if (FUNC_1(VAR_10->md5_digest, VAR_11->md5_digest, sizeof(VAR_10->md5_digest)))
    {
      *VAR_3 = VAR_0;
      return VAR_1;
    }



  if (VAR_10->has_sha1 && VAR_11->has_sha1)
    {
      *VAR_3 = FUNC_1(VAR_10->sha1_digest, VAR_11->sha1_digest,
                      sizeof(VAR_10->sha1_digest)) == 0;
      return VAR_1;
    }


  if (FUNC_3(VAR_5->id, VAR_6->id))
    {
      *VAR_3 = VAR_2;
      return VAR_1;
    }

  FUNC_0(FUNC_2(&VAR_8, VAR_4, VAR_10, VAR_2,
                                  VAR_7));
  FUNC_0(FUNC_2(&VAR_9, VAR_4, VAR_11, VAR_2,
                                  VAR_7));
  FUNC_0(FUNC_4(VAR_3, VAR_8, VAR_9,
                                   VAR_7));

  return VAR_1;
}
