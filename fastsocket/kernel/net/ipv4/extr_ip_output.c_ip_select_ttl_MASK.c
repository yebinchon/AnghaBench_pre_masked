
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_sock {int uc_ttl; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dst_entry*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct inet_sock *VAR_1, struct dst_entry *VAR_2)
{
 int VAR_3 = VAR_1->uc_ttl;

 if (VAR_3 < 0)
  VAR_3 = FUNC_0(VAR_2, VAR_0);
 return VAR_3;
}
