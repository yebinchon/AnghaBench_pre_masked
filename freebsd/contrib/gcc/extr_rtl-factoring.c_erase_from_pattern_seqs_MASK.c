
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef TYPE_1__* pattern_seq ;
typedef TYPE_2__* matching_seq ;
struct TYPE_7__ {scalar_t__ insn; int matching_length; int cost; struct TYPE_7__* next_matching_seq; } ;
struct TYPE_6__ {scalar_t__ insn; struct TYPE_6__* next_pattern_seq; scalar_t__ gain; TYPE_2__* matching_seqs; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4 (rtx VAR_2, int VAR_3)
{
  pattern_seq *VAR_4;
  matching_seq *VAR_5;
  rtx VAR_6;
  int VAR_7, VAR_8;
  int VAR_9, VAR_10;

  while (VAR_3 > 0)
    {
      for (VAR_4 = &VAR_0; *VAR_4;)
        {
          VAR_7 = 0;
          VAR_9 = 0;
          for (VAR_6 = (*VAR_4)->insn; VAR_6 && (VAR_6 != VAR_2);
               VAR_6 = FUNC_3 (VAR_6))
            {
              VAR_7++;
              VAR_9 += FUNC_0 (VAR_6);
            }

          if (VAR_9 <= VAR_1)
            {
              pattern_seq VAR_11 = *VAR_4;
              *VAR_4 = VAR_11->next_pattern_seq;
              FUNC_2 (VAR_11);
            }
          else
            {
              for (VAR_5 = &(*VAR_4)->matching_seqs; *VAR_5;)
                {
                  VAR_8 = 0;
                  VAR_10 = 0;
                  for (VAR_6 = (*VAR_5)->insn;
                       VAR_6 && (VAR_6 != VAR_2) && (VAR_8 < VAR_7)
                       && (VAR_8 < (*VAR_5)->matching_length);
                       VAR_6 = FUNC_3 (VAR_6))
                    {
                      VAR_8++;
                      VAR_10 += FUNC_0 (VAR_6);
                    }

                  if (VAR_10 <= VAR_1)
                    {
                      matching_seq VAR_12 = *VAR_5;
                      *VAR_5 = VAR_12->next_matching_seq;
                      FUNC_1 (VAR_12);

                      (*VAR_4)->gain = 0;
                    }
                  else
                    {
                      if (VAR_8 < (*VAR_5)->matching_length)
                        {
                          (*VAR_5)->cost = VAR_10;
                          (*VAR_5)->matching_length = VAR_8;

                          (*VAR_4)->gain = 0;
                        }
                      VAR_5 = &(*VAR_5)->next_matching_seq;
                    }
                }

              VAR_4 = &(*VAR_4)->next_pattern_seq;
            }
        }

      VAR_3--;
      VAR_2 = FUNC_3 (VAR_2);
    }
}
