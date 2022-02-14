
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_ctx {int local_zones; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ub_ctx*) ;

int FUNC_2(struct ub_ctx* VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) return VAR_2;

 FUNC_0(VAR_1->local_zones);

 return VAR_0;
}
