
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ip17x_vlan {int vlanid; int ports; } ;
struct ip17x_softc {scalar_t__ vlan_mode; int addtag; int striptag; int numports; int* pvid; int sc_dev; struct ip17x_vlan* vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_1(struct ip17x_softc *VAR_4)
{
 struct ip17x_vlan *VAR_5;
 uint32_t VAR_6[VAR_2];
 uint32_t VAR_7[VAR_2];
 uint32_t VAR_8[VAR_2];
 uint32_t VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {

  VAR_6[VAR_10] = 0;
  VAR_7[VAR_10] = 0;
  VAR_8[VAR_10] = 0;

  VAR_5 = &VAR_4->vlan[VAR_10];
  if ((VAR_5->vlanid & VAR_1) == 0 ||
      VAR_4->vlan_mode == 0) {

   FUNC_0(VAR_4->sc_dev, 22, 14 + VAR_10, VAR_10 + 1);
   VAR_6[VAR_10] = 0x3f;
   continue;
  }

  VAR_9 |= (1 << VAR_10);
  VAR_6[VAR_10] = VAR_5->ports;


  FUNC_0(VAR_4->sc_dev, 22, 14 + VAR_10,
      VAR_5->vlanid & VAR_0);

  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
   if ((VAR_6[VAR_10] & (1 << VAR_11)) == 0)
    continue;
   if (VAR_4->addtag & (1 << VAR_11))
    VAR_7[VAR_10] |= (1 << VAR_11);
   if (VAR_4->striptag & (1 << VAR_11))
    VAR_8[VAR_10] |= (1 << VAR_11);
  }
 }


 for (VAR_10 = 0; VAR_10 < VAR_2 / 2; VAR_10++) {
  FUNC_0(VAR_4->sc_dev, 23, VAR_10,
      VAR_6[2 * VAR_10] | (VAR_6[2 * VAR_10 + 1] << 8));
  FUNC_0(VAR_4->sc_dev, 23, VAR_10 + 8,
      VAR_7[2 * VAR_10] | (VAR_7[2 * VAR_10 + 1] << 8));
  FUNC_0(VAR_4->sc_dev, 23, VAR_10 + 16,
      VAR_8[2 * VAR_10] | (VAR_8[2 * VAR_10 + 1] << 8));
 }


 FUNC_0(VAR_4->sc_dev, 22, 10, VAR_9);


 for (VAR_10 = 0; VAR_10 < VAR_4->numports; VAR_10++)
  FUNC_0(VAR_4->sc_dev, 22, 4 + VAR_10, VAR_4->pvid[VAR_10]);

 return (0);
}
