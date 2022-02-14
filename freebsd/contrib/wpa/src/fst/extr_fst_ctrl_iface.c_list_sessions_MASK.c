
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_sessions_cb_ctx {char* buf; size_t buflen; int reply_len; } ;
struct fst_group {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (struct fst_group*,int ,struct list_sessions_cb_ctx*) ;
 struct fst_group* FUNC_2 (char const*) ;
 int VAR_1 ;
 int FUNC_3 (char*,size_t,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2, char *VAR_3, size_t VAR_4)
{
 struct list_sessions_cb_ctx VAR_5;
 struct fst_group *VAR_6;

 VAR_6 = FUNC_2(VAR_2);
 if (!VAR_6) {
  FUNC_0(VAR_0, "CTRL: Cannot find group '%s'",
      VAR_2);
  return FUNC_3(VAR_3, VAR_4, "FAIL\n");
 }

 VAR_5.buf = VAR_3;
 VAR_5.buflen = VAR_4;
 VAR_5.reply_len = 0;

 FUNC_1(VAR_6, VAR_1, &VAR_5);

 VAR_5.reply_len += FUNC_3(VAR_3 + VAR_5.reply_len, VAR_5.buflen, "\n");

 return VAR_5.reply_len;
}
