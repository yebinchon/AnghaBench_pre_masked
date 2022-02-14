
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {int reader; TYPE_3__* lookahead; int pool; } ;
typedef TYPE_1__ report_baton_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int pool; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_3__**,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*,char const*,int ) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(report_baton_t *VAR_1, const char *VAR_2)
{
  apr_size_t VAR_3 = FUNC_3(VAR_2);
  apr_pool_t *VAR_4;

  while (FUNC_2(VAR_1->lookahead, VAR_2, VAR_3))
    {
      FUNC_5(VAR_1->lookahead->pool);
      VAR_4 = FUNC_4(VAR_1->pool);
      FUNC_0(FUNC_1(&VAR_1->lookahead, VAR_1->reader, VAR_4));
    }
  return VAR_0;
}
