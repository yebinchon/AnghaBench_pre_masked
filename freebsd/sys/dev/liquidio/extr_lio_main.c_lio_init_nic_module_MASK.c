
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gmxport; } ;
struct octeon_device {int ifcount; TYPE_1__ props; } ;
struct lio_if_props {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct octeon_device*,char*) ;
 int FUNC_3 (struct octeon_device*,char*) ;
 int FUNC_4 (struct octeon_device*) ;
 int FUNC_5 (struct octeon_device*) ;

__attribute__((used)) static int
FUNC_6(struct octeon_device *VAR_0)
{
 int VAR_1 = FUNC_0(FUNC_4(VAR_0));
 int VAR_2 = 0;

 FUNC_2(VAR_0, "Initializing network interfaces\n");







 VAR_0->ifcount = VAR_1;

 FUNC_1(&VAR_0->props, sizeof(struct lio_if_props));

 VAR_0->props.gmxport = -1;

 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2) {
  FUNC_3(VAR_0, "Setup NIC devices failed\n");
  goto lio_init_failure;
 }

 FUNC_2(VAR_0, "Network interfaces ready\n");

 return (VAR_2);

lio_init_failure:

 VAR_0->ifcount = 0;

 return (VAR_2);
}
