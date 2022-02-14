
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* str; } ;
struct attr_hash {int hashcode; struct attr_hash* next; TYPE_1__ u; } ;


 int VAR_0 ;
 struct attr_hash** VAR_1 ;
 int VAR_2 ;
 struct attr_hash* FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1 (int VAR_3, char *VAR_4)
{
  struct attr_hash *VAR_5;

  VAR_5 = FUNC_0 (VAR_2, sizeof (struct attr_hash));
  VAR_5->hashcode = -VAR_3;
  VAR_5->u.str = VAR_4;
  VAR_5->next = VAR_1[VAR_3 % VAR_0];
  VAR_1[VAR_3 % VAR_0] = VAR_5;
}
