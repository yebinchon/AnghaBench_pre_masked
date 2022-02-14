
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ modified_start; scalar_t__ modified_length; scalar_t__ original_length; scalar_t__ type; struct TYPE_4__* next; } ;
typedef TYPE_1__ svn_diff_t ;
typedef scalar_t__ apr_off_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(svn_diff_t *VAR_2, svn_diff_t *VAR_3)
{
  svn_diff_t *VAR_4;
  apr_off_t VAR_5;
  apr_off_t VAR_6;
  apr_off_t VAR_7;

  for (; VAR_3; VAR_3 = VAR_3->next)
    {
      VAR_5 = VAR_3->modified_start;
      VAR_6 = VAR_5 + VAR_3->modified_length;
      VAR_7 = VAR_3->original_length - VAR_3->modified_length;


      if (VAR_7 == 0)
        continue;

      for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next)
        {



          if (VAR_4->modified_start >= VAR_6)
            {
              VAR_4->modified_start += VAR_7;
              continue;
            }




          if (VAR_4->modified_start + VAR_4->modified_length <= VAR_5)
            continue;





          if (VAR_4->type == VAR_1)
            {
              VAR_4->modified_length += VAR_7;
              continue;
            }





          if (VAR_7 < 0)
              VAR_4->type = VAR_0;


          VAR_4->modified_length -= VAR_7;
        }
    }
}
