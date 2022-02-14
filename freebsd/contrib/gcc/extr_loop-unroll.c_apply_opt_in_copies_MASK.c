
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct var_to_expand {scalar_t__ insn; } ;
struct opt_info {unsigned int first_new_block; scalar_t__ insns_to_split; int * loop_exit; scalar_t__ insns_with_var_to_expand; int * loop_preheader; } ;
struct iv_to_split {scalar_t__ insn; } ;
typedef scalar_t__ rtx ;
typedef TYPE_1__* basic_block ;
struct TYPE_9__ {scalar_t__ aux; } ;


 TYPE_1__* FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_7 (size_t,unsigned int,int) ;
 int FUNC_8 (struct var_to_expand*,scalar_t__) ;
 int FUNC_9 (int) ;
 TYPE_1__* FUNC_10 (TYPE_1__*) ;
 TYPE_1__* FUNC_11 (TYPE_1__*) ;
 struct var_to_expand* FUNC_12 (scalar_t__,struct var_to_expand*) ;
 int FUNC_13 (scalar_t__,int ,int *) ;
 int FUNC_14 (struct var_to_expand*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_15 (struct var_to_expand*,scalar_t__,unsigned int) ;

__attribute__((used)) static void
FUNC_16 (struct opt_info *VAR_4,
                     unsigned VAR_5, bool VAR_6,
                     bool VAR_7)
{
  unsigned VAR_8, VAR_9;
  basic_block VAR_10, VAR_11;
  rtx VAR_12, VAR_13, VAR_14;
  struct iv_to_split VAR_15, *VAR_16;
  struct var_to_expand VAR_17, *VAR_18;



  FUNC_9 (!VAR_6 || VAR_7);


  if (VAR_4->insns_to_split)
    FUNC_13 (VAR_4->insns_to_split, VAR_0, ((void*)0));

  for (VAR_8 = VAR_4->first_new_block; VAR_8 < (unsigned) VAR_3; VAR_8++)
    {
      VAR_10 = FUNC_0 (VAR_8);
      VAR_11 = FUNC_11 (VAR_10);



      VAR_9 = FUNC_7 ((size_t)VAR_10->aux, VAR_5,
     VAR_6);
      VAR_10->aux = 0;
      VAR_13 = FUNC_2 (VAR_11);
      for (VAR_12 = FUNC_2 (VAR_10); VAR_12 != FUNC_5 (FUNC_1 (VAR_10)); VAR_12 = VAR_14)
        {
          VAR_14 = FUNC_5 (VAR_12);
          if (!FUNC_4 (VAR_12))
            continue;

          while (!FUNC_4 (VAR_13))
            VAR_13 = FUNC_5 (VAR_13);

          VAR_15.insn = VAR_13;
          VAR_17.insn = VAR_13;


          if (VAR_4->insns_to_split)
            {
              VAR_16 = FUNC_12 (VAR_4->insns_to_split, &VAR_15);

              if (VAR_16)
                {
    FUNC_9 (FUNC_3 (FUNC_6 (VAR_12))
         == FUNC_3 (FUNC_6 (VAR_13)));

                  if (!VAR_9)
                    FUNC_14 (VAR_16, VAR_12);
                  FUNC_15 (VAR_16, VAR_12, VAR_9);
                }
            }

          if (VAR_6 && VAR_4->insns_with_var_to_expand)
            {
              VAR_18 = FUNC_12 (VAR_4->insns_with_var_to_expand, &VAR_17);
              if (VAR_18)
                {
    FUNC_9 (FUNC_3 (FUNC_6 (VAR_12))
         == FUNC_3 (FUNC_6 (VAR_13)));
                  FUNC_8 (VAR_18, VAR_12);
                }
            }
          VAR_13 = FUNC_5 (VAR_13);
        }
    }

  if (!VAR_7)
    return;



  if (VAR_4->insns_with_var_to_expand)
    {
      FUNC_13 (VAR_4->insns_with_var_to_expand,
                     VAR_2,
                     VAR_4->loop_preheader);
      FUNC_13 (VAR_4->insns_with_var_to_expand,
                     VAR_1,
                     VAR_4->loop_exit);
    }




  for (VAR_8 = VAR_4->first_new_block; VAR_8 < (unsigned) VAR_3; VAR_8++)
    {
      VAR_10 = FUNC_0 (VAR_8);
      VAR_11 = FUNC_11 (VAR_10);
      if (FUNC_10 (VAR_11) != VAR_10)
 continue;

      VAR_9 = FUNC_7 (0, VAR_5, VAR_6);
      for (VAR_13 = FUNC_2 (VAR_11);
           VAR_13 != FUNC_5 (FUNC_1 (VAR_10));
           VAR_13 = VAR_14)
        {
          VAR_14 = FUNC_5 (VAR_13);

          if (!FUNC_4 (VAR_13))
      continue;

          VAR_15.insn = VAR_13;
          if (VAR_4->insns_to_split)
            {
              VAR_16 = FUNC_12 (VAR_4->insns_to_split, &VAR_15);
              if (VAR_16)
                {
                  if (!VAR_9)
                    FUNC_14 (VAR_16, VAR_13);
                  FUNC_15 (VAR_16, VAR_13, VAR_9);
                  continue;
                }
            }

        }
    }
}
