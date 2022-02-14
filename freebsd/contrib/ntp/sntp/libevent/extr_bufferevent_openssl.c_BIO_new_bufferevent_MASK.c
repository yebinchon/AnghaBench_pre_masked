
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bufferevent {int dummy; } ;
struct TYPE_4__ {int init; int shutdown; struct bufferevent* ptr; } ;
typedef TYPE_1__ BIO ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static BIO *
FUNC_2(struct bufferevent *VAR_0, int VAR_1)
{
 BIO *VAR_2;
 if (!VAR_0)
  return ((void*)0);
 if (!(VAR_2 = FUNC_0(FUNC_1())))
  return ((void*)0);
 VAR_2->init = 1;
 VAR_2->ptr = VAR_0;
 VAR_2->shutdown = VAR_1 ? 1 : 0;
 return VAR_2;
}
