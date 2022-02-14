
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ip17x_vlan {int ports; } ;
struct TYPE_2__ {int es_nports; } ;
struct ip17x_softc {int cpuport; int numports; int* portphy; int sc_dev; struct ip17x_vlan* vlan; TYPE_1__ info; } ;
typedef int reg ;
typedef int ports ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int,int,int,int) ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct ip17x_softc *VAR_1)
{
 struct ip17x_vlan *VAR_2;
 uint32_t VAR_3[VAR_0], VAR_4[VAR_0/2];
 int VAR_5, VAR_6, VAR_7;

 FUNC_0(VAR_1->cpuport == 5, ("cpuport != 5 not supported for IP175C"));
 FUNC_0(VAR_1->numports == 6, ("numports != 6 not supported for IP175C"));


 FUNC_3(VAR_3, 0, sizeof(VAR_3));
 for (VAR_5 = 0; VAR_5 < VAR_1->info.es_nports; VAR_5++) {
  VAR_7 = VAR_1->portphy[VAR_5];
  VAR_2 = &VAR_1->vlan[VAR_5];
  VAR_3[VAR_7] = VAR_2->ports;
 }


 for (VAR_5 = 0; VAR_5 < VAR_1->numports; VAR_5++) {
  if (VAR_3[VAR_5] & (1 << VAR_1->cpuport)) {
   VAR_3[VAR_5] |= (1 << 7);
   VAR_3[VAR_5] &= ~(1 << VAR_1->cpuport);
  }
 }


 FUNC_3(VAR_4, 0, sizeof(VAR_4));
 for (VAR_5 = 0; VAR_5 < (VAR_1->numports / 2); VAR_5++)
  VAR_4[VAR_5] = VAR_3[VAR_5 * 2] << 8 | VAR_3[VAR_5 * 2 + 1];


 VAR_6 = FUNC_2(VAR_1->sc_dev, 29, 19, VAR_4[0]);
 if (VAR_6 == 0)
  VAR_6 = FUNC_2(VAR_1->sc_dev, 29, 20, VAR_4[1]);
 if (VAR_6 == 0)
  VAR_6 = FUNC_1(VAR_1->sc_dev, 29, 21, 0xff00, VAR_4[2]);
 if (VAR_6 == 0)
  VAR_6 = FUNC_1(VAR_1->sc_dev, 30, 18, 0x00ff, VAR_4[2]);
 return (VAR_6);
}
