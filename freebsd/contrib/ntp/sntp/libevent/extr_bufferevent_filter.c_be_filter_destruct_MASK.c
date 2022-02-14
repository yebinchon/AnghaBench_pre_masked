
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_filtered {int context; int (* free_context ) (int ) ;} ;
struct bufferevent {int dummy; } ;


 int FUNC_0 (struct bufferevent_filtered*) ;
 int FUNC_1 (int ) ;
 struct bufferevent_filtered* FUNC_2 (struct bufferevent*) ;

__attribute__((used)) static void
FUNC_3(struct bufferevent *VAR_0)
{
 struct bufferevent_filtered *VAR_1 = FUNC_2(VAR_0);
 FUNC_0(VAR_1);
 if (VAR_1->free_context)
  VAR_1->free_context(VAR_1->context);
}
