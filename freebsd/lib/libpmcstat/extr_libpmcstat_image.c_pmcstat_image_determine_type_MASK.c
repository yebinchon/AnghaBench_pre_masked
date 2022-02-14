
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcstat_image {scalar_t__ pi_type; } ;
struct pmcstat_args {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pmcstat_image*,struct pmcstat_args*) ;
 int FUNC_2 (struct pmcstat_image*,struct pmcstat_args*) ;

void
FUNC_3(struct pmcstat_image *VAR_2,
    struct pmcstat_args *VAR_3)
{
 FUNC_0(VAR_2->pi_type == VAR_1);


 if (VAR_2->pi_type == VAR_1)
  FUNC_2(VAR_2, VAR_3);
 if (VAR_2->pi_type == VAR_1)
  FUNC_1(VAR_2, VAR_3);





 if (VAR_2->pi_type == VAR_1)
  VAR_2->pi_type = VAR_0;
}
