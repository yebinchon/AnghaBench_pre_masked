
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_3__ {int next_token; } ;
typedef TYPE_1__ ra_svn_edit_baton_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int * FUNC_1 (char*,scalar_t__,int *) ;

__attribute__((used)) static svn_string_t *
FUNC_2(char VAR_1,
           ra_svn_edit_baton_t *VAR_2,
           apr_pool_t *VAR_3)
{
  apr_size_t VAR_4;
  char VAR_5[1 + VAR_0];
  VAR_5[0] = VAR_1;
  VAR_4 = 1 + FUNC_0(&VAR_5[1], VAR_2->next_token++);

  return FUNC_1(VAR_5, VAR_4, VAR_3);
}
