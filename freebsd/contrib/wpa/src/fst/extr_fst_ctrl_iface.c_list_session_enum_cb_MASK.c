
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_sessions_cb_ctx {int buf; int buflen; int reply_len; } ;
struct fst_session {int dummy; } ;
struct fst_group {int dummy; } ;


 int FUNC_0 (struct fst_session*) ;
 int FUNC_1 (int,int,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct fst_group *VAR_0, struct fst_session *VAR_1,
     void *VAR_2)
{
 struct list_sessions_cb_ctx *VAR_3 = VAR_2;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->buf, VAR_3->buflen, " %u", FUNC_0(VAR_1));

 VAR_3->buf += VAR_4;
 VAR_3->buflen -= VAR_4;
 VAR_3->reply_len += VAR_4;
}
