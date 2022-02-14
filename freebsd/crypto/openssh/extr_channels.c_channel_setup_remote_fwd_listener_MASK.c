
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {int dummy; } ;
struct ForwardOptions {int dummy; } ;
struct Forward {int * listen_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ssh*,int ,struct Forward*,struct ForwardOptions*) ;
 int FUNC_1 (struct ssh*,int ,struct Forward*,int*,struct ForwardOptions*) ;
 int FUNC_2 (struct ssh*,struct Forward*) ;
 int FUNC_3 (char*) ;

int
FUNC_4(struct ssh *VAR_2, struct Forward *VAR_3,
    int *VAR_4, struct ForwardOptions *VAR_5)
{
 if (!FUNC_2(VAR_2, VAR_3)) {
  FUNC_3("port forwarding refused");
  return 0;
 }
 if (VAR_3->listen_path != ((void*)0)) {
  return FUNC_0(VAR_2,
      VAR_1, VAR_3, VAR_5);
 } else {
  return FUNC_1(VAR_2,
      VAR_0, VAR_3, VAR_4,
      VAR_5);
 }
}
