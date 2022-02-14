
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int client_fd; int server_fd; char* cbuf; char* sbuf; scalar_t__ port; int cmd; int * server_bufev; int * client_bufev; scalar_t__ sbuf_valid; scalar_t__ cbuf_valid; scalar_t__ id; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct session*,int ) ;
 struct session* FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

struct session *
FUNC_2(void)
{
 struct session *VAR_5;

 VAR_5 = FUNC_1(1, sizeof(struct session));
 if (VAR_5 == ((void*)0))
  return (((void*)0));

 VAR_5->id = VAR_2++;
 VAR_5->client_fd = -1;
 VAR_5->server_fd = -1;
 VAR_5->cbuf[0] = '\0';
 VAR_5->cbuf_valid = 0;
 VAR_5->sbuf[0] = '\0';
 VAR_5->sbuf_valid = 0;
 VAR_5->client_bufev = ((void*)0);
 VAR_5->server_bufev = ((void*)0);
 VAR_5->cmd = VAR_0;
 VAR_5->port = 0;

 FUNC_0(&VAR_4, VAR_5, VAR_1);
 VAR_3++;

 return (VAR_5);
}
