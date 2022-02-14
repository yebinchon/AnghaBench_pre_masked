
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_filtered {void (* free_context ) (void*) ;int outbuf_cb; struct bufferevent* underlying; void* context; void* process_out; void* process_in; int bev; } ;
struct bufferevent {int output; int ev_base; } ;
typedef void* bufferevent_filter_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (struct bufferevent*,int) ;
 int FUNC_1 (struct bufferevent*,int *) ;
 int VAR_8 ;
 int FUNC_2 (struct bufferevent*) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int) ;
 int FUNC_4 (struct bufferevent*) ;
 int VAR_9 ;
 int FUNC_5 (struct bufferevent*,int ,int ,int ,struct bufferevent_filtered*) ;
 int FUNC_6 (struct bufferevent*,int ) ;
 struct bufferevent* FUNC_7 (struct bufferevent_filtered*) ;
 int FUNC_8 (int ,int ,struct bufferevent_filtered*) ;
 struct bufferevent_filtered* FUNC_9 (int,int) ;
 int FUNC_10 (struct bufferevent_filtered*) ;

struct bufferevent *
FUNC_11(struct bufferevent *VAR_10,
         bufferevent_filter_cb VAR_11,
         bufferevent_filter_cb VAR_12,
         int VAR_13,
         void (*VAR_14)(void *),
         void *VAR_15)
{
 struct bufferevent_filtered *VAR_16;
 int VAR_17 = VAR_13 & ~VAR_0;

 if (!VAR_10)
  return ((void*)0);

 if (!VAR_11)
  VAR_11 = VAR_7;
 if (!VAR_12)
  VAR_12 = VAR_7;

 VAR_16 = FUNC_9(1, sizeof(struct bufferevent_filtered));
 if (!VAR_16)
  return ((void*)0);

 if (FUNC_3(&VAR_16->bev, VAR_10->ev_base,
        &VAR_9, VAR_17) < 0) {
  FUNC_10(VAR_16);
  return ((void*)0);
 }
 if (VAR_13 & VAR_0) {
  FUNC_1(FUNC_7(VAR_16), ((void*)0));
 }

 VAR_16->underlying = VAR_10;

 VAR_16->process_in = VAR_11;
 VAR_16->process_out = VAR_12;
 VAR_16->free_context = VAR_14;
 VAR_16->context = VAR_15;

 FUNC_5(VAR_16->underlying,
     VAR_5, VAR_6, VAR_4, VAR_16);

 VAR_16->outbuf_cb = FUNC_8(FUNC_7(VAR_16)->output,
    VAR_8, VAR_16);

 FUNC_4(FUNC_7(VAR_16));
 FUNC_2(VAR_10);

 FUNC_0(VAR_10, VAR_2|VAR_3);
 FUNC_6(VAR_10, VAR_1);

 return FUNC_7(VAR_16);
}
