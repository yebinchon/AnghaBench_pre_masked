
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_callback {int dummy; } ;
struct bufferevent {void* cbarg; int (* errorcb ) (struct bufferevent*,short,void*) ;int (* writecb ) (struct bufferevent*,void*) ;int (* readcb ) (struct bufferevent*,void*) ;} ;
struct bufferevent_private {short eventcb_pending; int errno_pending; scalar_t__ writecb_pending; scalar_t__ readcb_pending; struct bufferevent bev; } ;
typedef int (* bufferevent_event_cb ) (struct bufferevent*,short,void*) ;
typedef int (* bufferevent_data_cb ) (struct bufferevent*,void*) ;


 short VAR_0 ;
 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bufferevent*) ;

__attribute__((used)) static void
FUNC_4(struct event_callback *VAR_1, void *VAR_2)
{
 struct bufferevent_private *VAR_3 = VAR_2;
 struct bufferevent *VAR_4 = &VAR_3->bev;

 FUNC_0(VAR_4);



 if ((VAR_3->eventcb_pending & VAR_0) &&
     VAR_4->errorcb) {


  bufferevent_event_cb VAR_5 = VAR_4->errorcb;
  void *VAR_6 = VAR_4->cbarg;
  VAR_3->eventcb_pending &= ~VAR_0;
  do { FUNC_0(VAR_4); VAR_5(VAR_4, VAR_0, VAR_6); FUNC_0(VAR_4); } while(0);
 }
 if (VAR_3->readcb_pending && VAR_4->readcb) {
  bufferevent_data_cb VAR_7 = VAR_4->readcb;
  void *VAR_8 = VAR_4->cbarg;
  VAR_3->readcb_pending = 0;
  do { FUNC_0(VAR_4); VAR_7(VAR_4, VAR_8); FUNC_0(VAR_4); } while(0);
 }
 if (VAR_3->writecb_pending && VAR_4->writecb) {
  bufferevent_data_cb VAR_9 = VAR_4->writecb;
  void *VAR_10 = VAR_4->cbarg;
  VAR_3->writecb_pending = 0;
  do { FUNC_0(VAR_4); VAR_9(VAR_4, VAR_10); FUNC_0(VAR_4); } while(0);
 }
 if (VAR_3->eventcb_pending && VAR_4->errorcb) {
  bufferevent_event_cb VAR_11 = VAR_4->errorcb;
  void *VAR_12 = VAR_4->cbarg;
  short VAR_13 = VAR_3->eventcb_pending;
  int VAR_14 = VAR_3->errno_pending;
  VAR_3->eventcb_pending = 0;
  VAR_3->errno_pending = 0;
  FUNC_1(VAR_14);
  do { FUNC_0(VAR_4); VAR_11(VAR_4,VAR_13,VAR_12); FUNC_0(VAR_4); } while(0);
 }
 FUNC_3(VAR_4);

}
