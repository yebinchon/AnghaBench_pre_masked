
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct octeon_intrmod_cfg {int dummy; } ;
struct TYPE_2__ {struct ifnet* ifp; } ;
struct octeon_device {TYPE_1__ props; } ;
struct lio_soft_command {scalar_t__ virtrptr; } ;
struct lio_intrmod_resp {int intrmod; } ;
struct lio {int intrmod_cfg; } ;
struct ifnet {int dummy; } ;


 struct lio* FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct octeon_device*,char*) ;
 int FUNC_2 (struct octeon_device*,struct lio_soft_command*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_5(struct octeon_device *VAR_0, uint32_t VAR_1,
    void *VAR_2)
{
 struct lio_soft_command *VAR_3 = (struct lio_soft_command *)VAR_2;
 struct ifnet *VAR_4 = VAR_0->props.ifp;
 struct lio *VAR_5 = FUNC_0(VAR_4);
 struct lio_intrmod_resp *VAR_6;

 if (VAR_1) {
  FUNC_1(VAR_0, "Failed to get intrmod\n");
 } else {
  VAR_6 = (struct lio_intrmod_resp *)VAR_3->virtrptr;
  FUNC_3((uint64_t *)&VAR_6->intrmod,
     (sizeof(struct octeon_intrmod_cfg)) / 8);
  FUNC_4(&VAR_5->intrmod_cfg, &VAR_6->intrmod,
         sizeof(struct octeon_intrmod_cfg));
 }

 FUNC_2(VAR_0, VAR_3);
}
