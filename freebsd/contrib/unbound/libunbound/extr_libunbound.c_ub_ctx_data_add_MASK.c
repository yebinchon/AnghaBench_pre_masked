
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_ctx {int local_zones; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (struct ub_ctx*) ;

int FUNC_2(struct ub_ctx* VAR_2, const char *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_2);
 if (VAR_4) return VAR_4;

 VAR_4 = FUNC_0(VAR_2->local_zones, VAR_3);
 return (!VAR_4) ? VAR_1 : VAR_0;
}
