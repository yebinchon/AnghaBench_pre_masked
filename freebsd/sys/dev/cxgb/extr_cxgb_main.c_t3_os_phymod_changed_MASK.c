
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* ifm_cur; } ;
struct TYPE_5__ {int modtype; } ;
struct port_info {int ifp; TYPE_1__ media; TYPE_2__ phy; } ;
struct adapter {struct port_info* port; } ;
struct TYPE_6__ {int ifm_data; } ;


 int FUNC_0 (char const**) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct port_info*) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_0 ;

void FUNC_4(struct adapter *VAR_1, int VAR_2)
{
 static const char *VAR_3[] = {
  ((void*)0), "SR", "LR", "LRM", "TWINAX", "TWINAX-L", "unknown"
 };
 struct port_info *VAR_4 = &VAR_1->port[VAR_2];
 int VAR_5 = VAR_4->phy.modtype;

 if (VAR_5 != VAR_4->media.ifm_cur->ifm_data)
  FUNC_2(VAR_4);

 if (VAR_5 == VAR_0)
  FUNC_3(VAR_4->ifp, "PHY module unplugged\n");
 else {
  FUNC_1(VAR_5 < FUNC_0(VAR_3),
   ("invalid PHY module type %d", VAR_5));
  FUNC_3(VAR_4->ifp, "%s PHY module inserted\n", VAR_3[VAR_5]);
 }
}
