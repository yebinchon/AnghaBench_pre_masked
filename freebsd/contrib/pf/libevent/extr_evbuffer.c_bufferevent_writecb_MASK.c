
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ low; } ;
struct bufferevent {int cbarg; int (* errorcb ) (struct bufferevent*,short,int ) ;int timeout_write; int ev_write; int output; int (* writecb ) (struct bufferevent*,int ) ;TYPE_1__ wm_write; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 short VAR_5 ;
 short VAR_6 ;
 short VAR_7 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct bufferevent*,int ) ;
 int FUNC_4 (struct bufferevent*,short,int ) ;

__attribute__((used)) static void
FUNC_5(int VAR_9, short VAR_10, void *VAR_11)
{
 struct bufferevent *VAR_12 = VAR_11;
 int VAR_13 = 0;
 short VAR_14 = VAR_6;

 if (VAR_10 == VAR_7) {
  VAR_14 |= VAR_5;
  goto error;
 }

 if (FUNC_0(VAR_12->output)) {
     VAR_13 = FUNC_2(VAR_12->output, VAR_9);
     if (VAR_13 == -1) {



      if (VAR_8 == VAR_0 ||
   VAR_8 == VAR_2 ||
   VAR_8 == VAR_1)
       goto reschedule;

      VAR_14 |= VAR_4;





     } else if (VAR_13 == 0) {

      VAR_14 |= VAR_3;
     }
     if (VAR_13 <= 0)
      goto error;
 }

 if (FUNC_0(VAR_12->output) != 0)
  FUNC_1(&VAR_12->ev_write, VAR_12->timeout_write);





 if (VAR_12->writecb != ((void*)0) &&
     FUNC_0(VAR_12->output) <= VAR_12->wm_write.low)
  (*VAR_12->writecb)(VAR_12, VAR_12->cbarg);

 return;

 reschedule:
 if (FUNC_0(VAR_12->output) != 0)
  FUNC_1(&VAR_12->ev_write, VAR_12->timeout_write);
 return;

 error:
 (*VAR_12->errorcb)(VAR_12, VAR_14, VAR_12->cbarg);
}
