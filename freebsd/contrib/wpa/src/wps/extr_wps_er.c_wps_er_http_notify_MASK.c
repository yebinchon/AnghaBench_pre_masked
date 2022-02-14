
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er {unsigned int event_id; } ;
struct http_request {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (char*) ;
 char* FUNC_1 (struct http_request*) ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct wps_er*,struct http_request*,unsigned int) ;
 int FUNC_6 (struct http_request*) ;

__attribute__((used)) static void FUNC_7(struct wps_er *VAR_1, struct http_request *VAR_2)
{
 char *VAR_3 = FUNC_1(VAR_2);

 if (FUNC_3(VAR_3, "/event/", 7) == 0) {
  unsigned int VAR_4;
  char *VAR_5;
  VAR_4 = FUNC_0(VAR_3 + 7);
  if (VAR_4 != VAR_1->event_id) {
   FUNC_4(VAR_0, "WPS ER: HTTP event for an "
       "unknown event id %u", VAR_4);
   return;
  }
  VAR_5 = FUNC_2(VAR_3 + 7, '/');
  if (VAR_5 == ((void*)0))
   return;
  VAR_5++;
  FUNC_5(VAR_1, VAR_2, FUNC_0(VAR_5));
 } else {
  FUNC_4(VAR_0, "WPS ER: Unknown HTTP NOTIFY for '%s'",
      VAR_3);
  FUNC_6(VAR_2);
 }
}
