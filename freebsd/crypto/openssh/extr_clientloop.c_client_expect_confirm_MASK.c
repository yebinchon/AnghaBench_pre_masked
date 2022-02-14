
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {int dummy; } ;
struct channel_reply_ctx {char const* request_type; int action; } ;
typedef enum confirm_action { ____Placeholder_confirm_action } confirm_action ;


 int FUNC_0 (struct ssh*,int,int ,int ,struct channel_reply_ctx*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct channel_reply_ctx* FUNC_1 (int,int) ;

void
FUNC_2(struct ssh *VAR_2, int VAR_3, const char *VAR_4,
    enum confirm_action VAR_5)
{
 struct channel_reply_ctx *VAR_6 = FUNC_1(1, sizeof(*VAR_6));

 VAR_6->request_type = VAR_4;
 VAR_6->action = VAR_5;

 FUNC_0(VAR_2, VAR_3, VAR_1,
     VAR_0, VAR_6);
}
