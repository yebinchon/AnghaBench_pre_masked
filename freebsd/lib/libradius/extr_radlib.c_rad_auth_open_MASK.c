
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rad_handle {int fd; char* errmsg; int bindto; scalar_t__ eap_msg; scalar_t__ out_created; int type; scalar_t__ authentic_pos; scalar_t__ chap_pass; scalar_t__ pass_pos; scalar_t__ pass_len; int pass; int ident; scalar_t__ num_servers; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct rad_handle *
FUNC_4(void)
{
 struct rad_handle *VAR_2;

 VAR_2 = (struct rad_handle *)FUNC_0(sizeof(struct rad_handle));
 if (VAR_2 != ((void*)0)) {
  FUNC_3();
  VAR_2->fd = -1;
  VAR_2->num_servers = 0;
  VAR_2->ident = FUNC_2();
  VAR_2->errmsg[0] = '\0';
  FUNC_1(VAR_2->pass, 0, sizeof VAR_2->pass);
  VAR_2->pass_len = 0;
  VAR_2->pass_pos = 0;
  VAR_2->chap_pass = 0;
  VAR_2->authentic_pos = 0;
  VAR_2->type = VAR_1;
  VAR_2->out_created = 0;
  VAR_2->eap_msg = 0;
  VAR_2->bindto = VAR_0;
 }
 return VAR_2;
}
