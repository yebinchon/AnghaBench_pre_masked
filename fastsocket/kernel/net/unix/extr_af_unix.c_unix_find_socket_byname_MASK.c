
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int dummy; } ;
struct sock {int dummy; } ;
struct net {int dummy; } ;


 struct sock* FUNC_0 (struct net*,struct sockaddr_un*,int,int,unsigned int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static inline struct sock *FUNC_4(struct net *VAR_1,
         struct sockaddr_un *VAR_2,
         int VAR_3, int VAR_4,
         unsigned VAR_5)
{
 struct sock *VAR_6;

 FUNC_2(&VAR_0);
 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  FUNC_1(VAR_6);
 FUNC_3(&VAR_0);
 return VAR_6;
}
