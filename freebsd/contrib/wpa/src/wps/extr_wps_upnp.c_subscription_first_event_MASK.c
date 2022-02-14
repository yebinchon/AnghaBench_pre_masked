
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int txt ;
struct wpabuf {int dummy; } ;
struct subscription {TYPE_1__* sm; } ;
struct TYPE_2__ {char* wlanevent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 struct wpabuf* FUNC_1 () ;
 int FUNC_2 (struct subscription*,struct wpabuf*,int ) ;
 int FUNC_3 (char*,int,char*,int) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int ,char*) ;
 struct wpabuf* FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct wpabuf*) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*,char*,char*) ;
 int FUNC_11 (struct wpabuf*,char const*) ;

__attribute__((used)) static int FUNC_12(struct subscription *VAR_1)
{
 char *VAR_2;
 struct wpabuf *VAR_3;
 int VAR_4 = 1;
 const char *VAR_5 =
  "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n"
  "<e:propertyset xmlns:e=\"urn:schemas-upnp-org:event-1-0\">\n";
 const char *VAR_6 = "</e:propertyset>\n";
 char VAR_7[10];
 int VAR_8;

 if (VAR_1->sm->wlanevent == ((void*)0)) {
  struct wpabuf *VAR_9;
  FUNC_5(VAR_0, "WPS UPnP: Use a fake WSC_ACK as the "
      "initial WLANEvent");
  VAR_9 = FUNC_1();
  if (VAR_9) {
   VAR_1->sm->wlanevent = (char *)
    FUNC_0(FUNC_8(VAR_9),
           FUNC_9(VAR_9), ((void*)0));
   FUNC_7(VAR_9);
  }
 }

 VAR_2 = VAR_1->sm->wlanevent;
 if (VAR_2 == ((void*)0) || *VAR_2 == '\0') {
  FUNC_5(VAR_0, "WPS UPnP: WLANEvent not known for "
      "initial event message");
  VAR_2 = "";
 }
 VAR_3 = FUNC_6(500 + FUNC_4(VAR_2));
 if (VAR_3 == ((void*)0))
  return -1;

 FUNC_11(VAR_3, VAR_5);
 FUNC_10(VAR_3, "STAStatus", "1");
 FUNC_3(VAR_7, sizeof(VAR_7), "%d", VAR_4);
 FUNC_10(VAR_3, "APStatus", VAR_7);
 if (*VAR_2)
  FUNC_10(VAR_3, "WLANEvent", VAR_2);
 FUNC_11(VAR_3, VAR_6);

 VAR_8 = FUNC_2(VAR_1, VAR_3, 0);
 if (VAR_8) {
  FUNC_7(VAR_3);
  return VAR_8;
 }
 FUNC_7(VAR_3);

 return 0;
}
