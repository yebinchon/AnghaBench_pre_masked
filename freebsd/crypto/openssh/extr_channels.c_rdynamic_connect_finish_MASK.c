
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct channel_connect {int dummy; } ;
typedef int cctx ;
struct TYPE_4__ {struct channel_connect connect_ctx; int type; int host_port; int path; } ;
typedef TYPE_1__ Channel ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct channel_connect*) ;
 int FUNC_1 (struct ssh*,TYPE_1__*,int,int,int,int ,int,int ) ;
 int FUNC_2 (struct ssh*,int ,int ,int ,int *,int *,struct channel_connect*,int *,int *) ;
 int FUNC_3 (struct channel_connect*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct ssh *VAR_2, Channel *VAR_3)
{
 struct channel_connect VAR_4;
 int VAR_5;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 VAR_5 = FUNC_2(VAR_2, VAR_3->path, VAR_3->host_port, VAR_0, ((void*)0),
     ((void*)0), &VAR_4, ((void*)0), ((void*)0));
 if (VAR_5 == -1)
  FUNC_0(&VAR_4);
 else {

  VAR_3->type = VAR_1;
  VAR_3->connect_ctx = VAR_4;
  FUNC_1(VAR_2, VAR_3, VAR_5, VAR_5, -1, 0, 1, 0);
 }
 return VAR_5;
}
