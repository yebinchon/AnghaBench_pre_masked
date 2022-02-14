
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itbl_entry {int value; int name; struct itbl_entry* next; } ;
typedef scalar_t__ e_type ;
typedef scalar_t__ e_processor ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct itbl_entry** FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;

void
FUNC_4 (void)
{
  struct itbl_entry *VAR_7, **VAR_8;
  e_processor VAR_9;
  e_type VAR_10;

  if (!VAR_4)
    return;







  for (VAR_10 = VAR_3; VAR_10 < VAR_1; VAR_10++)
    for (VAR_9 = VAR_2; VAR_9 < VAR_0; VAR_9++)
      {
 VAR_8 = FUNC_1 (VAR_9, VAR_10);
 for (VAR_7 = *VAR_8; VAR_7; VAR_7 = VAR_7->next)
   {
     FUNC_3 (FUNC_2 (VAR_7->name, VAR_5,
      VAR_7->value, &VAR_6));
   }
      }
  FUNC_0 ();
}
