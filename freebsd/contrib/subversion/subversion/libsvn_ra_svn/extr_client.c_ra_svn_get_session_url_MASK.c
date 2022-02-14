
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* parent; } ;
typedef TYPE_2__ svn_ra_svn__session_baton_t ;
struct TYPE_8__ {TYPE_1__* client_url; } ;
typedef TYPE_3__ svn_ra_svn__parent_t ;
struct TYPE_9__ {TYPE_2__* priv; } ;
typedef TYPE_4__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int len; int data; } ;


 int * VAR_0 ;
 char* FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static svn_error_t *FUNC_1(svn_ra_session_t *VAR_1,
                                           const char **VAR_2,
                                           apr_pool_t *VAR_3)
{
  svn_ra_svn__session_baton_t *VAR_4 = VAR_1->priv;
  svn_ra_svn__parent_t *VAR_5 = VAR_4->parent;

  *VAR_2 = FUNC_0(VAR_3, VAR_5->client_url->data,
                        VAR_5->client_url->len);

  return VAR_0;
}
