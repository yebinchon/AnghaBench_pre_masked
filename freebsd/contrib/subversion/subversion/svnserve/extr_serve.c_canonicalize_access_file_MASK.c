
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int base; } ;
typedef TYPE_1__ repository_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (char const*,int *) ;
 char* FUNC_2 (int ,char const*,int *) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char const**,char const*,char const*,int *) ;
 char* FUNC_6 (char const*,int *) ;
 int FUNC_7 (char const**,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(const char **VAR_1, repository_t *VAR_2,
                         const char *VAR_3, apr_pool_t *VAR_4)
{
  if (FUNC_4(*VAR_1))
    {
      *VAR_1 = FUNC_6(*VAR_1, VAR_4);
    }
  else if (FUNC_3(*VAR_1))
    {
      const char *VAR_5;

      FUNC_0(FUNC_7(&VAR_5, VAR_3,
                                               VAR_4));
      FUNC_0(FUNC_5(VAR_1, *VAR_1,
                                                  VAR_5, VAR_4));
      *VAR_1 = FUNC_6(*VAR_1, VAR_4);
    }
  else
    {
      *VAR_1 = FUNC_1(*VAR_1, VAR_4);
      *VAR_1 = FUNC_2(VAR_2->base, *VAR_1, VAR_4);
    }

  return VAR_0;
}
