
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wps_event_ {int subscriber_sequence; int data; TYPE_2__* s; TYPE_1__* addr; } ;
struct wpabuf {int dummy; } ;
struct TYPE_4__ {int uuid; } ;
struct TYPE_3__ {int path; int domain_and_port; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;
 struct wpabuf* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct wpabuf*,char*,int) ;
 char* FUNC_5 (struct wpabuf*,int ) ;
 int FUNC_6 (struct wpabuf*,int ) ;
 int FUNC_7 (struct wpabuf*,char*) ;

__attribute__((used)) static struct wpabuf * FUNC_8(struct wps_event_ *VAR_0)
{
 struct wpabuf *VAR_1;
 char *VAR_2;

 VAR_1 = FUNC_2(1000 + FUNC_3(VAR_0->data));
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 FUNC_4(VAR_1, "NOTIFY %s HTTP/1.1\r\n", VAR_0->addr->path);
 FUNC_7(VAR_1, "SERVER: Unspecified, UPnP/1.0, Unspecified\r\n");
 FUNC_4(VAR_1, "HOST: %s\r\n", VAR_0->addr->domain_and_port);
 FUNC_7(VAR_1, "CONTENT-TYPE: text/xml; charset=\"utf-8\"\r\n"
         "NT: upnp:event\r\n"
         "NTS: upnp:propchange\r\n");
 FUNC_7(VAR_1, "SID: uuid:");
 VAR_2 = FUNC_5(VAR_1, 0);
 FUNC_1(VAR_0->s->uuid, VAR_2, 80);
 FUNC_5(VAR_1, FUNC_0(VAR_2));
 FUNC_7(VAR_1, "\r\n");
 FUNC_4(VAR_1, "SEQ: %u\r\n", VAR_0->subscriber_sequence);
 FUNC_4(VAR_1, "CONTENT-LENGTH: %d\r\n",
        (int) FUNC_3(VAR_0->data));
 FUNC_7(VAR_1, "\r\n");
 FUNC_6(VAR_1, VAR_0->data);
 return VAR_1;
}
