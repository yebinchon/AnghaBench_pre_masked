
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fn_zone {int fz_divisor; struct fn_zone* fz_next; } ;
struct fn_hash {struct fn_zone* fn_zone_list; } ;
struct fib_table {scalar_t__ tb_data; } ;


 scalar_t__ FUNC_0 (struct fn_zone*,int) ;

__attribute__((used)) static int FUNC_1(struct fib_table *VAR_0)
{
 struct fn_hash *VAR_1 = (struct fn_hash *) VAR_0->tb_data;
 struct fn_zone *VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = VAR_1->fn_zone_list; VAR_2; VAR_2 = VAR_2->fz_next) {
  int VAR_4;

  for (VAR_4 = VAR_2->fz_divisor - 1; VAR_4 >= 0; VAR_4--)
   VAR_3 += FUNC_0(VAR_2, VAR_4);
 }
 return VAR_3;
}
