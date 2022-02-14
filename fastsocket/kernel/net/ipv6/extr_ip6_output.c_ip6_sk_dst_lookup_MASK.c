
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct flowi {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {int dst_cookie; } ;


 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,struct dst_entry**,struct flowi*) ;
 struct dst_entry* FUNC_2 (struct sock*,struct dst_entry*,struct flowi*) ;
 struct dst_entry* FUNC_3 (struct sock*,int ) ;

int FUNC_4(struct sock *VAR_0, struct dst_entry **VAR_1, struct flowi *VAR_2)
{
 *VAR_1 = ((void*)0);
 if (VAR_0) {
  *VAR_1 = FUNC_3(VAR_0, FUNC_0(VAR_0)->dst_cookie);
  *VAR_1 = FUNC_2(VAR_0, *VAR_1, VAR_2);
 }

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
