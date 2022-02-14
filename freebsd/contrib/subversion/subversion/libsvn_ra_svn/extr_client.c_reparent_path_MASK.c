
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
struct TYPE_8__ {TYPE_1__* path; } ;
typedef TYPE_3__ svn_ra_svn__parent_t ;
struct TYPE_9__ {TYPE_2__* priv; } ;
typedef TYPE_4__ svn_ra_session_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int data; } ;


 char const* FUNC_0 (int ,char const*,int *) ;

__attribute__((used)) static const char *
FUNC_1(svn_ra_session_t *VAR_0,
              const char *VAR_1,
              apr_pool_t *VAR_2)
{
  svn_ra_svn__session_baton_t *VAR_3 = VAR_0->priv;
  svn_ra_svn__parent_t *VAR_4 = VAR_3->parent;

  return FUNC_0(VAR_4->path->data, VAR_1, VAR_2);
}
