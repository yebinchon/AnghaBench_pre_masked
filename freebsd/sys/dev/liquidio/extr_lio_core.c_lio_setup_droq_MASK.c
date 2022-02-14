
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_device {TYPE_1__** droq; } ;
struct TYPE_2__ {int max_count; int pkts_credit_reg; } ;


 int FUNC_0 (struct octeon_device*,int,int,int,void*) ;
 int FUNC_1 (struct octeon_device*,char*,int) ;
 int FUNC_2 (struct octeon_device*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct octeon_device *VAR_0, int VAR_1, int VAR_2,
        int VAR_3, void *VAR_4)
{
 int VAR_5 = 0;

 FUNC_1(VAR_0, "Creating Droq: %d\n", VAR_1);

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0)
  return (VAR_5);

 if (VAR_5 == 1) {
  FUNC_1(VAR_0, "Using default droq %d\n", VAR_1);
  return (0);
 }





 FUNC_2(VAR_0, VAR_0->droq[VAR_1]->pkts_credit_reg,
   VAR_0->droq[VAR_1]->max_count);

 return (VAR_5);
}
