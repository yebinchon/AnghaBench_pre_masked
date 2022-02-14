
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkt {int li_vn_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct pkt*,int ,int ,int ) ;

void
FUNC_3(void) {
 struct pkt VAR_3;
 VAR_3.li_vn_mode = FUNC_0(VAR_0,
          VAR_2,
          VAR_1);

 struct pkt VAR_4;
 FUNC_2(&VAR_4, VAR_0, VAR_2,
       VAR_1);

 FUNC_1(VAR_3.li_vn_mode, VAR_4.li_vn_mode);
}
