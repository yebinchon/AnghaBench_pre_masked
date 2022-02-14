
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table {int dummy; } ;
typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,struct hash_table*) ;
 int FUNC_5 (int ,int ,struct hash_table*) ;
 int FUNC_6 (int ,int ,struct hash_table*) ;

__attribute__((used)) static void
FUNC_7 (rtx VAR_4, struct hash_table *VAR_5, int VAR_6)
{
  rtx VAR_7 = FUNC_1 (VAR_4);
  int VAR_8;

  if (VAR_6)
    return;




  if (FUNC_0 (VAR_7) == VAR_3)
    FUNC_6 (VAR_7, VAR_4, VAR_5);
  else if (FUNC_0 (VAR_7) == VAR_2)
    for (VAR_8 = 0; VAR_8 < FUNC_3 (VAR_7, 0); VAR_8++)
      {
 rtx VAR_9 = FUNC_2 (VAR_7, 0, VAR_8);

 if (FUNC_0 (VAR_9) == VAR_3)
   FUNC_6 (VAR_9, VAR_4, VAR_5);
 else if (FUNC_0 (VAR_9) == VAR_1)
   FUNC_5 (VAR_9, VAR_4, VAR_5);
 else if (FUNC_0 (VAR_9) == VAR_0)
   FUNC_4 (VAR_9, VAR_4, VAR_5);
      }

  else if (FUNC_0 (VAR_7) == VAR_1)
    FUNC_5 (VAR_7, VAR_4, VAR_5);
  else if (FUNC_0 (VAR_7) == VAR_0)
    FUNC_4 (VAR_7, VAR_4, VAR_5);
}
