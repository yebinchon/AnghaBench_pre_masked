
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssh_channels {void* channel_max_fd; } ;
struct ssh {struct ssh_channels* chanctxt; } ;
struct TYPE_3__ {int rfd; int wfd; int sock; int efd; int extended_usage; int isatty; int wfd_isatty; int self; } ;
typedef TYPE_1__ Channel ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct ssh *VAR_2, Channel *VAR_3, int VAR_4, int VAR_5, int VAR_6,
    int VAR_7, int VAR_8, int VAR_9)
{
 struct ssh_channels *VAR_10 = VAR_2->chanctxt;


 VAR_10->channel_max_fd = FUNC_0(VAR_10->channel_max_fd, VAR_4);
 VAR_10->channel_max_fd = FUNC_0(VAR_10->channel_max_fd, VAR_5);
 VAR_10->channel_max_fd = FUNC_0(VAR_10->channel_max_fd, VAR_6);

 if (VAR_4 != -1)
  FUNC_2(VAR_4, VAR_1, VAR_0);
 if (VAR_5 != -1 && VAR_5 != VAR_4)
  FUNC_2(VAR_5, VAR_1, VAR_0);
 if (VAR_6 != -1 && VAR_6 != VAR_4 && VAR_6 != VAR_5)
  FUNC_2(VAR_6, VAR_1, VAR_0);

 VAR_3->rfd = VAR_4;
 VAR_3->wfd = VAR_5;
 VAR_3->sock = (VAR_4 == VAR_5) ? VAR_4 : -1;
 VAR_3->efd = VAR_6;
 VAR_3->extended_usage = VAR_7;

 if ((VAR_3->isatty = VAR_9) != 0)
  FUNC_1("channel %d: rfd %d isatty", VAR_3->self, VAR_3->rfd);






 if (VAR_8) {
  if (VAR_4 != -1)
   FUNC_4(VAR_4);
  if (VAR_5 != -1)
   FUNC_4(VAR_5);
  if (VAR_6 != -1)
   FUNC_4(VAR_6);
 }
}
