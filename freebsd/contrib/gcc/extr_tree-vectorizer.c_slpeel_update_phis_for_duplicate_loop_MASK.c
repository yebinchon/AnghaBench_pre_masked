
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct loop {int header; TYPE_1__* single_exit; } ;
typedef TYPE_1__* edge ;
struct TYPE_6__ {int dest_idx; } ;


 scalar_t__ FUNC_0 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,TYPE_1__*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 TYPE_1__* FUNC_8 (struct loop*) ;
 TYPE_1__* FUNC_9 (struct loop*) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11 (struct loop *VAR_1,
           struct loop *VAR_2, bool VAR_3)
{
  tree VAR_4;
  tree VAR_5, VAR_6;
  tree VAR_7;
  edge VAR_8 = FUNC_8 (VAR_1);
  edge VAR_9 = FUNC_9 (VAR_1);
  edge VAR_10 = VAR_2->single_exit;
  edge VAR_11 = FUNC_9 (VAR_2);
  edge VAR_12 = (VAR_3 ? VAR_8 : VAR_9);
  for (VAR_5 = FUNC_10 (VAR_2->header),
       VAR_6 = FUNC_10 (VAR_1->header);
       VAR_5 && VAR_6;
       VAR_5 = FUNC_1 (VAR_5), VAR_6 = FUNC_1 (VAR_6))
    {

      VAR_7 = FUNC_0 (VAR_6, VAR_12);
      FUNC_5 (VAR_5, VAR_7, VAR_11);


      VAR_7 = FUNC_0 (VAR_6, VAR_8);
      if (FUNC_4 (VAR_7) != VAR_0)
        continue;

      VAR_4 = FUNC_7 (VAR_7);
      if (!VAR_4)
 {


   VAR_4 = FUNC_2 (VAR_5);
 }


      FUNC_5 (VAR_5, VAR_4, FUNC_8 (VAR_2));


      if (!VAR_3)
        {
          FUNC_6 (VAR_10 == VAR_9);
          FUNC_3 (VAR_6,
                           VAR_10->dest_idx,
                           VAR_4);
        }
    }
}
