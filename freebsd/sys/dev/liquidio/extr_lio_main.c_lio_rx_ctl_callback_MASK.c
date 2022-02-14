
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct octeon_device {int dummy; } ;
struct lio_soft_command {scalar_t__ ctxptr; } ;
struct lio_rx_ctl_context {int cond; int octeon_id; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct octeon_device*,char*,int ) ;
 struct octeon_device* FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct octeon_device *VAR_0, uint32_t VAR_1, void *VAR_2)
{
 struct lio_soft_command *VAR_3 = (struct lio_soft_command *)VAR_2;
 struct lio_rx_ctl_context *VAR_4;

 VAR_4 = (struct lio_rx_ctl_context *)VAR_3->ctxptr;

 VAR_0 = FUNC_2(VAR_4->octeon_id);
 if (VAR_1)
  FUNC_1(VAR_0, "rx ctl instruction failed. Status: %llx\n",
       FUNC_0(VAR_1));
 VAR_4->cond = 1;





 FUNC_3();
}
