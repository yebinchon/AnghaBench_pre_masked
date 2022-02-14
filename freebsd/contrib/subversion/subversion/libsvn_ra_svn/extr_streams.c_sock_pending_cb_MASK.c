
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_6__ {int pool; int sock; } ;
typedef TYPE_2__ sock_baton_t ;
struct TYPE_5__ {int s; } ;
struct TYPE_7__ {TYPE_1__ desc; int desc_type; } ;
typedef TYPE_3__ apr_pollfd_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_2,
                svn_boolean_t *VAR_3)
{
  sock_baton_t *VAR_4 = VAR_2;
  apr_pollfd_t VAR_5;

  VAR_5.desc_type = VAR_0;
  VAR_5.desc.s = VAR_4->sock;

  *VAR_3 = FUNC_0(&VAR_5, VAR_4->pool);

  FUNC_1(VAR_4->pool);

  return VAR_1;
}
