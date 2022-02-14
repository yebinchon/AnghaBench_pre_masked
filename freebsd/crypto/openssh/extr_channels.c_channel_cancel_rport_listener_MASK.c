
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {int dummy; } ;
struct Forward {int listen_port; int listen_host; int * listen_path; } ;


 int FUNC_0 (struct ssh*,int *) ;
 int FUNC_1 (struct ssh*,int ,int ) ;

int
FUNC_2(struct ssh *VAR_0, struct Forward *VAR_1)
{
 if (VAR_1->listen_path != ((void*)0)) {
  return FUNC_0(VAR_0,
      VAR_1->listen_path);
 } else {
  return FUNC_1(VAR_0,
      VAR_1->listen_host, VAR_1->listen_port);
 }
}
