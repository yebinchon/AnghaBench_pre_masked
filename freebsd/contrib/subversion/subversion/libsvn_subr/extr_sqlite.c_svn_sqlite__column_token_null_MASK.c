
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_token_map_t ;
struct TYPE_3__ {int s3stmt; } ;
typedef TYPE_1__ svn_sqlite__stmt_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int const*,char const*) ;

int
FUNC_2(svn_sqlite__stmt_t *VAR_0,
                              int VAR_1,
                              const svn_token_map_t *VAR_2,
                              int VAR_3)
{

  const char *VAR_4 = (const char *)FUNC_0(VAR_0->s3stmt, VAR_1);

  if (!VAR_4)
    return VAR_3;

  return FUNC_1(VAR_2, VAR_4);
}
