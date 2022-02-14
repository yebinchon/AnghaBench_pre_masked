
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_filtered {scalar_t__ outbuf_cb; scalar_t__ inbuf_cb; int context; int (* free_context ) (int ) ;} ;
struct bufferevent {int output; int input; } ;


 int FUNC_0 (struct bufferevent_filtered*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 struct bufferevent_filtered* FUNC_3 (struct bufferevent*) ;

__attribute__((used)) static void
FUNC_4(struct bufferevent *VAR_0)
{
 struct bufferevent_filtered *VAR_1 = FUNC_3(VAR_0);
 FUNC_0(VAR_1);
 if (VAR_1->free_context)
  VAR_1->free_context(VAR_1->context);

 if (VAR_1->inbuf_cb)
  FUNC_1(VAR_0->input, VAR_1->inbuf_cb);

 if (VAR_1->outbuf_cb)
  FUNC_1(VAR_0->output, VAR_1->outbuf_cb);
}
