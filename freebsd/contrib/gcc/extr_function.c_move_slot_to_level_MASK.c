
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temp_slot {int level; } ;


 int FUNC_0 (struct temp_slot*,int ) ;
 int FUNC_1 (struct temp_slot*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3 (struct temp_slot *VAR_0, int VAR_1)
{
  FUNC_0 (VAR_0, FUNC_2 (VAR_0->level));
  FUNC_1 (VAR_0, FUNC_2 (VAR_1));
  VAR_0->level = VAR_1;
}
