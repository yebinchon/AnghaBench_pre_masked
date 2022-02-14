
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef TYPE_1__* pattern_seq ;
typedef TYPE_1__* matching_seq ;
struct TYPE_5__ {int abstracted_length; int gain; int matching_length; scalar_t__ cost; scalar_t__ insn; int link_reg; struct TYPE_5__* next_matching_seq; struct TYPE_5__* matching_seqs; scalar_t__ idx; } ;
typedef int HARD_REG_SET ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int VAR_5 ;
 int FUNC_7 (int ,int ,int ) ;
 scalar_t__* VAR_6 ;
 int FUNC_8 (int *,scalar_t__,int) ;
 scalar_t__* VAR_7 ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int,int ,int ,int ) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,int ) ;
 int * VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void
FUNC_13 (pattern_seq VAR_12)
{
  matching_seq VAR_13;
  rtx VAR_14;
  int VAR_15;
  int VAR_16;
  HARD_REG_SET VAR_17;


  FUNC_5 (VAR_17);
  VAR_12->link_reg = VAR_2;
  VAR_12->abstracted_length = 0;

  VAR_12->gain = -(VAR_9 - VAR_10 + VAR_11);





  for (VAR_13 = VAR_12->matching_seqs; VAR_13; VAR_13 = VAR_13->next_matching_seq)
    {

      if (VAR_13->next_matching_seq)
        VAR_13->abstracted_length = (int)(VAR_13->next_matching_seq->idx -
                                        VAR_13->idx);
      else
        VAR_13->abstracted_length = VAR_13->matching_length;

      if (VAR_13->abstracted_length > VAR_13->matching_length)
        VAR_13->abstracted_length = VAR_13->matching_length;


      FUNC_2 (VAR_13);




      if (VAR_13->cost > VAR_9)
        {
          FUNC_8 (&VAR_17, VAR_13->insn,
                                  VAR_13->abstracted_length);
          if (VAR_13->abstracted_length > VAR_12->abstracted_length)
            VAR_12->abstracted_length = VAR_13->abstracted_length;
        }
    }



  for (VAR_13 = VAR_12->matching_seqs; VAR_13; VAR_13 = VAR_13->next_matching_seq)
    {
      VAR_14 = VAR_12->insn;
      for (VAR_15 = 0; (VAR_15 < VAR_12->abstracted_length) && (VAR_14 != VAR_13->insn); VAR_15++)
        VAR_14 = FUNC_11 (VAR_14);
      VAR_12->abstracted_length = VAR_15;
    }


  FUNC_2 (VAR_12);


  if (VAR_12->cost <= VAR_9)
  {
    VAR_12->gain = -1;
    return;
  }


  for (VAR_13 = VAR_12->matching_seqs; VAR_13; VAR_13 = VAR_13->next_matching_seq)
    {
      if (VAR_13->abstracted_length > VAR_12->abstracted_length)
        {
          VAR_13->abstracted_length = VAR_12->abstracted_length;
          FUNC_2 (VAR_13);
        }

      if (VAR_13->cost > VAR_9)
        VAR_12->gain += VAR_13->cost - VAR_9;
    }


  if (VAR_12->gain <= 0)
    return;



  FUNC_8 (&VAR_17, VAR_12->insn, VAR_12->abstracted_length);


  VAR_16 = 0;
  VAR_14 = VAR_12->insn;
  for (VAR_15 = 0; VAR_15 < VAR_12->abstracted_length; VAR_15++)
    {
      if (FUNC_0 (VAR_14))
        {
          VAR_16 = 1;
          break;
        }
      VAR_14 = FUNC_11 (VAR_14);
    }
  for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++)
    if (VAR_7[VAR_15]



        || (!FUNC_10 (VAR_15, VAR_3, VAR_1, VAR_4))
        || (!FUNC_12 (FUNC_4 (VAR_15),
     FUNC_7 (VAR_5, VAR_1, VAR_4)))

        || (VAR_16 && VAR_6[VAR_15])
        || (!VAR_6[VAR_15] && !VAR_8[VAR_15]))
      FUNC_1 (VAR_17, VAR_15);


  for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++)
    if (FUNC_6 (VAR_17, VAR_15))
      {
        VAR_12->link_reg = FUNC_9 (VAR_3, VAR_15);
        break;
      }



  if (!VAR_12->link_reg)
    VAR_12->gain = 0;
}
