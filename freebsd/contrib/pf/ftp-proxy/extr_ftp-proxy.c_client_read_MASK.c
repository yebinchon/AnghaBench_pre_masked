
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int cbuf_valid; int id; int server_bufev; scalar_t__ cbuf; } ;
struct bufferevent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct bufferevent*,scalar_t__,size_t) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct session*) ;
 int FUNC_3 (struct session*) ;
 int FUNC_4 (scalar_t__,size_t*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,int ,...) ;

void
FUNC_6(struct bufferevent *VAR_4, void *VAR_5)
{
 struct session *VAR_6 = VAR_5;
 size_t VAR_7, VAR_8;
 int VAR_9;

 do {
  VAR_7 = sizeof VAR_6->cbuf - VAR_6->cbuf_valid;
  VAR_8 = FUNC_0(VAR_4, VAR_6->cbuf + VAR_6->cbuf_valid,
      VAR_7);
  VAR_6->cbuf_valid += VAR_8;

  while ((VAR_9 = FUNC_4(VAR_6->cbuf, &VAR_6->cbuf_valid)) > 0) {
   FUNC_5(VAR_0, "#%d client: %s", VAR_6->id, VAR_2);
   if (!FUNC_2(VAR_6)) {
    FUNC_3(VAR_6);
    return;
   }
   FUNC_1(VAR_6->server_bufev, VAR_2, VAR_3);
  }

  if (VAR_9 == -1) {
   FUNC_5(VAR_1, "#%d client command too long or not"
       " clean", VAR_6->id);
   FUNC_3(VAR_6);
   return;
  }
 } while (VAR_8 == VAR_7);
}
