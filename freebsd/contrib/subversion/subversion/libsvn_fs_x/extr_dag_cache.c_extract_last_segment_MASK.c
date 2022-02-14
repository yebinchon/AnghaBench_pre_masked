
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_4__ {scalar_t__ len; char* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static svn_boolean_t
FUNC_2(const svn_string_t *VAR_2,
                     svn_string_t *VAR_3,
                     svn_stringbuf_t *VAR_4)
{
  const char *VAR_5;
  const char *VAR_6;


  if (VAR_2->len == 0)
    return VAR_0;



  VAR_5 = VAR_2->data + VAR_2->len - 1;
  while (*VAR_5 != '/' && VAR_5 != VAR_2->data)
    --VAR_5;


  if (VAR_5 == VAR_2->data)
    {

      VAR_3->data = "";
      VAR_3->len = 0;

      FUNC_1(VAR_4);
      FUNC_0(VAR_4, VAR_2->data, VAR_2->len);

      return VAR_1;
    }


  VAR_6 = VAR_5;
  while (VAR_6[-1] == '/')
    --VAR_6;


  VAR_3->data = VAR_2->data;
  VAR_3->len = VAR_6 - VAR_2->data;

  ++VAR_5;
  FUNC_1(VAR_4);
  FUNC_0(VAR_4, VAR_5,
                            VAR_2->len - (VAR_5 - VAR_2->data));

  return VAR_1;
}
