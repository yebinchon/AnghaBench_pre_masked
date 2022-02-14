
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int port ;
typedef int phandle_t ;
struct TYPE_5__ {int num_ports; int fixed_mask; int dev; } ;
typedef TYPE_1__ e6000sw_softc_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,void*,int) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_4(e6000sw_softc_t *VAR_1, phandle_t VAR_2, int *VAR_3)
{
 uint32_t VAR_4;

 if (VAR_3 == ((void*)0))
  return (VAR_0);

 if (FUNC_0(VAR_2, "reg", (void *)&VAR_4, sizeof(VAR_4)) < 0)
  return (VAR_0);
 if (VAR_4 >= VAR_1->num_ports)
  return (VAR_0);
 *VAR_3 = VAR_4;

 if (FUNC_3(VAR_1, VAR_2, VAR_4) != 0)
  return (VAR_0);

 if (FUNC_2(VAR_1, VAR_2, VAR_4) != 0)
  return (VAR_0);

 if ((VAR_1->fixed_mask & (1 << VAR_4)) != 0)
  FUNC_1(VAR_1->dev, "fixed port at %d\n", VAR_4);
 else
  FUNC_1(VAR_1->dev, "PHY at port %d\n", VAR_4);

 return (0);
}
