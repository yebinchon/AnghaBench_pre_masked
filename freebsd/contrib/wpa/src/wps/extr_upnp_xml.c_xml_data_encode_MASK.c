
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct wpabuf {int dummy; } ;


 int FUNC_0 (struct wpabuf*,char*) ;
 int FUNC_1 (struct wpabuf*,char) ;

void FUNC_2(struct wpabuf *VAR_0, const char *VAR_1, int VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  u8 VAR_4 = ((u8 *) VAR_1)[VAR_3];
  if (VAR_4 == '<') {
   FUNC_0(VAR_0, "&lt;");
   continue;
  }
  if (VAR_4 == '>') {
   FUNC_0(VAR_0, "&gt;");
   continue;
  }
  if (VAR_4 == '&') {
   FUNC_0(VAR_0, "&amp;");
   continue;
  }
  if (VAR_4 == '\'') {
   FUNC_0(VAR_0, "&apos;");
   continue;
  }
  if (VAR_4 == '"') {
   FUNC_0(VAR_0, "&quot;");
   continue;
  }





  FUNC_1(VAR_0, VAR_4);
 }
}
