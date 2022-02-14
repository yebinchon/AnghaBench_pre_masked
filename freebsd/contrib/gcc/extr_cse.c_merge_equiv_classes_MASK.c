
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_elt {int mode; scalar_t__ in_memory; struct table_elt* next_same_value; int exp; struct table_elt* first_same_value; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,int,int) ;
 scalar_t__ VAR_1 ;
 struct table_elt* FUNC_6 (int ,struct table_elt*,unsigned int,int) ;
 scalar_t__ FUNC_7 (int ,struct table_elt*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct table_elt*,unsigned int) ;
 int FUNC_10 (int ,unsigned int) ;

__attribute__((used)) static void
FUNC_11 (struct table_elt *VAR_2, struct table_elt *VAR_3)
{
  struct table_elt *VAR_4, *VAR_5, *VAR_6;


  VAR_2 = VAR_2->first_same_value;
  VAR_3 = VAR_3->first_same_value;


  if (VAR_2 == VAR_3)
    return;

  for (VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_5)
    {
      unsigned int VAR_7;
      rtx VAR_8 = VAR_4->exp;
      enum machine_mode VAR_9 = VAR_4->mode;

      VAR_5 = VAR_4->next_same_value;




      if (FUNC_3 (VAR_8) || FUNC_5 (VAR_8, VAR_8, 1, 0))
 {
   bool VAR_10 = 0;

   VAR_1 = 0;
   VAR_7 = FUNC_0 (VAR_8, VAR_9);

   if (FUNC_3 (VAR_8))
     {
       VAR_10 = FUNC_2 (FUNC_1 (VAR_8));
       FUNC_4 (FUNC_1 (VAR_8));
     }

   if (FUNC_3 (VAR_8) && FUNC_1 (VAR_8) >= VAR_0)
     FUNC_10 (VAR_8, VAR_7);
   else
     FUNC_9 (VAR_4, VAR_7);

   if (FUNC_7 (VAR_8, VAR_2, 0) || VAR_10)
     {
       FUNC_8 (VAR_8);
       VAR_7 = FUNC_0 (VAR_8, VAR_9);
     }
   VAR_6 = FUNC_6 (VAR_8, VAR_2, VAR_7, VAR_9);
   VAR_6->in_memory = VAR_1;
 }
    }
}
