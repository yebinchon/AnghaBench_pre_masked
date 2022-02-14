
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct lacp_port {int lp_media; } ;
struct lacp_aggregator {int la_nports; int la_ports; } ;


 int FUNC_0 (struct lacp_port*) ;
 struct lacp_port* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static uint64_t
FUNC_3(struct lacp_aggregator *VAR_0)
{
 struct lacp_port *VAR_1;
 uint64_t VAR_2;

 VAR_1 = FUNC_1(&VAR_0->la_ports);
 if (VAR_1 == ((void*)0)) {
  return (0);
 }

 VAR_2 = FUNC_2(VAR_1->lp_media);
 VAR_2 *= VAR_0->la_nports;
 if (VAR_2 == 0) {
  FUNC_0((VAR_1, "speed 0? media=0x%x nports=%d\n",
      VAR_1->lp_media, VAR_0->la_nports));
 }

 return (VAR_2);
}
