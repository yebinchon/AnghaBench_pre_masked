
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_mac {scalar_t__ mac_status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bwn_mac*,int,int ) ;
 scalar_t__ FUNC_1 (struct bwn_mac*) ;
 int FUNC_2 (struct bwn_mac*) ;
 int FUNC_3 (struct bwn_mac*) ;

__attribute__((used)) static void FUNC_4(struct bwn_mac *VAR_2)
{
 FUNC_3(VAR_2);
 if (VAR_2->mac_status < VAR_1) {

  FUNC_0(VAR_2, 0, 0);
 } else {
  bool VAR_3 = FUNC_1(VAR_2) == VAR_0;
  FUNC_0(VAR_2, VAR_3, 0);
 }
 FUNC_2(VAR_2);
}
