
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char u_int8_t ;
typedef int tbuf ;
struct interface_info {TYPE_4__* client; } ;
struct iaddr {char* iabuf; size_t len; } ;
struct client_lease {char* filename; char* server_name; scalar_t__ expiry; TYPE_2__* options; struct iaddr address; } ;
typedef int name ;
typedef int dbuf ;
struct TYPE_11__ {int name; } ;
struct TYPE_10__ {TYPE_1__* config; } ;
struct TYPE_9__ {char* data; size_t len; } ;
struct TYPE_8__ {char* data; size_t len; } ;
struct TYPE_7__ {int* default_actions; TYPE_3__* defaults; } ;






 size_t VAR_0 ;
 size_t VAR_1 ;
 struct iaddr FUNC_0 (struct iaddr,struct iaddr) ;
 scalar_t__ FUNC_1 (char*,int,TYPE_5__*) ;
 TYPE_5__* VAR_2 ;
 struct interface_info* VAR_3 ;
 int FUNC_2 (char*,char*,size_t) ;
 char* FUNC_3 (struct iaddr) ;
 char* FUNC_4 (int,char*,size_t,int ,int ) ;
 int FUNC_5 (TYPE_4__*,char const*,char*,char*) ;
 int FUNC_6 (char*,int,char*,int) ;
 struct iaddr FUNC_7 (struct iaddr,struct iaddr) ;
 int FUNC_8 (char*,char*,int ) ;

void
FUNC_9(const char *VAR_4, struct client_lease *VAR_5)
{
 struct interface_info *VAR_6 = VAR_3;
 u_int8_t VAR_7[1500], *VAR_8 = ((void*)0);
 int VAR_9;
 size_t VAR_10;
 char VAR_11[128];

 FUNC_5(VAR_6->client, VAR_4, "ip_address",
     FUNC_3(VAR_5->address));

 if (VAR_6->client->config->default_actions[VAR_1] ==
     128) {
  VAR_8 = VAR_6->client->config->defaults[VAR_1].data;
  VAR_10 = VAR_6->client->config->defaults[VAR_1].len;
 } else {
  VAR_8 = VAR_5->options[VAR_1].data;
  VAR_10 = VAR_5->options[VAR_1].len;
 }
 if (VAR_10 && (VAR_10 < sizeof(VAR_5->address.iabuf))) {
  struct iaddr VAR_12, VAR_13, VAR_14;

  FUNC_2(VAR_12.iabuf, VAR_8, VAR_10);
  VAR_12.len = VAR_10;
  VAR_13 = FUNC_7(VAR_5->address, VAR_12);
  if (VAR_13.len) {
   FUNC_5(VAR_6->client, VAR_4, "network_number",
       FUNC_3(VAR_13));
   if (!VAR_5->options[VAR_0].len) {
    VAR_14 = FUNC_0(VAR_13, VAR_12);
    if (VAR_14.len)
     FUNC_5(VAR_6->client, VAR_4,
         "broadcast_address",
         FUNC_3(VAR_14));
   }
  }
 }

 if (VAR_5->filename)
  FUNC_5(VAR_6->client, VAR_4, "filename", VAR_5->filename);
 if (VAR_5->server_name)
  FUNC_5(VAR_6->client, VAR_4, "server_name",
      VAR_5->server_name);
 for (VAR_9 = 0; VAR_9 < 256; VAR_9++) {
  VAR_10 = 0;

  if (VAR_6->client->config->defaults[VAR_9].len) {
   if (VAR_5->options[VAR_9].len) {
    switch (
        VAR_6->client->config->default_actions[VAR_9]) {
    case 130:
     VAR_8 = VAR_5->options[VAR_9].data;
     VAR_10 = VAR_5->options[VAR_9].len;
     break;
    case 128:
supersede:
     VAR_8 = VAR_6->client->
      config->defaults[VAR_9].data;
     VAR_10 = VAR_6->client->
      config->defaults[VAR_9].len;
     break;
    case 129:
     VAR_10 = VAR_6->client->
         config->defaults[VAR_9].len +
         VAR_5->options[VAR_9].len;
     if (VAR_10 >= sizeof(VAR_7)) {
      FUNC_8("no space to %s %s",
          "prepend option",
          VAR_2[VAR_9].name);
      goto supersede;
     }
     VAR_8 = VAR_7;
     FUNC_2(VAR_8,
      VAR_6->client->
      config->defaults[VAR_9].data,
      VAR_6->client->
      config->defaults[VAR_9].len);
     FUNC_2(VAR_8 + VAR_6->client->
      config->defaults[VAR_9].len,
      VAR_5->options[VAR_9].data,
      VAR_5->options[VAR_9].len);
     VAR_8[VAR_10] = '\0';
     break;
    case 131:






     VAR_10 = VAR_6->client->
         config->defaults[VAR_9].len +
         VAR_5->options[VAR_9].len;
     if (VAR_10 >= sizeof(VAR_7)) {
      FUNC_8("no space to %s %s",
          "append option",
          VAR_2[VAR_9].name);
      goto supersede;
     }
     FUNC_2(VAR_7,
      VAR_5->options[VAR_9].data,
      VAR_5->options[VAR_9].len);
     for (VAR_8 = VAR_7 + VAR_5->options[VAR_9].len;
         VAR_8 > VAR_7; VAR_8--, VAR_10--)
      if (VAR_8[-1] != '\0')
       break;
     FUNC_2(VAR_8,
      VAR_6->client->
      config->defaults[VAR_9].data,
      VAR_6->client->
      config->defaults[VAR_9].len);
     VAR_8 = VAR_7;
     VAR_8[VAR_10] = '\0';
    }
   } else {
    VAR_8 = VAR_6->client->
     config->defaults[VAR_9].data;
    VAR_10 = VAR_6->client->
     config->defaults[VAR_9].len;
   }
  } else if (VAR_5->options[VAR_9].len) {
   VAR_10 = VAR_5->options[VAR_9].len;
   VAR_8 = VAR_5->options[VAR_9].data;
  } else {
   VAR_10 = 0;
  }
  if (VAR_10) {
   char VAR_15[256];

   if (FUNC_1(VAR_15, sizeof(VAR_15),
       &VAR_2[VAR_9]))
    FUNC_5(VAR_6->client, VAR_4, VAR_15,
        FUNC_4(VAR_9, VAR_8, VAR_10, 0, 0));
  }
 }
 FUNC_6(VAR_11, sizeof(VAR_11), "%d", (int)VAR_5->expiry);
 FUNC_5(VAR_6->client, VAR_4, "expiry", VAR_11);
}
