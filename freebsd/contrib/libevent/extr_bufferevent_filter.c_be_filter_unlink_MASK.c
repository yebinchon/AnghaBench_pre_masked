
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int options; } ;
struct bufferevent_filtered {TYPE_2__* underlying; TYPE_1__ bev; } ;
struct bufferevent {int dummy; } ;
struct TYPE_9__ {int refcnt; } ;
struct TYPE_8__ {scalar_t__ errorcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct bufferevent_filtered*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *,int *,int *,int *) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (char*) ;
 struct bufferevent_filtered* FUNC_6 (struct bufferevent*) ;

__attribute__((used)) static void
FUNC_7(struct bufferevent *VAR_3)
{
 struct bufferevent_filtered *VAR_4 = FUNC_6(VAR_3);
 FUNC_1(VAR_4);

 if (VAR_4->bev.options & VAR_0) {





  if (FUNC_0(VAR_4->underlying)->refcnt < 2) {
   FUNC_5("BEV_OPT_CLOSE_ON_FREE set on an "
       "bufferevent with too few references");
  } else {
   FUNC_2(VAR_4->underlying);
  }
 } else {
  if (VAR_4->underlying) {
   if (VAR_4->underlying->errorcb == VAR_2)
    FUNC_3(VAR_4->underlying,
        ((void*)0), ((void*)0), ((void*)0), ((void*)0));
   FUNC_4(VAR_4->underlying,
       VAR_1);
  }
 }
}
