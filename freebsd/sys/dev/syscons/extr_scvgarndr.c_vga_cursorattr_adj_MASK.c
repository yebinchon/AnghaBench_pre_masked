
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_4__ {int* bg; } ;
struct TYPE_5__ {TYPE_1__ curs_attr; } ;
typedef TYPE_2__ scr_stat ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static u_short
FUNC_2(scr_stat *VAR_0, u_short VAR_1, int VAR_2)
{
 int VAR_3;
 u_short VAR_4, VAR_5, VAR_6, VAR_7;







 VAR_5 = VAR_2 ? 0x7000 : 0xf000;
 VAR_4 = VAR_1 & VAR_5;
 VAR_6 = VAR_1 & 0x0f00;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0->curs_attr.bg); VAR_3++) {
  VAR_7 = (VAR_0->curs_attr.bg[VAR_3] << 12) & VAR_5;
  if (VAR_7 != VAR_4 && VAR_7 != (VAR_6 << 4))
   break;
 }
 if (VAR_3 == FUNC_0(VAR_0->curs_attr.bg))
  return (FUNC_1(VAR_1, VAR_2));
 return (VAR_6 | VAR_7 | (VAR_2 ? VAR_1 & 0x8000 : 0));
}
