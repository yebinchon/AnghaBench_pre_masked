
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wpabuf*,char*,char*,char*) ;
 int FUNC_1 (struct wpabuf*,char*,int ) ;
 int FUNC_2 (struct wpabuf*,char*) ;

__attribute__((used)) static void FUNC_3(struct wpabuf *VAR_4)
{
 FUNC_1(VAR_4, "<interface name=\"%s\">",
        VAR_2);

 FUNC_1(VAR_4, "<method name=\"%s\">", VAR_0);
 FUNC_0(VAR_4, "interface", "s", "in");
 FUNC_0(VAR_4, "propname", "s", "in");
 FUNC_0(VAR_4, "value", "v", "out");
 FUNC_2(VAR_4, "</method>");

 FUNC_1(VAR_4, "<method name=\"%s\">", VAR_1);
 FUNC_0(VAR_4, "interface", "s", "in");
 FUNC_0(VAR_4, "props", "a{sv}", "out");
 FUNC_2(VAR_4, "</method>");

 FUNC_1(VAR_4, "<method name=\"%s\">", VAR_3);
 FUNC_0(VAR_4, "interface", "s", "in");
 FUNC_0(VAR_4, "propname", "s", "in");
 FUNC_0(VAR_4, "value", "v", "in");
 FUNC_2(VAR_4, "</method>");

 FUNC_2(VAR_4, "</interface>");
}
