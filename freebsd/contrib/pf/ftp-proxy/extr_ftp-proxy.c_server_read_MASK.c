
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int sbuf_valid; int id; int client_bufev; scalar_t__ sbuf; } ;
struct bufferevent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct bufferevent*,scalar_t__,size_t) ;
 int FUNC_1 (struct bufferevent*,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct session*) ;
 int FUNC_4 (scalar_t__,size_t*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,int ,...) ;
 int FUNC_6 (struct session*) ;
 int VAR_4 ;

void
FUNC_7(struct bufferevent *VAR_5, void *VAR_6)
{
 struct session *VAR_7 = VAR_6;
 size_t VAR_8, VAR_9;
 int VAR_10;

 FUNC_1(VAR_5, VAR_4, 0);

 do {
  VAR_8 = sizeof VAR_7->sbuf - VAR_7->sbuf_valid;
  VAR_9 = FUNC_0(VAR_5, VAR_7->sbuf + VAR_7->sbuf_valid,
      VAR_8);
  VAR_7->sbuf_valid += VAR_9;

  while ((VAR_10 = FUNC_4(VAR_7->sbuf, &VAR_7->sbuf_valid)) > 0) {
   FUNC_5(VAR_0, "#%d server: %s", VAR_7->id, VAR_2);
   if (!FUNC_6(VAR_7)) {
    FUNC_3(VAR_7);
    return;
   }
   FUNC_2(VAR_7->client_bufev, VAR_2, VAR_3);
  }

  if (VAR_10 == -1) {
   FUNC_5(VAR_1, "#%d server reply too long or not"
       " clean", VAR_7->id);
   FUNC_3(VAR_7);
   return;
  }
 } while (VAR_9 == VAR_8);
}
