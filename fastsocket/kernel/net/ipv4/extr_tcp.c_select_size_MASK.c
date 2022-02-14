
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int mss_cache; } ;
struct sock {int sk_route_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static inline int FUNC_3(struct sock *VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_2(VAR_4);
 int VAR_6 = VAR_5->mss_cache;

 if (VAR_4->sk_route_caps & VAR_2) {
  if (FUNC_1(VAR_4))
   VAR_6 = 0;
  else {
   int VAR_7 = FUNC_0(VAR_1);

   if (VAR_6 >= VAR_7 &&
       VAR_6 <= VAR_7 + (VAR_0 - 1) * VAR_3)
    VAR_6 = VAR_7;
  }
 }

 return VAR_6;
}
