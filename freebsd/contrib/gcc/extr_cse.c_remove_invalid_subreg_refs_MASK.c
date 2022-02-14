
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_elt {int exp; struct table_elt* next_same_hash; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (unsigned int,unsigned int,int ,int *) ;
 int FUNC_8 (struct table_elt*,unsigned int) ;
 struct table_elt** VAR_2 ;

__attribute__((used)) static void
FUNC_9 (unsigned int VAR_3, unsigned int VAR_4,
       enum machine_mode VAR_5)
{
  unsigned int VAR_6;
  struct table_elt *VAR_7, *VAR_8;
  unsigned int VAR_9 = VAR_4 + (FUNC_2 (VAR_5) - 1);

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    for (VAR_7 = VAR_2[VAR_6]; VAR_7; VAR_7 = VAR_8)
      {
 rtx VAR_10 = VAR_7->exp;
 VAR_8 = VAR_7->next_same_hash;

 if (!FUNC_4 (VAR_10)
     && (FUNC_0 (VAR_10) != VAR_1
  || !FUNC_4 (FUNC_6 (VAR_10))
  || FUNC_3 (FUNC_6 (VAR_10)) != VAR_3
  || (((FUNC_5 (VAR_10)
        + (FUNC_2 (FUNC_1 (VAR_10)) - 1)) >= VAR_4)
      && FUNC_5 (VAR_10) <= VAR_9))
     && FUNC_7 (VAR_3, VAR_3 + 1, VAR_7->exp, (rtx *) 0))
   FUNC_8 (VAR_7, VAR_6);
      }
}
