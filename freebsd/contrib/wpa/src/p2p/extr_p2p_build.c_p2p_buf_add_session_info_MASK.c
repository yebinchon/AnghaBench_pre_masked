
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (struct wpabuf*,char const*,size_t) ;
 int FUNC_3 (struct wpabuf*,int ) ;
 int FUNC_4 (struct wpabuf*,int ) ;

void FUNC_5(struct wpabuf *VAR_2, const char *VAR_3)
{
 size_t VAR_4 = 0;

 if (VAR_3 && VAR_3[0])
  VAR_4 = FUNC_0(VAR_3);


 FUNC_4(VAR_2, VAR_1);
 FUNC_3(VAR_2, (u16) VAR_4);

 if (VAR_3) {
  FUNC_2(VAR_2, VAR_3, VAR_4);
  FUNC_1(VAR_0, "P2P: * Session Info Data (%s)", VAR_3);
 }
}
