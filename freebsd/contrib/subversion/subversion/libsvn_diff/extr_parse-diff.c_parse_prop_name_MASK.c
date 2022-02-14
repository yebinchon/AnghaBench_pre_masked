
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 TYPE_1__* FUNC_3 (char const*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char const**,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const char **VAR_1, const char *VAR_2,
                const char *VAR_3, apr_pool_t *VAR_4)
{
  FUNC_0(FUNC_5(VAR_1,
                                  VAR_2 + FUNC_1(VAR_3),
                                  VAR_4));
  if (**VAR_1 == '\0')
    *VAR_1 = ((void*)0);
  else if (! FUNC_2(*VAR_1))
    {
      svn_stringbuf_t *VAR_5 = FUNC_3(*VAR_1, VAR_4);
      FUNC_4(VAR_5);
      *VAR_1 = (FUNC_2(VAR_5->data) ? VAR_5->data : ((void*)0));
    }

  return VAR_0;
}
