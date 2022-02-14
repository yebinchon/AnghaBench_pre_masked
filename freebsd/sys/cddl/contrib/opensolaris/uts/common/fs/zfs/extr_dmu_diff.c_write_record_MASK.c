
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ddr_type; } ;
struct diffarg {int da_err; int* da_offp; TYPE_1__ da_ddr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct diffarg*) ;

__attribute__((used)) static int
FUNC_1(struct diffarg *VAR_1)
{

 if (VAR_1->da_ddr.ddr_type == VAR_0) {
  VAR_1->da_err = 0;
  return (0);
 }

 VAR_1->da_err = FUNC_0(VAR_1);
 *VAR_1->da_offp += sizeof (VAR_1->da_ddr);
 return (VAR_1->da_err);
}
