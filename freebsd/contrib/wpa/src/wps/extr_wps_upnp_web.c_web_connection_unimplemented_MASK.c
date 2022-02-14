
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct http_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpabuf*,int ) ;
 int FUNC_1 (struct http_request*) ;
 int FUNC_2 (struct http_request*,struct wpabuf*) ;
 struct wpabuf* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct http_request *VAR_1)
{
 struct wpabuf *VAR_2;
 VAR_2 = FUNC_3(200);
 if (VAR_2 == ((void*)0)) {
  FUNC_1(VAR_1);
  return;
 }
 FUNC_0(VAR_2, VAR_0);
 FUNC_2(VAR_1, VAR_2);
}
