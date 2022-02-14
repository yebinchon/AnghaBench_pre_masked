
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savexmm {int dummy; } ;
struct save87 {int dummy; } ;


 int FUNC_0 (struct save87*,int) ;
 int FUNC_1 (struct savexmm*,struct save87*) ;

void
FUNC_2(struct savexmm *VAR_0, struct save87 *VAR_1)
{

 FUNC_0(VAR_1, sizeof(*VAR_1));
 FUNC_1(VAR_0, VAR_1);
}
