
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct valnode {int code; int v0; int v1; int val; struct valnode* next; } ;
struct TYPE_5__ {int curval; struct valnode** hashtbl; int next_vnode; TYPE_1__* vmap; } ;
typedef TYPE_2__ opt_state_t ;
struct TYPE_4__ {int const_val; int is_const; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(opt_state_t *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 u_int VAR_8;
 int VAR_9;
 struct valnode *VAR_10;

 VAR_8 = (u_int)VAR_5 ^ (VAR_6 << 4) ^ (VAR_7 << 8);
 VAR_8 %= VAR_3;

 for (VAR_10 = VAR_4->hashtbl[VAR_8]; VAR_10; VAR_10 = VAR_10->next)
  if (VAR_10->code == VAR_5 && VAR_10->v0 == VAR_6 && VAR_10->v1 == VAR_7)
   return VAR_10->val;

 VAR_9 = ++VAR_4->curval;
 if (FUNC_1(VAR_5) == VAR_0 &&
     (FUNC_0(VAR_5) == VAR_1 || FUNC_0(VAR_5) == VAR_2)) {
  VAR_4->vmap[VAR_9].const_val = VAR_6;
  VAR_4->vmap[VAR_9].is_const = 1;
 }
 VAR_10 = VAR_4->next_vnode++;
 VAR_10->val = VAR_9;
 VAR_10->code = VAR_5;
 VAR_10->v0 = VAR_6;
 VAR_10->v1 = VAR_7;
 VAR_10->next = VAR_4->hashtbl[VAR_8];
 VAR_4->hashtbl[VAR_8] = VAR_10;

 return VAR_9;
}
