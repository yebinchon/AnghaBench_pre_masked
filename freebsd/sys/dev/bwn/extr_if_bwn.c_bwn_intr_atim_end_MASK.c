
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_mac {int mac_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bwn_mac*,int ) ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct bwn_mac *VAR_3)
{

 if (VAR_3->mac_flags & VAR_2) {
  FUNC_1(VAR_3, VAR_0,
      FUNC_0(VAR_3, VAR_0) | VAR_1);
  VAR_3->mac_flags &= ~VAR_2;
 }
}
