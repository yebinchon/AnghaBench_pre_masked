
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; char* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_boolean_t ;
typedef size_t apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (char) ;

svn_boolean_t
FUNC_1(svn_string_t *VAR_2, svn_string_t *VAR_3)
{
  apr_size_t VAR_4 = 0, VAR_5 = 0;



  if (VAR_2->len >= 2 &&
      VAR_2->data[VAR_4] == '*' &&
      VAR_2->data[VAR_4 + 1] == '.')
    {
      while (VAR_5 < VAR_3->len &&
             VAR_3->data[VAR_5] != '.')
        {
          VAR_5++;
        }




      if (VAR_5 == 0)
        return VAR_0;

      VAR_4++;
    }

  while (VAR_4 < VAR_2->len && VAR_5 < VAR_3->len)
    {
      char VAR_6 = VAR_2->data[VAR_4];
      char VAR_7 = VAR_3->data[VAR_5];
      VAR_6 = FUNC_0(VAR_6);
      VAR_7 = FUNC_0(VAR_7);

      if (VAR_6 != VAR_7)
        {

          return VAR_0;
        }
      else
        {

          VAR_4++;
          VAR_5++;
        }
    }






  if (VAR_4 == VAR_2->len &&
      VAR_5 == VAR_3->len - 1 &&
      VAR_3->data[VAR_5] == '.')
    VAR_5++;

  if (VAR_4 != VAR_2->len || VAR_5 != VAR_3->len)
    {

      return VAR_0;
    }

  return VAR_1;
}
