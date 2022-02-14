
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char const* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
struct TYPE_11__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int **,char*,int *,int *) ;
 TYPE_2__* FUNC_5 (int *,TYPE_1__**,char*,scalar_t__*,int *) ;
 TYPE_1__* FUNC_6 (char const*,int *) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static const char *
FUNC_8(apr_pool_t *VAR_1)
{
  svn_error_t *VAR_2;
  svn_stream_t *VAR_3;


  VAR_2 = FUNC_4(&VAR_3, "/etc/os-release", VAR_1, VAR_1);
  if (VAR_2 && FUNC_0(VAR_2->apr_err))
    {
      FUNC_2(VAR_2);
      VAR_2 = FUNC_4(&VAR_3, "/usr/lib/os-release", VAR_1,
                                     VAR_1);
    }
  if (VAR_2)
    {
      FUNC_2(VAR_2);
      return ((void*)0);
    }


  while (VAR_0)
    {
      svn_stringbuf_t *VAR_4;
      svn_boolean_t VAR_5;

      VAR_2 = FUNC_5(VAR_3, &VAR_4, "\n", &VAR_5, VAR_1);
      if (VAR_2)
        {
          FUNC_2(VAR_2);
          return ((void*)0);
        }

      if (!FUNC_1(VAR_4->data, "PRETTY_NAME=", 12))
        {
          svn_stringbuf_t *VAR_6;



          VAR_6 = FUNC_6(VAR_4->data + 12, VAR_1);
          FUNC_2(FUNC_3(VAR_3));
          FUNC_7(VAR_6);
          return VAR_6->data;
        }

      if (VAR_5)
        break;
    }


  FUNC_2(FUNC_3(VAR_3));
  return ((void*)0);
}
