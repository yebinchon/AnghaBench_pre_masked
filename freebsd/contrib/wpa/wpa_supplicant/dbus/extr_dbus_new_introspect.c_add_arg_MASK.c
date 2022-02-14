
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;


 int FUNC_0 (struct wpabuf*,char*,char const*) ;
 int FUNC_1 (struct wpabuf*,char*) ;

__attribute__((used)) static void FUNC_2(struct wpabuf *VAR_0, const char *VAR_1, const char *VAR_2,
      const char *VAR_3)
{
 FUNC_0(VAR_0, "<arg name=\"%s\"", VAR_1);
 if (VAR_2)
  FUNC_0(VAR_0, " type=\"%s\"", VAR_2);
 if (VAR_3)
  FUNC_0(VAR_0, " direction=\"%s\"", VAR_3);
 FUNC_1(VAR_0, "/>");
}
