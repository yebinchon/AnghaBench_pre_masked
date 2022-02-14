
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct http_request {int dummy; } ;
struct browser_data {int success; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int,int ,struct browser_data**,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct http_request*) ;
 char* FUNC_5 (struct http_request*) ;
 int FUNC_6 (struct http_request*,struct wpabuf*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;
 int FUNC_9 (int ,char*,char const*) ;
 struct wpabuf* FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(void *VAR_2, struct http_request *VAR_3)
{
 struct browser_data *VAR_4 = VAR_2;
 struct wpabuf *VAR_5;
 const char *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_5(VAR_3);
 FUNC_9(VAR_0, "Browser response received: %s", VAR_6);

 if (FUNC_7(VAR_6, "/") == 0) {
  VAR_4->success = 1;
  VAR_7 = 1;
 } else if (FUNC_8(VAR_6, "/osu/", 5) == 0) {
  VAR_4->success = FUNC_0(VAR_6 + 5);
  VAR_7 = 1;
 }

 VAR_5 = FUNC_10(1);
 if (VAR_5 == ((void*)0)) {
  FUNC_4(VAR_3);
  if (VAR_7)
   FUNC_3();
  return;
 }

 if (VAR_7) {
  FUNC_1(VAR_1, ((void*)0), ((void*)0));
  FUNC_2(0, 500000, VAR_1, &VAR_4, ((void*)0));
 }

 FUNC_6(VAR_3, VAR_5);
}
