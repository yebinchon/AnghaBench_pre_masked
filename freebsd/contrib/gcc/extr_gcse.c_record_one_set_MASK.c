
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_set {struct reg_set* next; int bb_index; } ;
typedef int rtx ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct reg_set** FUNC_1 (struct reg_set**,int) ;
 int FUNC_2 (struct reg_set**,int ,int) ;
 struct reg_set* FUNC_3 (int *,int) ;
 int VAR_2 ;
 struct reg_set** VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4 (int VAR_5, rtx VAR_6)
{

  struct reg_set *VAR_7;


  if (VAR_5 >= VAR_4)
    {
      int VAR_8 = VAR_5 + VAR_0;

      VAR_3 = FUNC_1 (VAR_3,
    VAR_8 * sizeof (struct reg_set *));
      FUNC_2 (VAR_3 + VAR_4, 0,
       (VAR_8 - VAR_4) * sizeof (struct reg_set *));
      VAR_4 = VAR_8;
    }

  VAR_7 = FUNC_3 (&VAR_2, sizeof (struct reg_set));
  VAR_1 += sizeof (struct reg_set);
  VAR_7->bb_index = FUNC_0 (VAR_6);
  VAR_7->next = VAR_3[VAR_5];
  VAR_3[VAR_5] = VAR_7;
}
