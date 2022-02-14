
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct e6000sw_softc {int num_ports; scalar_t__ vlan_mode; int* vlans; int ports_mask; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct e6000sw_softc*,int) ;
 scalar_t__ FUNC_1 (struct e6000sw_softc*,int) ;
 int FUNC_2 (struct e6000sw_softc*,int,int ,int) ;
 int FUNC_3 (struct e6000sw_softc*,int ,int ) ;
 int FUNC_4 (struct e6000sw_softc*) ;
 int FUNC_5 (struct e6000sw_softc*,int ,int,int,int ,int ) ;
 int FUNC_6 (struct e6000sw_softc*,int ,int ,int) ;
 int FUNC_7 (int*) ;

__attribute__((used)) static int
FUNC_8(struct e6000sw_softc *VAR_10)
{
 int VAR_11, VAR_12, VAR_13;
 uint32_t VAR_14;


 for (VAR_12 = 0; VAR_12 < VAR_10->num_ports; VAR_12++) {
  VAR_13 = FUNC_3(VAR_10, FUNC_0(VAR_10, VAR_12), VAR_1);
  FUNC_6(VAR_10, FUNC_0(VAR_10, VAR_12), VAR_1,
      (VAR_13 & ~VAR_5));
 }


 FUNC_4(VAR_10);

 for (VAR_12 = 0; VAR_12 < VAR_10->num_ports; VAR_12++) {

  VAR_13 = FUNC_3(VAR_10, FUNC_0(VAR_10, VAR_12), VAR_1);
  VAR_13 &= ~(VAR_4 | VAR_6);
  FUNC_6(VAR_10, FUNC_0(VAR_10, VAR_12), VAR_1, VAR_13);


  VAR_13 = FUNC_3(VAR_10, FUNC_0(VAR_10, VAR_12), VAR_2);
  VAR_13 &= ~VAR_3;
  if (VAR_10->vlan_mode == VAR_0)
   VAR_13 |= VAR_3;
  FUNC_6(VAR_10, FUNC_0(VAR_10, VAR_12), VAR_2, VAR_13);
 }

 for (VAR_12 = 0; VAR_12 < VAR_10->num_ports; VAR_12++) {
  if (!FUNC_1(VAR_10, VAR_12))
   continue;

  VAR_13 = FUNC_3(VAR_10, FUNC_0(VAR_10, VAR_12), VAR_7);


  VAR_13 &= ~VAR_9;


  VAR_13 &= ~VAR_8;
  if (VAR_10->vlan_mode == VAR_0)
   VAR_13 |= 1;
  else
   VAR_13 |= (VAR_12 + 1);
  FUNC_6(VAR_10, FUNC_0(VAR_10, VAR_12), VAR_7, VAR_13);
 }


 for (VAR_12 = 0; VAR_12 < VAR_10->num_ports; VAR_12++) {
  VAR_14 = 0;
  if (FUNC_1(VAR_10, VAR_12)) {
   for (VAR_11 = 0; VAR_11 < VAR_10->num_ports; VAR_11++) {
    if (VAR_11 == VAR_12 || !FUNC_1(VAR_10, VAR_11))
     continue;
    VAR_14 |= (1 << VAR_11);
   }
  }

  FUNC_2(VAR_10, VAR_12, 0, VAR_14);
 }


 for (VAR_11 = 0; VAR_11 < FUNC_7(VAR_10->vlans); VAR_11++)
  VAR_10->vlans[VAR_11] = 0;


 if (VAR_10->vlan_mode == VAR_0) {
  VAR_10->vlans[0] = 1;
  FUNC_5(VAR_10, 0, VAR_10->vlans[0], 1, 0, VAR_10->ports_mask);
 }


 for (VAR_12 = 0; VAR_12 < VAR_10->num_ports; VAR_12++) {
  if (!FUNC_1(VAR_10, VAR_12))
   continue;
  VAR_13 = FUNC_3(VAR_10, FUNC_0(VAR_10, VAR_12), VAR_1);
  FUNC_6(VAR_10, FUNC_0(VAR_10, VAR_12), VAR_1,
      (VAR_13 | VAR_5));
 }

 return (0);
}
