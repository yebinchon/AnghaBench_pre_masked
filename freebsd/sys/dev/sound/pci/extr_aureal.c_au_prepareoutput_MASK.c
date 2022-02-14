
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct au_info {int dummy; } ;
struct au_chinfo {int buffer; struct au_info* parent; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct au_info*,int,int,int) ;
 int FUNC_3 (struct au_info*,int ,int,int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct au_chinfo *VAR_0, u_int32_t VAR_1)
{
 struct au_info *VAR_2 = VAR_0->parent;
 int VAR_3, VAR_4 = (FUNC_0(VAR_1) > 1)? 1 : 0;
 u_int32_t VAR_5 = FUNC_4(VAR_0->buffer);

 FUNC_3(VAR_2, 0, 0x1061c, 0, 4);
 FUNC_3(VAR_2, 0, 0x10620, 0, 4);
 FUNC_3(VAR_2, 0, 0x10624, 0, 4);
 switch(FUNC_1(VAR_1)) {
  case 1:
   VAR_3=0xb000;
   break;
  case 2:
   VAR_3=0xf000;
   break;
   case 8:
   VAR_3=0x7000;
   break;
  case 16:
   VAR_3=0x23000;
   break;
  default:
   VAR_3=0x3000;
 }
 FUNC_3(VAR_2, 0, 0x10200, VAR_5, 4);
 FUNC_3(VAR_2, 0, 0x10204, VAR_5+0x1000, 4);
 FUNC_3(VAR_2, 0, 0x10208, VAR_5+0x2000, 4);
 FUNC_3(VAR_2, 0, 0x1020c, VAR_5+0x3000, 4);

 FUNC_3(VAR_2, 0, 0x10400, 0xdeffffff, 4);
 FUNC_3(VAR_2, 0, 0x10404, 0xfcffffff, 4);

 FUNC_3(VAR_2, 0, 0x10580, VAR_3, 4);

 FUNC_3(VAR_2, 0, 0x10210, VAR_5, 4);
 FUNC_3(VAR_2, 0, 0x10214, VAR_5+0x1000, 4);
 FUNC_3(VAR_2, 0, 0x10218, VAR_5+0x2000, 4);
 FUNC_3(VAR_2, 0, 0x1021c, VAR_5+0x3000, 4);

 FUNC_3(VAR_2, 0, 0x10408, 0x00fff000 | 0x56000000 | 0x00000fff, 4);
 FUNC_3(VAR_2, 0, 0x1040c, 0x00fff000 | 0x74000000 | 0x00000fff, 4);

 FUNC_3(VAR_2, 0, 0x10584, VAR_3, 4);

 FUNC_3(VAR_2, 0, 0x0f800, VAR_4? 0x00030032 : 0x00030030, 4);
 FUNC_3(VAR_2, 0, 0x0f804, VAR_4? 0x00030032 : 0x00030030, 4);

 FUNC_2(VAR_2, 0x11, 0, 0x58);
 FUNC_2(VAR_2, 0x11, VAR_4? 0 : 1, 0x59);
}
