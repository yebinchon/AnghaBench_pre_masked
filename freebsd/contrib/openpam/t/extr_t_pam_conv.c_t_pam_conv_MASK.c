
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct t_pam_conv_script {int nmsg; int * comment; TYPE_2__* resps; TYPE_1__* msgs; } ;
struct pam_response {struct pam_response* resp; int resp_retcode; } ;
struct pam_message {int msg_style; int msg; } ;
struct TYPE_4__ {int resp_retcode; int * resp; } ;
struct TYPE_3__ {int msg_style; int msg; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;

 int FUNC_0 (int **,char*,int,...) ;
 struct pam_response* FUNC_1 (int,int) ;
 int FUNC_2 (struct pam_response*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 struct pam_response* FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;

int
FUNC_7(int VAR_4, const struct pam_message **VAR_5,
    struct pam_response **VAR_6, void *VAR_7)
{
 struct t_pam_conv_script *VAR_8 = VAR_7;
 struct pam_response *VAR_9;
 int VAR_10;


 if (VAR_4 != VAR_8->nmsg) {
  FUNC_0(&VAR_8->comment, "expected %d messages, got %d",
      VAR_8->nmsg, VAR_4);
  return (VAR_1);
 }
 if (VAR_4 <= 0 || VAR_4 > VAR_2) {

  VAR_8->comment = ((void*)0);
  return (VAR_1);
 }


 if ((VAR_9 = FUNC_1(VAR_4, sizeof *VAR_9)) == ((void*)0))
  goto enomem;
 for (VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10) {
  if (VAR_5[VAR_10]->msg_style != VAR_8->msgs[VAR_10].msg_style) {
   FUNC_0(&VAR_8->comment,
       "message %d expected style %d got %d", VAR_10,
       VAR_8->msgs[VAR_10].msg_style, VAR_5[VAR_10]->msg_style);
   goto fail;
  }
  if (FUNC_3(VAR_5[VAR_10]->msg, VAR_8->msgs[VAR_10].msg) != 0) {
   FUNC_0(&VAR_8->comment,
       "message %d expected \"%d\" got \"%d\"", VAR_10,
       VAR_8->msgs[VAR_10].msg, VAR_5[VAR_10]->msg);
   goto fail;
  }
  switch (VAR_5[VAR_10]->msg_style) {
  case 130:
   FUNC_6("[PAM_PROMPT_ECHO_OFF] %s\n", VAR_5[VAR_10]->msg);
   break;
  case 129:
   FUNC_6("[PAM_PROMPT_ECHO_ON] %s\n", VAR_5[VAR_10]->msg);
   break;
  case 131:
   FUNC_6("[PAM_ERROR_MSG] %s\n", VAR_5[VAR_10]->msg);
   break;
  case 128:
   FUNC_6("[PAM_TEXT_INFO] %s\n", VAR_5[VAR_10]->msg);
   break;
  default:
   FUNC_0(&VAR_8->comment, "invalid message style %d",
       VAR_5[VAR_10]->msg_style);
   goto fail;
  }

  if (VAR_8->resps[VAR_10].resp != ((void*)0) &&
      (VAR_9[VAR_10].resp = FUNC_4(VAR_8->resps[VAR_10].resp)) == ((void*)0))
   goto enomem;
  VAR_9[VAR_10].resp_retcode = VAR_8->resps[VAR_10].resp_retcode;
 }
 VAR_8->comment = ((void*)0);
 *VAR_6 = VAR_9;
 return (VAR_3);
enomem:
 FUNC_0(&VAR_8->comment, "%d", FUNC_5(VAR_0));
fail:
 for (VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10)
  FUNC_2(VAR_9[VAR_10].resp);
 FUNC_2(VAR_9);
 return (VAR_1);
}
