
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sockaddr_llc {scalar_t__ sllc_xid; scalar_t__ sllc_test; } ;
struct sock {scalar_t__ sk_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline u8 FUNC_0(struct sock *VAR_3, struct sockaddr_llc *VAR_4)
{
 u8 VAR_5 = VAR_1;

 if (VAR_4->sllc_test || VAR_4->sllc_xid)
  VAR_5 = VAR_1;
 else if (VAR_3->sk_type == VAR_2)
  VAR_5 = VAR_0;
 return VAR_5;
}
