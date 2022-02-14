
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 TYPE_1__* FUNC_2 (char const*,int *) ;
 int FUNC_3 (char const**,char*,int *) ;
 int FUNC_4 (char const**,char*,char const*,int *) ;
 int FUNC_5 (char const**,int*,char const*,char*,int,int *,int ,int *) ;

svn_error_t *
FUNC_6(svn_string_t **VAR_2,
                            svn_boolean_t *VAR_3,
                            svn_boolean_t *VAR_4,
                            const svn_string_t *VAR_5,
                            const char *VAR_6,
                            svn_boolean_t VAR_7,
                            apr_pool_t *VAR_8,
                            apr_pool_t *VAR_9)
{
  const char *VAR_10;
  const char *VAR_11;

  if (VAR_5 == ((void*)0))
    {
      *VAR_2 = ((void*)0);
      return VAR_1;
    }

  if (VAR_6 && !FUNC_1(VAR_6, "UTF-8"))
    {
      VAR_10 = VAR_5->data;
    }
  else if (VAR_6)
    {
      FUNC_0(FUNC_4(&VAR_10, VAR_5->data,
                                          VAR_6, VAR_9));
    }
  else
    {
      FUNC_0(FUNC_3(&VAR_10, VAR_5->data, VAR_9));
    }

  if (VAR_3)
    *VAR_3 = (FUNC_1(VAR_5->data, VAR_10) != 0);

  FUNC_0(FUNC_5(&VAR_11,
                            VAR_4,
                            VAR_10,
                            "\n",
                            VAR_7,
                            ((void*)0),
                            VAR_0,
                            VAR_9));

  *VAR_2 = FUNC_2(VAR_11, VAR_8);
  return VAR_1;
}
