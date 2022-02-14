
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct link {int b_ptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct link*) ;
 int FUNC_1 (int ,struct link*) ;
 scalar_t__ FUNC_2 (struct link*) ;

void FUNC_3(struct link *VAR_1)
{
 u32 VAR_2;

 if (FUNC_0(VAR_1->b_ptr, VAR_1))
  return;

 do {
  VAR_2 = FUNC_2(VAR_1);
 } while (!VAR_2);

 if (VAR_2 == VAR_0)
  FUNC_1(VAR_1->b_ptr, VAR_1);
}
