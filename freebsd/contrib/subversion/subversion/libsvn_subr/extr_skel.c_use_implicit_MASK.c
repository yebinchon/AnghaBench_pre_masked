
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; scalar_t__* data; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int svn_boolean_t ;
typedef size_t apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static svn_boolean_t
FUNC_0(const svn_skel_t *VAR_6)
{

  if (VAR_6->len == 0
      || VAR_6->len >= 100)
    return VAR_0;



  if (VAR_2[(unsigned char) VAR_6->data[0]] != VAR_3)
    return VAR_0;



  {
    apr_size_t VAR_7;

    for (VAR_7 = 1; VAR_7 < VAR_6->len; VAR_7++)
      if (VAR_2[(unsigned char) VAR_6->data[VAR_7]] == VAR_5
          || VAR_2[(unsigned char) VAR_6->data[VAR_7]] == VAR_4)
        return VAR_0;
  }



  return VAR_1;
}
