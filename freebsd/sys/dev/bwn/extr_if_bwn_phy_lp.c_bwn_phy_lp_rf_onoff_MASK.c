
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rev; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_mac*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;

void
FUNC_2(struct bwn_mac *VAR_5, int VAR_6)
{

 if (VAR_6) {
  FUNC_0(VAR_5, VAR_1, 0xe0ff);
  FUNC_0(VAR_5, VAR_2,
      (VAR_5->mac_phy.rev >= 2) ? 0xf7f7 : 0xffe7);
  return;
 }

 if (VAR_5->mac_phy.rev >= 2) {
  FUNC_0(VAR_5, VAR_4, 0x83ff);
  FUNC_1(VAR_5, VAR_1, 0x1f00);
  FUNC_0(VAR_5, VAR_0, 0x80ff);
  FUNC_0(VAR_5, VAR_3, 0xdfff);
  FUNC_1(VAR_5, VAR_2, 0x0808);
  return;
 }

 FUNC_0(VAR_5, VAR_4, 0xe0ff);
 FUNC_1(VAR_5, VAR_1, 0x1f00);
 FUNC_0(VAR_5, VAR_3, 0xfcff);
 FUNC_1(VAR_5, VAR_2, 0x0018);
}
