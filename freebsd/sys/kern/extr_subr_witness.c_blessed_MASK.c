
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct witness_blessed {int b_lock1; int b_lock2; } ;
struct witness {int w_name; } ;


 struct witness_blessed* VAR_0 ;
 int FUNC_0 (struct witness_blessed*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct witness *VAR_1, struct witness *VAR_2)
{
 int VAR_3;
 struct witness_blessed *VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_4 = &VAR_0[VAR_3];
  if (FUNC_1(VAR_1->w_name, VAR_4->b_lock1) == 0) {
   if (FUNC_1(VAR_2->w_name, VAR_4->b_lock2) == 0)
    return (1);
   continue;
  }
  if (FUNC_1(VAR_1->w_name, VAR_4->b_lock2) == 0)
   if (FUNC_1(VAR_2->w_name, VAR_4->b_lock1) == 0)
    return (1);
 }
 return (0);
}
