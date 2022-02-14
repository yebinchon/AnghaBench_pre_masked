
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkt {char li_vn_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

void
FUNC_1 (
 struct pkt *VAR_1,
 char VAR_2,
 char VAR_3,
 char VAR_4
 )
{
 if (VAR_2 > 3) {
  FUNC_0(VAR_0, "set_li_vn_mode: leap > 3, using max. 3");
  VAR_2 = 3;
 }

 if ((unsigned char)VAR_3 > 7) {
  FUNC_0(VAR_0, "set_li_vn_mode: version < 0 or > 7, using 4");
  VAR_3 = 4;
 }

 if (VAR_4 > 7) {
  FUNC_0(VAR_0, "set_li_vn_mode: mode > 7, using client mode 3");
  VAR_4 = 3;
 }

 VAR_1->li_vn_mode = VAR_2 << 6;
 VAR_1->li_vn_mode |= VAR_3 << 3;
 VAR_1->li_vn_mode |= VAR_4;
}
