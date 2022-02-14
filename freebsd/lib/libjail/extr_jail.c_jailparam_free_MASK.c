
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jailparam {int jp_flags; int jp_value; int jp_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void
FUNC_1(struct jailparam *VAR_1, unsigned VAR_2)
{
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  FUNC_0(VAR_1[VAR_3].jp_name);
  if (!(VAR_1[VAR_3].jp_flags & VAR_0))
   FUNC_0(VAR_1[VAR_3].jp_value);
 }
}
