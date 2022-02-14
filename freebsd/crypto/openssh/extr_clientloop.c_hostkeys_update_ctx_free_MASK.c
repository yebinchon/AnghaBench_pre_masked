
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostkeys_update_ctx {size_t nkeys; size_t nold; struct hostkeys_update_ctx* ip_str; struct hostkeys_update_ctx* host_str; struct hostkeys_update_ctx* old_keys; struct hostkeys_update_ctx* keys_seen; struct hostkeys_update_ctx* keys; } ;


 int FUNC_0 (struct hostkeys_update_ctx*) ;
 int FUNC_1 (struct hostkeys_update_ctx) ;

__attribute__((used)) static void
FUNC_2(struct hostkeys_update_ctx *VAR_0)
{
 size_t VAR_1;

 if (VAR_0 == ((void*)0))
  return;
 for (VAR_1 = 0; VAR_1 < VAR_0->nkeys; VAR_1++)
  FUNC_1(VAR_0->keys[VAR_1]);
 FUNC_0(VAR_0->keys);
 FUNC_0(VAR_0->keys_seen);
 for (VAR_1 = 0; VAR_1 < VAR_0->nold; VAR_1++)
  FUNC_1(VAR_0->old_keys[VAR_1]);
 FUNC_0(VAR_0->old_keys);
 FUNC_0(VAR_0->host_str);
 FUNC_0(VAR_0->ip_str);
 FUNC_0(VAR_0);
}
