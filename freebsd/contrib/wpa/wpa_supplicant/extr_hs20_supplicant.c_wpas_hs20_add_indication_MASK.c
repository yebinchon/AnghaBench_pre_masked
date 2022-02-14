
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wpabuf*,int ) ;
 int FUNC_1 (struct wpabuf*,int) ;
 int FUNC_2 (struct wpabuf*,int) ;

void FUNC_3(struct wpabuf *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;
 u8 VAR_9;

 VAR_8 = (VAR_2 >> 4) + 1;
 if (VAR_7 > 0 && VAR_8 > VAR_7)
  VAR_8 = VAR_7;
 if (VAR_8 < 2)
  VAR_6 = -1;

 FUNC_2(VAR_5, VAR_4);
 FUNC_2(VAR_5, VAR_6 >= 0 ? 7 : 5);
 FUNC_0(VAR_5, VAR_3);
 FUNC_2(VAR_5, VAR_0);
 VAR_9 = (VAR_8 - 1) << 4;
 if (VAR_6 >= 0)
  VAR_9 |= VAR_1;
 FUNC_2(VAR_5, VAR_9);
 if (VAR_6 >= 0)
  FUNC_1(VAR_5, VAR_6);
}
