
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct channel_connect {int dummy; } ;
typedef int cctx ;
struct TYPE_4__ {int host_port; struct channel_connect connect_ctx; int path; } ;
typedef TYPE_1__ Channel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct channel_connect*) ;
 TYPE_1__* FUNC_1 (struct ssh*,char*,int ,int,int,int,int ,int ,int ,char*,int) ;
 int FUNC_2 (struct ssh*,char const*,int,int ,char*,char*,struct channel_connect*,int *,int *) ;
 int FUNC_3 (struct channel_connect*,int ,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static Channel *
FUNC_5(struct ssh *VAR_4, const char *VAR_5, int VAR_6,
    char *VAR_7, char *VAR_8)
{
 struct channel_connect VAR_9;
 Channel *VAR_10;
 int VAR_11;

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_2, VAR_7, VAR_8,
     &VAR_9, ((void*)0), ((void*)0));
 if (VAR_11 == -1) {
  FUNC_0(&VAR_9);
  return ((void*)0);
 }
 VAR_10 = FUNC_1(VAR_4, VAR_7, VAR_3, VAR_11, VAR_11, -1,
     VAR_1, VAR_0, 0, VAR_8, 1);
 VAR_10->host_port = VAR_6;
 VAR_10->path = FUNC_4(VAR_5);
 VAR_10->connect_ctx = VAR_9;

 return VAR_10;
}
