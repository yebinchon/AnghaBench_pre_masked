
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpabuf*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct wpabuf *VAR_2)
{
 FUNC_0(VAR_2, "<interface name=\"%s\">"
        "<method name=\"%s\">"
        "<arg name=\"data\" type=\"s\" direction=\"out\"/>"
        "</method>"
        "</interface>",
        VAR_0,
        VAR_1);
}
