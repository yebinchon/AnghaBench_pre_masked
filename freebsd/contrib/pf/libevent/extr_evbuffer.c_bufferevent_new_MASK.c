
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int enabled; void* cbarg; int errorcb; void* writecb; void* readcb; int ev_write; int ev_read; int * input; int * output; } ;
typedef int everrorcb ;
typedef void* evbuffercb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bufferevent* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 () ;
 int FUNC_3 (int *,int,int ,int ,struct bufferevent*) ;
 int FUNC_4 (struct bufferevent*) ;

struct bufferevent *
FUNC_5(int VAR_4, evbuffercb VAR_5, evbuffercb VAR_6,
    everrorcb VAR_7, void *VAR_8)
{
 struct bufferevent *VAR_9;

 if ((VAR_9 = FUNC_0(1, sizeof(struct bufferevent))) == ((void*)0))
  return (((void*)0));

 if ((VAR_9->input = FUNC_2()) == ((void*)0)) {
  FUNC_4(VAR_9);
  return (((void*)0));
 }

 if ((VAR_9->output = FUNC_2()) == ((void*)0)) {
  FUNC_1(VAR_9->input);
  FUNC_4(VAR_9);
  return (((void*)0));
 }

 FUNC_3(&VAR_9->ev_read, VAR_4, VAR_0, VAR_2, VAR_9);
 FUNC_3(&VAR_9->ev_write, VAR_4, VAR_1, VAR_3, VAR_9);

 VAR_9->readcb = VAR_5;
 VAR_9->writecb = VAR_6;
 VAR_9->errorcb = VAR_7;

 VAR_9->cbarg = VAR_8;






 VAR_9->enabled = VAR_1;

 return (VAR_9);
}
