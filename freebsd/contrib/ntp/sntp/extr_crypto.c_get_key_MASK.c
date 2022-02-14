
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int key_id; struct key* next; } ;


 scalar_t__ VAR_0 ;
 struct key* VAR_1 ;

void
FUNC_0(
 int VAR_2,
 struct key **VAR_3
 )
{
 struct key *VAR_4;

 if (VAR_0 == 0)
  return;
 for (VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_4->key_id == VAR_2) {
   *VAR_3 = VAR_4;
   break;
  }
 }
 return;
}
