
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent {int enabled; int ev_read; } ;
struct TYPE_2__ {struct bufferevent bev; scalar_t__ read_suspended; } ;
struct bufferevent_openssl {TYPE_1__ bev; scalar_t__ underlying; int ssl; scalar_t__ write_blocked_on_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct bufferevent*,int,int ) ;
 int FUNC_2 (struct bufferevent_openssl*) ;
 int FUNC_3 (struct bufferevent_openssl*,int) ;
 int FUNC_4 (struct bufferevent_openssl*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct bufferevent_openssl *VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8 = 0;

 while (VAR_5->write_blocked_on_read) {
  VAR_6 = FUNC_4(VAR_5, VAR_4);
  if (VAR_6 & (VAR_1|VAR_2))
   break;
 }
 if (VAR_5->write_blocked_on_read)
  return;

 VAR_7 = FUNC_2(VAR_5);

 while (VAR_7) {
  VAR_6 = FUNC_3(VAR_5, VAR_7);
  VAR_8 |= VAR_6;

  if (VAR_6 & (VAR_1|VAR_2))
   break;

  if (VAR_5->bev.read_suspended)
   break;
  VAR_7 = FUNC_0(VAR_5->ssl);
  if (!VAR_7 && VAR_5->underlying)
   VAR_7 = FUNC_2(VAR_5);
 }

 if (VAR_8 & VAR_3) {
  struct bufferevent *VAR_9 = &VAR_5->bev.bev;

  FUNC_1(VAR_9, VAR_0, 0);
 }

 if (!VAR_5->underlying) {

  if (VAR_5->bev.read_suspended ||
      !(VAR_5->bev.bev.enabled & VAR_0)) {
   FUNC_5(&VAR_5->bev.bev.ev_read);
  }
 }
}
