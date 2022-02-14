
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int len; int data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
struct TYPE_13__ {scalar_t__ kind; TYPE_7__* data_rep; } ;
typedef TYPE_3__ svn_fs_x__noderev_t ;
struct TYPE_14__ {scalar_t__ rep_sharing_allowed; } ;
typedef TYPE_4__ svn_fs_x__data_t ;
struct TYPE_15__ {TYPE_4__* fsap_data; } ;
typedef TYPE_5__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;
typedef int apr_file_t ;
struct TYPE_11__ {int change_set; } ;
struct TYPE_16__ {int sha1_digest; TYPE_1__ id; scalar_t__ has_sha1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int * VAR_5 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (TYPE_5__*,int ,int ,int *) ;
 TYPE_2__* FUNC_3 (TYPE_7__*,int,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int **,char const*,int,int ,int *) ;
 int FUNC_6 (int *,int ,int ,int *,int *) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_fs_t *VAR_7,
                       svn_fs_x__noderev_t *VAR_8,
                       apr_pool_t *VAR_9)
{
  svn_fs_x__data_t *VAR_10 = VAR_7->fsap_data;



  if ( VAR_10->rep_sharing_allowed
      && VAR_8->data_rep
      && VAR_8->data_rep->has_sha1)
    {
      apr_file_t *VAR_11;
      apr_int64_t VAR_12
        = FUNC_1(VAR_8->data_rep->id.change_set);
      const char *VAR_13
        = FUNC_2(VAR_7, VAR_12,
                                  VAR_8->data_rep->sha1_digest,
                                  VAR_9);
      svn_stringbuf_t *VAR_14
        = FUNC_3(VAR_8->data_rep,
                                           (VAR_8->kind == VAR_6),
                                           VAR_9, VAR_9);

      FUNC_0(FUNC_5(&VAR_11, VAR_13,
                               VAR_4 | VAR_1 | VAR_3
                               | VAR_0, VAR_2, VAR_9));

      FUNC_0(FUNC_6(VAR_11, VAR_14->data,
                                     VAR_14->len, ((void*)0), VAR_9));

      FUNC_0(FUNC_4(VAR_11, VAR_9));
    }

  return VAR_5;
}
