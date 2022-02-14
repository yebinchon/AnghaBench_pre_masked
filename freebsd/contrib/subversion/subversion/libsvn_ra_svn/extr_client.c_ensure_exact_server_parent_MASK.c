
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* parent; } ;
typedef TYPE_1__ svn_ra_svn__session_baton_t ;
struct TYPE_8__ {int path; TYPE_4__* client_url; int server_url; } ;
typedef TYPE_2__ svn_ra_svn__parent_t ;
struct TYPE_9__ {TYPE_1__* priv; } ;
typedef TYPE_3__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {int data; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_3__*,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_ra_session_t *VAR_1,
                           apr_pool_t *VAR_2)
{
  svn_ra_svn__session_baton_t *VAR_3 = VAR_1->priv;
  svn_ra_svn__parent_t *VAR_4 = VAR_3->parent;




  if (FUNC_2(VAR_4->client_url, VAR_4->server_url))
    return VAR_0;


  FUNC_0(FUNC_1(VAR_1, VAR_4->client_url->data,
                          VAR_2));
  FUNC_3(VAR_4->path);

  return VAR_0;
}
