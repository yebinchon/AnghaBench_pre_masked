
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_11__ {TYPE_4__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_12__ {scalar_t__ kind; TYPE_6__* data_rep; } ;
typedef TYPE_3__ node_revision_t ;
struct TYPE_13__ {int format; scalar_t__ rep_sharing_allowed; } ;
typedef TYPE_4__ fs_fs_data_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;
struct TYPE_14__ {int sha1_digest; int txn_id; scalar_t__ has_sha1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int * VAR_5 ;
 char* FUNC_1 (TYPE_2__*,int *,int ,int *) ;
 TYPE_1__* FUNC_2 (TYPE_6__*,int ,int,int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int **,char const*,int,int ,int *) ;
 int FUNC_5 (int *,int ,int ,int *,int *) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_fs_t *VAR_7,
                       node_revision_t *VAR_8,
                       apr_pool_t *VAR_9)
{
  fs_fs_data_t *VAR_10 = VAR_7->fsap_data;



  if ( VAR_10->rep_sharing_allowed
      && VAR_8->data_rep
      && VAR_8->data_rep->has_sha1)
    {
      apr_file_t *VAR_11;
      const char *VAR_12 = FUNC_1(VAR_7,
                                            &VAR_8->data_rep->txn_id,
                                            VAR_8->data_rep->sha1_digest,
                                            VAR_9);
      svn_stringbuf_t *VAR_13
        = FUNC_2(VAR_8->data_rep,
                                            VAR_10->format,
                                            (VAR_8->kind == VAR_6),
                                            VAR_9, VAR_9);
      FUNC_0(FUNC_4(&VAR_11, VAR_12,
                               VAR_4 | VAR_1 | VAR_3
                               | VAR_0, VAR_2, VAR_9));

      FUNC_0(FUNC_5(VAR_11, VAR_13->data,
                                     VAR_13->len, ((void*)0), VAR_9));

      FUNC_0(FUNC_3(VAR_11, VAR_9));
    }

  return VAR_5;
}
