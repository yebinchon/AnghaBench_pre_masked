
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* pattern_seq ;
struct TYPE_5__ {int gain; struct TYPE_5__* next_pattern_seq; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  pattern_seq *VAR_1;
  int VAR_2;

  VAR_2 = 0;
  for (VAR_1 = &VAR_0; *VAR_1;)
    {
      if ((*VAR_1)->gain <= 0)
        FUNC_1 (*VAR_1);

      if ((*VAR_1)->gain > 0)
        {
          if ((*VAR_1)->gain > VAR_2)
            {
              pattern_seq VAR_3 = *VAR_1;
              (*VAR_1) = VAR_3->next_pattern_seq;
              VAR_3->next_pattern_seq = VAR_0;
              VAR_0 = VAR_3;
              VAR_2 = VAR_0->gain;
            }
          else
            {
              VAR_1 = &(*VAR_1)->next_pattern_seq;
            }
        }
      else
        {
          pattern_seq VAR_4 = *VAR_1;
          *VAR_1 = VAR_4->next_pattern_seq;
          FUNC_0 (VAR_4);
        }
    }
}
