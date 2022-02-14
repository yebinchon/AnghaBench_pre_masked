
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* data_rep; } ;
typedef TYPE_2__ svn_fs_x__noderev_t ;
typedef int svn_error_t ;
struct TYPE_10__ {int kind; int digest; } ;
typedef TYPE_3__ svn_checksum_t ;
typedef int svn_checksum_kind_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {int sha1_digest; int has_sha1; int md5_digest; } ;


 int * VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_3__*,int *) ;



svn_error_t *
FUNC_1(svn_checksum_t **VAR_1,
                        svn_fs_x__noderev_t *VAR_2,
                        svn_checksum_kind_t VAR_3,
                        apr_pool_t *VAR_4)
{
  *VAR_1 = ((void*)0);

  if (VAR_2->data_rep)
    {
      svn_checksum_t VAR_5;
      VAR_5.kind = VAR_3;

      switch(VAR_3)
        {
          case 129:
            VAR_5.digest = VAR_2->data_rep->md5_digest;
            break;

          case 128:
            if (! VAR_2->data_rep->has_sha1)
              return VAR_0;

            VAR_5.digest = VAR_2->data_rep->sha1_digest;
            break;

          default:
            return VAR_0;
        }

      *VAR_1 = FUNC_0(&VAR_5, VAR_4);
    }

  return VAR_0;
}
