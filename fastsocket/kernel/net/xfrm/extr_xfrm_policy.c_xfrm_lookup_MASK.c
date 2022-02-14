
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct net {int dummy; } ;
struct flowi {int dummy; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net*,struct dst_entry**,struct flowi*,struct sock*,int) ;
 int FUNC_1 (struct dst_entry*) ;

int FUNC_2(struct net *VAR_2, struct dst_entry **VAR_3, struct flowi *VAR_4,
  struct sock *VAR_5, int VAR_6)
{
 int VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 if (VAR_7 == -VAR_1) {
  FUNC_1(*VAR_3);
  *VAR_3 = ((void*)0);
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
