
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int advmss; } ;
struct sock {int dummy; } ;
struct dst_entry {int dummy; } ;
typedef int __u16 ;


 int VAR_0 ;
 struct dst_entry* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct dst_entry*,int ) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static __u16 FUNC_3(struct sock *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_2(VAR_1);
 struct dst_entry *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = VAR_2->advmss;

 if (VAR_3 && FUNC_1(VAR_3, VAR_0) < VAR_4) {
  VAR_4 = FUNC_1(VAR_3, VAR_0);
  VAR_2->advmss = VAR_4;
 }

 return (__u16)VAR_4;
}
