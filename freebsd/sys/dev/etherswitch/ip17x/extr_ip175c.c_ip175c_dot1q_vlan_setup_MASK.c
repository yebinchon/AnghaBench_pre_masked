
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlans ;
typedef int uint32_t ;
struct ip17x_vlan {int vlanid; int ports; } ;
struct ip17x_softc {int cpuport; int numports; int addtag; int striptag; int* pvid; int sc_dev; struct ip17x_vlan* vlan; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ,int,int,int,int ) ;
 scalar_t__ FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct ip17x_softc *VAR_4)
{
 struct ip17x_vlan *VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7[VAR_3];
 int VAR_8, VAR_9;

 FUNC_0(VAR_4->cpuport == 5, ("cpuport != 5 not supported for IP175C"));
 FUNC_0(VAR_4->numports == 6, ("numports != 6 not supported for IP175C"));


 VAR_6 = (VAR_4->addtag & ~(1 << VAR_2)) << 11;
 VAR_6 |= (VAR_4->striptag & ~(1 << VAR_2)) << 6;
 if (VAR_4->addtag & (1 << VAR_2))
  VAR_6 |= (1 << 1);
 if (VAR_4->striptag & (1 << VAR_2))
  VAR_6 |= (1 << 0);
 if (FUNC_2(VAR_4->sc_dev, 29, 23, VAR_6))
  return (-1);


 if (FUNC_1(VAR_4->sc_dev, 30, 9, 0x70, 0))
  return (-1);


 FUNC_3(VAR_7, 0, sizeof(VAR_7));
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_5 = &VAR_4->vlan[VAR_8];
  if ((VAR_5->vlanid & VAR_1) == 0)
   continue;
  VAR_7[VAR_5->vlanid & VAR_0] = VAR_5->ports;
 }

 for (VAR_9 = 0, VAR_8 = 1; VAR_8 <= VAR_3 / 2; VAR_8++) {
  VAR_6 = VAR_7[VAR_9++] & 0x3f;
  VAR_6 |= (VAR_7[VAR_9++] & 0x3f) << 8;
  if (FUNC_2(VAR_4->sc_dev, 30, VAR_8, VAR_6))
   return (-1);
 }


 for (VAR_8 = 0; VAR_8 < VAR_4->numports; VAR_8++) {
  if (VAR_8 == VAR_2) {
   if (FUNC_2(VAR_4->sc_dev, 29, 30, VAR_4->pvid[VAR_8]))
    return (-1);
  } else {
   if (FUNC_2(VAR_4->sc_dev, 29, 24 + VAR_8, VAR_4->pvid[VAR_8]))
    return (-1);
  }
 }

 return (0);
}
