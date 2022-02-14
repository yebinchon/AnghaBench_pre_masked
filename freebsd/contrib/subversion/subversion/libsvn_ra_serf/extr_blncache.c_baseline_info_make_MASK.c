
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_4__ {int revision; int bc_url; } ;
typedef TYPE_1__ baseline_info_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static baseline_info_t *
FUNC_2(const char *VAR_0,
                   svn_revnum_t VAR_1,
                   apr_pool_t *VAR_2)
{
  baseline_info_t *VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_3));

  VAR_3->bc_url = FUNC_1(VAR_2, VAR_0);
  VAR_3->revision = VAR_1;

  return VAR_3;
}
