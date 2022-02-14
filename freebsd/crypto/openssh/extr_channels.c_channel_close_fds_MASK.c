
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_3__ {int sock; int rfd; int wfd; int efd; } ;
typedef TYPE_1__ Channel ;


 int FUNC_0 (struct ssh*,int*) ;

__attribute__((used)) static void
FUNC_1(struct ssh *VAR_0, Channel *VAR_1)
{
 int VAR_2 = VAR_1->sock, VAR_3 = VAR_1->rfd, VAR_4 = VAR_1->wfd, VAR_5 = VAR_1->efd;

 FUNC_0(VAR_0, &VAR_1->sock);
 if (VAR_3 != VAR_2)
  FUNC_0(VAR_0, &VAR_1->rfd);
 if (VAR_4 != VAR_2 && VAR_4 != VAR_3)
  FUNC_0(VAR_0, &VAR_1->wfd);
 if (VAR_5 != VAR_2 && VAR_5 != VAR_3 && VAR_5 != VAR_4)
  FUNC_0(VAR_0, &VAR_1->efd);
}
