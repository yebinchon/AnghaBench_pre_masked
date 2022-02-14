
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_boolean_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *,int ) ;

__attribute__((used)) static svn_boolean_t
FUNC_1(const char **VAR_3,
                    apr_hash_t *VAR_4,
                    const char *VAR_5,
                    svn_boolean_t VAR_6)
{
  svn_string_t *VAR_7;
  VAR_7 = FUNC_0(VAR_4, VAR_1);
  if (VAR_7 && VAR_7->data)
    {
      *VAR_3 = VAR_7->data;
      return VAR_2;
    }
  return VAR_0;
}
