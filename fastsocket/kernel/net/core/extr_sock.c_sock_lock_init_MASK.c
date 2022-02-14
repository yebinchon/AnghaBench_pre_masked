
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {size_t sk_family; } ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sock*,int ,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct sock *VAR_4)
{
 FUNC_0(VAR_4,
   VAR_2[VAR_4->sk_family],
   VAR_3 + VAR_4->sk_family,
   VAR_0[VAR_4->sk_family],
   VAR_1 + VAR_4->sk_family);
}
